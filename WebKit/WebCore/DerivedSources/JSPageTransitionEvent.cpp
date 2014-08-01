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
#include "JSPageTransitionEvent.h"

#include "PageTransitionEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSPageTransitionEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSPageTransitionEventTableValues[3] =
{
    { "persisted", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPageTransitionEventPersisted), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPageTransitionEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSPageTransitionEventTable = { 4, 3, JSPageTransitionEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSPageTransitionEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSPageTransitionEventConstructorTable = { 1, 0, JSPageTransitionEventConstructorTableValues, 0 };
class JSPageTransitionEventConstructor : public DOMConstructorObject {
public:
    JSPageTransitionEventConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSPageTransitionEventConstructor::s_info = { "PageTransitionEventConstructor", 0, &JSPageTransitionEventConstructorTable, 0 };

JSPageTransitionEventConstructor::JSPageTransitionEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSPageTransitionEventConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSPageTransitionEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSPageTransitionEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPageTransitionEventConstructor, DOMObject>(exec, &JSPageTransitionEventConstructorTable, this, propertyName, slot);
}

bool JSPageTransitionEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSPageTransitionEventConstructor, DOMObject>(exec, &JSPageTransitionEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSPageTransitionEventPrototypeTableValues[2] =
{
    { "initPageTransitionEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsPageTransitionEventPrototypeFunctionInitPageTransitionEvent), (intptr_t)4 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSPageTransitionEventPrototypeTable = { 2, 1, JSPageTransitionEventPrototypeTableValues, 0 };
const ClassInfo JSPageTransitionEventPrototype::s_info = { "PageTransitionEventPrototype", 0, &JSPageTransitionEventPrototypeTable, 0 };

JSObject* JSPageTransitionEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSPageTransitionEvent>(exec, globalObject);
}

bool JSPageTransitionEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSPageTransitionEventPrototypeTable, this, propertyName, slot);
}

bool JSPageTransitionEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSPageTransitionEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSPageTransitionEvent::s_info = { "PageTransitionEvent", &JSEvent::s_info, &JSPageTransitionEventTable, 0 };

JSPageTransitionEvent::JSPageTransitionEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<PageTransitionEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

JSObject* JSPageTransitionEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSPageTransitionEventPrototype(globalObject, JSPageTransitionEventPrototype::createStructure(JSEventPrototype::self(exec, globalObject)));
}

bool JSPageTransitionEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPageTransitionEvent, Base>(exec, &JSPageTransitionEventTable, this, propertyName, slot);
}

bool JSPageTransitionEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSPageTransitionEvent, Base>(exec, &JSPageTransitionEventTable, this, propertyName, descriptor);
}

JSValue jsPageTransitionEventPersisted(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSPageTransitionEvent* castedThis = static_cast<JSPageTransitionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PageTransitionEvent* imp = static_cast<PageTransitionEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->persisted());
    return result;
}

JSValue jsPageTransitionEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSPageTransitionEvent* domObject = static_cast<JSPageTransitionEvent*>(asObject(slotBase));
    return JSPageTransitionEvent::getConstructor(exec, domObject->globalObject());
}
JSValue JSPageTransitionEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPageTransitionEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsPageTransitionEventPrototypeFunctionInitPageTransitionEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSPageTransitionEvent::s_info))
        return throwVMTypeError(exec);
    JSPageTransitionEvent* castedThis = static_cast<JSPageTransitionEvent*>(asObject(thisValue));
    PageTransitionEvent* imp = static_cast<PageTransitionEvent*>(castedThis->impl());
    const String& typeArg = ustringToString(exec->argument(0).toString(exec));
    bool canBubbleArg = exec->argument(1).toBoolean(exec);
    bool cancelableArg = exec->argument(2).toBoolean(exec);
    bool persisted = exec->argument(3).toBoolean(exec);

    imp->initPageTransitionEvent(typeArg, canBubbleArg, cancelableArg, persisted);
    return JSValue::encode(jsUndefined());
}


}
