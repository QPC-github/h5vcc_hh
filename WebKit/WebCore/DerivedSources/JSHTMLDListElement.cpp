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

#include "config.h"
#include "JSHTMLDListElement.h"

#include "HTMLDListElement.h"
#include "HTMLNames.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLDListElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDListElementTableValues[3] =
{
    { "compact", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDListElementCompact), (intptr_t)setJSHTMLDListElementCompact THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDListElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDListElementTable = { 4, 3, JSHTMLDListElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDListElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDListElementConstructorTable = { 1, 0, JSHTMLDListElementConstructorTableValues, 0 };
class JSHTMLDListElementConstructor : public DOMConstructorObject {
public:
    JSHTMLDListElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLDListElementConstructor::s_info = { "HTMLDListElementConstructor", 0, &JSHTMLDListElementConstructorTable, 0 };

JSHTMLDListElementConstructor::JSHTMLDListElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLDListElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSHTMLDListElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLDListElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDListElementConstructor, DOMObject>(exec, &JSHTMLDListElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLDListElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDListElementConstructor, DOMObject>(exec, &JSHTMLDListElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDListElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDListElementPrototypeTable = { 1, 0, JSHTMLDListElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLDListElementPrototype::s_info = { "HTMLDListElementPrototype", 0, &JSHTMLDListElementPrototypeTable, 0 };

JSObject* JSHTMLDListElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDListElement>(exec, globalObject);
}

const ClassInfo JSHTMLDListElement::s_info = { "HTMLDListElement", &JSHTMLElement::s_info, &JSHTMLDListElementTable, 0 };

JSHTMLDListElement::JSHTMLDListElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDListElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLDListElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLDListElementPrototype(globalObject, JSHTMLDListElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLDListElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDListElement, Base>(exec, &JSHTMLDListElementTable, this, propertyName, slot);
}

bool JSHTMLDListElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDListElement, Base>(exec, &JSHTMLDListElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLDListElementCompact(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLDListElement* castedThis = static_cast<JSHTMLDListElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLDListElement* imp = static_cast<HTMLDListElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::compactAttr));
    return result;
}

JSValue jsHTMLDListElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLDListElement* domObject = static_cast<JSHTMLDListElement*>(asObject(slotBase));
    return JSHTMLDListElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLDListElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLDListElement, Base>(exec, propertyName, value, &JSHTMLDListElementTable, this, slot);
}

void setJSHTMLDListElementCompact(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDListElement* castedThis = static_cast<JSHTMLDListElement*>(thisObject);
    HTMLDListElement* imp = static_cast<HTMLDListElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::compactAttr, value.toBoolean(exec));
}

JSValue JSHTMLDListElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDListElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
