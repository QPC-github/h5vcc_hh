/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DOM_MathMLNAMES_H
#define DOM_MathMLNAMES_H

#include "QualifiedName.h"

namespace WebCore {

 namespace MathMLNames {

#ifndef DOM_MathMLNAMES_HIDE_GLOBALS
// Namespace
extern const WebCore::AtomicString mathmlNamespaceURI;

// Tags
extern const WebCore::QualifiedName annotation_xmlTag;
extern const WebCore::QualifiedName malignmarkTag;
extern const WebCore::QualifiedName mathTag;
extern const WebCore::QualifiedName mfencedTag;
extern const WebCore::QualifiedName mfracTag;
extern const WebCore::QualifiedName mglyphTag;
extern const WebCore::QualifiedName miTag;
extern const WebCore::QualifiedName mnTag;
extern const WebCore::QualifiedName moTag;
extern const WebCore::QualifiedName moverTag;
extern const WebCore::QualifiedName mrootTag;
extern const WebCore::QualifiedName mrowTag;
extern const WebCore::QualifiedName msTag;
extern const WebCore::QualifiedName msqrtTag;
extern const WebCore::QualifiedName msubTag;
extern const WebCore::QualifiedName msubsupTag;
extern const WebCore::QualifiedName msupTag;
extern const WebCore::QualifiedName mtextTag;
extern const WebCore::QualifiedName munderTag;
extern const WebCore::QualifiedName munderoverTag;
// Attributes
extern const WebCore::QualifiedName closeAttr;
extern const WebCore::QualifiedName denomalignAttr;
extern const WebCore::QualifiedName linethicknessAttr;
extern const WebCore::QualifiedName mathbackgroundAttr;
extern const WebCore::QualifiedName mathcolorAttr;
extern const WebCore::QualifiedName mathsizeAttr;
extern const WebCore::QualifiedName numalignAttr;
extern const WebCore::QualifiedName openAttr;
extern const WebCore::QualifiedName separatorsAttr;
extern const WebCore::QualifiedName stretchyAttr;
#endif

WebCore::QualifiedName** getMathMLTags(size_t* size);
WebCore::QualifiedName** getMathMLAttrs(size_t* size);

void init();

} }

#endif

