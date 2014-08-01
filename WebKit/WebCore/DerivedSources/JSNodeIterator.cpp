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
#include "JSNodeIterator.h"

#include "JSNode.h"
#include "JSNodeFilter.h"
#include "Node.h"
#include "NodeFilter.h"
#include "NodeIterator.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNodeIterator);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeIteratorTableValues[8] =
{
    { "root", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorRoot), (intptr_t)0 THUNK_GENERATOR(0) },
    { "whatToShow", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorWhatToShow), (intptr_t)0 THUNK_GENERATOR(0) },
    { "filter", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorFilter), (intptr_t)0 THUNK_GENERATOR(0) },
    { "expandEntityReferences", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorExpandEntityReferences), (intptr_t)0 THUNK_GENERATOR(0) },
    { "referenceNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorReferenceNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "pointerBeforeReferenceNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorPointerBeforeReferenceNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeIteratorTable = { 18, 15, JSNodeIteratorTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeIteratorConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeIteratorConstructorTable = { 1, 0, JSNodeIteratorConstructorTableValues, 0 };
class JSNodeIteratorConstructor : public DOMConstructorObject {
public:
    JSNodeIteratorConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSNodeIteratorConstructor::s_info = { "NodeIteratorConstructor", 0, &JSNodeIteratorConstructorTable, 0 };

JSNodeIteratorConstructor::JSNodeIteratorConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSNodeIteratorConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSNodeIteratorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSNodeIteratorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeIteratorConstructor, DOMObject>(exec, &JSNodeIteratorConstructorTable, this, propertyName, slot);
}

bool JSNodeIteratorConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNodeIteratorConstructor, DOMObject>(exec, &JSNodeIteratorConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeIteratorPrototypeTableValues[4] =
{
    { "nextNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodeIteratorPrototypeFunctionNextNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "previousNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodeIteratorPrototypeFunctionPreviousNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "detach", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodeIteratorPrototypeFunctionDetach), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeIteratorPrototypeTable = { 8, 7, JSNodeIteratorPrototypeTableValues, 0 };
const ClassInfo JSNodeIteratorPrototype::s_info = { "NodeIteratorPrototype", 0, &JSNodeIteratorPrototypeTable, 0 };

JSObject* JSNodeIteratorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNodeIterator>(exec, globalObject);
}

bool JSNodeIteratorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNodeIteratorPrototypeTable, this, propertyName, slot);
}

bool JSNodeIteratorPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSNodeIteratorPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSNodeIterator::s_info = { "NodeIterator", 0, &JSNodeIteratorTable, 0 };

JSNodeIterator::JSNodeIterator(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<NodeIterator> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSNodeIterator::~JSNodeIterator()
{
    forgetDOMObject(this, impl());
}

JSObject* JSNodeIterator::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSNodeIteratorPrototype(globalObject, JSNodeIteratorPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSNodeIterator::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeIterator, Base>(exec, &JSNodeIteratorTable, this, propertyName, slot);
}

bool JSNodeIterator::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNodeIterator, Base>(exec, &JSNodeIteratorTable, this, propertyName, descriptor);
}

JSValue jsNodeIteratorRoot(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->root()));
    return result;
}

JSValue jsNodeIteratorWhatToShow(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->whatToShow());
    return result;
}

JSValue jsNodeIteratorFilter(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->filter()));
    return result;
}

JSValue jsNodeIteratorExpandEntityReferences(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = jsBoolean(imp->expandEntityReferences());
    return result;
}

JSValue jsNodeIteratorReferenceNode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->referenceNode()));
    return result;
}

JSValue jsNodeIteratorPointerBeforeReferenceNode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = jsBoolean(imp->pointerBeforeReferenceNode());
    return result;
}

JSValue jsNodeIteratorConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeIterator* domObject = static_cast<JSNodeIterator*>(asObject(slotBase));
    return JSNodeIterator::getConstructor(exec, domObject->globalObject());
}
JSValue JSNodeIterator::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeIteratorConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionNextNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeIterator::s_info))
        return throwVMTypeError(exec);
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(thisValue));
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nextNode(exec, ec)));
    setDOMException(exec, ec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionPreviousNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeIterator::s_info))
        return throwVMTypeError(exec);
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(thisValue));
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->previousNode(exec, ec)));
    setDOMException(exec, ec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionDetach(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeIterator::s_info))
        return throwVMTypeError(exec);
    JSNodeIterator* castedThis = static_cast<JSNodeIterator*>(asObject(thisValue));
    NodeIterator* imp = static_cast<NodeIterator*>(castedThis->impl());

    imp->detach();
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NodeIterator* object)
{
    return getDOMObjectWrapper<JSNodeIterator>(exec, globalObject, object);
}
NodeIterator* toNodeIterator(JSC::JSValue value)
{
    return value.inherits(&JSNodeIterator::s_info) ? static_cast<JSNodeIterator*>(asObject(value))->impl() : 0;
}

}
