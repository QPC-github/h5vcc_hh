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

#if ENABLE(XSLT)

#include "JSXSLTProcessor.h"

#include "Document.h"
#include "DocumentFragment.h"
#include "NodeFilter.h"
#include "XSLTProcessor.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXSLTProcessor);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXSLTProcessorTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXSLTProcessorConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXSLTProcessorTable = { 2, 1, JSXSLTProcessorTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXSLTProcessorConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXSLTProcessorConstructorTable = { 1, 0, JSXSLTProcessorConstructorTableValues, 0 };
const ClassInfo JSXSLTProcessorConstructor::s_info = { "XSLTProcessorConstructor", 0, &JSXSLTProcessorConstructorTable, 0 };

JSXSLTProcessorConstructor::JSXSLTProcessorConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSXSLTProcessorConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSXSLTProcessorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSXSLTProcessorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXSLTProcessorConstructor, DOMObject>(exec, &JSXSLTProcessorConstructorTable, this, propertyName, slot);
}

bool JSXSLTProcessorConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXSLTProcessorConstructor, DOMObject>(exec, &JSXSLTProcessorConstructorTable, this, propertyName, descriptor);
}

ConstructType JSXSLTProcessorConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSXSLTProcessor;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXSLTProcessorPrototypeTableValues[9] =
{
    { "importStylesheet", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionImportStylesheet), (intptr_t)1 THUNK_GENERATOR(0) },
    { "transformToFragment", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionTransformToFragment), (intptr_t)2 THUNK_GENERATOR(0) },
    { "transformToDocument", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionTransformToDocument), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setParameter", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionSetParameter), (intptr_t)3 THUNK_GENERATOR(0) },
    { "getParameter", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionGetParameter), (intptr_t)2 THUNK_GENERATOR(0) },
    { "removeParameter", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionRemoveParameter), (intptr_t)2 THUNK_GENERATOR(0) },
    { "clearParameters", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionClearParameters), (intptr_t)0 THUNK_GENERATOR(0) },
    { "reset", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionReset), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXSLTProcessorPrototypeTable = { 17, 15, JSXSLTProcessorPrototypeTableValues, 0 };
const ClassInfo JSXSLTProcessorPrototype::s_info = { "XSLTProcessorPrototype", 0, &JSXSLTProcessorPrototypeTable, 0 };

JSObject* JSXSLTProcessorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXSLTProcessor>(exec, globalObject);
}

bool JSXSLTProcessorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXSLTProcessorPrototypeTable, this, propertyName, slot);
}

bool JSXSLTProcessorPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSXSLTProcessorPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSXSLTProcessor::s_info = { "XSLTProcessor", 0, &JSXSLTProcessorTable, 0 };

JSXSLTProcessor::JSXSLTProcessor(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<XSLTProcessor> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSXSLTProcessor::~JSXSLTProcessor()
{
    forgetDOMObject(this, impl());
}

JSObject* JSXSLTProcessor::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXSLTProcessorPrototype(globalObject, JSXSLTProcessorPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSXSLTProcessor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXSLTProcessor, Base>(exec, &JSXSLTProcessorTable, this, propertyName, slot);
}

bool JSXSLTProcessor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXSLTProcessor, Base>(exec, &JSXSLTProcessorTable, this, propertyName, descriptor);
}

JSValue jsXSLTProcessorConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXSLTProcessor* domObject = static_cast<JSXSLTProcessor*>(asObject(slotBase));
    return JSXSLTProcessor::getConstructor(exec, domObject->globalObject());
}
JSValue JSXSLTProcessor::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXSLTProcessorConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionImportStylesheet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    return JSValue::encode(castedThis->importStylesheet(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToFragment(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    return JSValue::encode(castedThis->transformToFragment(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToDocument(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    return JSValue::encode(castedThis->transformToDocument(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionSetParameter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    return JSValue::encode(castedThis->setParameter(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionGetParameter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    return JSValue::encode(castedThis->getParameter(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionRemoveParameter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    return JSValue::encode(castedThis->removeParameter(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionClearParameters(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    XSLTProcessor* imp = static_cast<XSLTProcessor*>(castedThis->impl());

    imp->clearParameters();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionReset(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXSLTProcessor::s_info))
        return throwVMTypeError(exec);
    JSXSLTProcessor* castedThis = static_cast<JSXSLTProcessor*>(asObject(thisValue));
    XSLTProcessor* imp = static_cast<XSLTProcessor*>(castedThis->impl());

    imp->reset();
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XSLTProcessor* object)
{
    return getDOMObjectWrapper<JSXSLTProcessor>(exec, globalObject, object);
}
XSLTProcessor* toXSLTProcessor(JSC::JSValue value)
{
    return value.inherits(&JSXSLTProcessor::s_info) ? static_cast<JSXSLTProcessor*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(XSLT)
