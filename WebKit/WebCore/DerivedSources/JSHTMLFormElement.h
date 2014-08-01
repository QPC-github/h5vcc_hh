/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLFormElement_h
#define JSHTMLFormElement_h

#include "JSHTMLElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class HTMLFormElement;

class JSHTMLFormElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLFormElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLFormElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    virtual void getOwnPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
    static JSC::JSValue indexGetter(JSC::ExecState*, JSC::JSValue, unsigned);
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFormElement*, const JSC::Identifier&);
    static JSC::JSValue nameGetter(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
};


class JSHTMLFormElementPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSHTMLFormElementPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionSubmit(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionReset(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionCheckValidity(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLFormElementElements(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLFormElementLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLFormElementName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementNoValidate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementNoValidate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementAcceptCharset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementAcceptCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementAction(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementAction(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementEncoding(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementEncoding(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementEnctype(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementEnctype(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementMethod(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementMethod(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementTarget(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLFormElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif