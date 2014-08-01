/*
 * Copyright (c) 2009, Google Inc.  All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ApplicationCacheHost_h
#define ApplicationCacheHost_h

#if ENABLE(OFFLINE_WEB_APPLICATIONS)

#include <wtf/Deque.h>
#include <wtf/OwnPtr.h>
#include <wtf/PassRefPtr.h>
#include <wtf/RefPtr.h>
#include <wtf/Vector.h>

namespace WebCore {
    class ApplicationCache;
    class DOMApplicationCache;
    class DocumentLoader;
    class KURL;
    class ResourceLoader;
    class ResourceError;
    class ResourceRequest;
    class ResourceResponse;
    class SubstituteData;
#if PLATFORM(CHROMIUM)
    class ApplicationCacheHostInternal;
#else
    class ApplicationCacheGroup;
    class ApplicationCacheResource;
    class ApplicationCacheStorage;
#endif

    class ApplicationCacheHost : public Noncopyable {
    public:
        // The Status numeric values are specified in the HTML5 spec.
        enum Status {
            UNCACHED = 0,
            IDLE = 1,
            CHECKING = 2,
            DOWNLOADING = 3,
            UPDATEREADY = 4,
            OBSOLETE = 5
        };

        enum EventID {
            CHECKING_EVENT = 0,
            ERROR_EVENT,
            NOUPDATE_EVENT,
            DOWNLOADING_EVENT,
            PROGRESS_EVENT,
            UPDATEREADY_EVENT,
            CACHED_EVENT,
            OBSOLETE_EVENT  // Must remain the last value, this is used to size arrays.
        };

        ApplicationCacheHost(DocumentLoader*);
        ~ApplicationCacheHost();

        void selectCacheWithoutManifest();
        void selectCacheWithManifest(const KURL& manifestURL);

        void maybeLoadMainResource(ResourceRequest&, SubstituteData&);
        bool maybeLoadFallbackForMainResponse(const ResourceRequest&, const ResourceResponse&);
        bool maybeLoadFallbackForMainError(const ResourceRequest&, const ResourceError&);
        void mainResourceDataReceived(const char* data, int length, long long lengthReceived, bool allAtOnce);
        void finishedLoadingMainResource();
        void failedLoadingMainResource();

        bool maybeLoadResource(ResourceLoader*, ResourceRequest&, const KURL& originalURL);
        bool maybeLoadFallbackForRedirect(ResourceLoader*, ResourceRequest&, const ResourceResponse&);
        bool maybeLoadFallbackForResponse(ResourceLoader*, const ResourceResponse&);
        bool maybeLoadFallbackForError(ResourceLoader*, const ResourceError&);

        bool maybeLoadSynchronously(ResourceRequest&, ResourceError&, ResourceResponse&, Vector<char>& data);
        void maybeLoadFallbackSynchronously(const ResourceRequest&, ResourceError&, ResourceResponse&, Vector<char>& data);

        bool canCacheInPageCache() const;

        Status status() const;  
        bool update();
        bool swapCache();

        void setDOMApplicationCache(DOMApplicationCache*);
        void notifyDOMApplicationCache(EventID, int progressTotal, int progressDone);

        void stopDeferringEvents(); // Also raises the events that have been queued up.

        ApplicationCache* applicationCacheForInspector() const { return applicationCache(); }

    private:
        bool isApplicationCacheEnabled();
        DocumentLoader* documentLoader() const { return m_documentLoader; }

        struct DeferredEvent {
            EventID eventID;
            int progressTotal;
            int progressDone;
            DeferredEvent(EventID id, int total, int done) : eventID(id), progressTotal(total), progressDone(done) { }
        };

        DOMApplicationCache* m_domApplicationCache;
        DocumentLoader* m_documentLoader;
        bool m_defersEvents; // Events are deferred until after document onload.
        Vector<DeferredEvent> m_deferredEvents;

        void dispatchDOMEvent(EventID, int progressTotal, int progressDone);

#if PLATFORM(CHROMIUM)
        friend class ApplicationCacheHostInternal;
        OwnPtr<ApplicationCacheHostInternal> m_internal;
        ApplicationCache* applicationCache() const { return 0; } // FIXME: Implement for Chromium Web Inspector Support.
#else
        friend class ApplicationCacheGroup;
        friend class ApplicationCacheStorage;

        bool scheduleLoadFallbackResourceFromApplicationCache(ResourceLoader*, ApplicationCache* = 0);
        bool shouldLoadResourceFromApplicationCache(const ResourceRequest&, ApplicationCacheResource*&);
        bool getApplicationCacheFallbackResource(const ResourceRequest&, ApplicationCacheResource*&, ApplicationCache* = 0);
        void setCandidateApplicationCacheGroup(ApplicationCacheGroup* group);
        ApplicationCacheGroup* candidateApplicationCacheGroup() const { return m_candidateApplicationCacheGroup; }
        void setApplicationCache(PassRefPtr<ApplicationCache> applicationCache);
        ApplicationCache* applicationCache() const { return m_applicationCache.get(); }
        ApplicationCache* mainResourceApplicationCache() const { return m_mainResourceApplicationCache.get(); }


        // The application cache that the document loader is associated with (if any).
        RefPtr<ApplicationCache> m_applicationCache;

        // Before an application cache has finished loading, this will be the candidate application
        // group that the document loader is associated with.
        ApplicationCacheGroup* m_candidateApplicationCacheGroup;

        // This is the application cache the main resource was loaded from (if any).
        RefPtr<ApplicationCache> m_mainResourceApplicationCache;
#endif
    };

}  // namespace WebCore

#endif  // ENABLE(OFFLINE_WEB_APPLICATIONS)
#endif  // ApplicationCacheHost_h
