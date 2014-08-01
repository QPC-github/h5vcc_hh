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
#include "JSEventException.h"

#include "EventException.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSEventException);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEventExceptionTableValues[5] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventExceptionCode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventExceptionName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventExceptionMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventExceptionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEventExceptionTable = { 10, 7, JSEventExceptionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEventExceptionConstructorTableValues[2] =
{
    { "UNSPECIFIED_EVENT_TYPE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventExceptionUNSPECIFIED_EVENT_TYPE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEventExceptionConstructorTable = { 2, 1, JSEventExceptionConstructorTableValues, 0 };
class JSEventExceptionConstructor : public DOMConstructorObject {
public:
    JSEventExceptionConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSEventExceptionConstructor::s_info = { "EventExceptionConstructor", 0, &JSEventExceptionConstructorTable, 0 };

JSEventExceptionConstructor::JSEventExceptionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSEventExceptionConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSEventExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSEventExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEventExceptionConstructor, DOMObject>(exec, &JSEventExceptionConstructorTable, this, propertyName, slot);
}

bool JSEventExceptionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEventExceptionConstructor, DOMObject>(exec, &JSEventExceptionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEventExceptionPrototypeTableValues[3] =
{
    { "UNSPECIFIED_EVENT_TYPE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventExceptionUNSPECIFIED_EVENT_TYPE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "toString", DontDelete | DontEnum | Function, (intptr_t)static_cast<NativeFunction>(jsEventExceptionPrototypeFunctionToString), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEventExceptionPrototypeTable = { 5, 3, JSEventExceptionPrototypeTableValues, 0 };
static const HashTable* getJSEventExceptionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEventExceptionPrototypeTable);
}
const ClassInfo JSEventExceptionPrototype::s_info = { "EventExceptionPrototype", 0, 0, getJSEventExceptionPrototypeTable };

JSObject* JSEventExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEventException>(exec, globalObject);
}

bool JSEventExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSEventExceptionPrototype, JSObject>(exec, getJSEventExceptionPrototypeTable(exec), this, propertyName, slot);
}

bool JSEventExceptionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSEventExceptionPrototype, JSObject>(exec, getJSEventExceptionPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSEventExceptionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEventExceptionTable);
}
const ClassInfo JSEventException::s_info = { "EventException", 0, 0, getJSEventExceptionTable };

JSEventException::JSEventException(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<EventException> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSEventException::~JSEventException()
{
    forgetDOMObject(this, impl());
}

JSObject* JSEventException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSEventExceptionPrototype(globalObject, JSEventExceptionPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSEventException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEventException, Base>(exec, getJSEventExceptionTable(exec), this, propertyName, slot);
}

bool JSEventException::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEventException, Base>(exec, getJSEventExceptionTable(exec), this, propertyName, descriptor);
}

JSValue jsEventExceptionCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEventException* castedThis = static_cast<JSEventException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventException* imp = static_cast<EventException*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->code());
    return result;
}

JSValue jsEventExceptionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEventException* castedThis = static_cast<JSEventException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventException* imp = static_cast<EventException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsEventExceptionMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEventException* castedThis = static_cast<JSEventException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventException* imp = static_cast<EventException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}

JSValue jsEventExceptionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEventException* domObject = static_cast<JSEventException*>(asObject(slotBase));
    return JSEventException::getConstructor(exec, domObject->globalObject());
}
JSValue JSEventException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEventExceptionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEventExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEventException::s_info))
        return throwVMTypeError(exec);
    JSEventException* castedThis = static_cast<JSEventException*>(asObject(thisValue));
    EventException* imp = static_cast<EventException*>(castedThis->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsEventExceptionUNSPECIFIED_EVENT_TYPE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, EventException* object)
{
    return getDOMObjectWrapper<JSEventException>(exec, globalObject, object);
}
EventException* toEventException(JSC::JSValue value)
{
    return value.inherits(&JSEventException::s_info) ? static_cast<JSEventException*>(asObject(value))->impl() : 0;
}

}
