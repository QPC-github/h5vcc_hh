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
#include "JSCSSValueList.h"

#include "CSSValue.h"
#include "CSSValueList.h"
#include "JSCSSValue.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSValueList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSValueListTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSValueListLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSValueListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSValueListTable = { 5, 3, JSCSSValueListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSValueListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSValueListConstructorTable = { 1, 0, JSCSSValueListConstructorTableValues, 0 };
class JSCSSValueListConstructor : public DOMConstructorObject {
public:
    JSCSSValueListConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSCSSValueListConstructor::s_info = { "CSSValueListConstructor", 0, &JSCSSValueListConstructorTable, 0 };

JSCSSValueListConstructor::JSCSSValueListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSCSSValueListConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSCSSValueListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCSSValueListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValueListConstructor, DOMObject>(exec, &JSCSSValueListConstructorTable, this, propertyName, slot);
}

bool JSCSSValueListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSValueListConstructor, DOMObject>(exec, &JSCSSValueListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSValueListPrototypeTableValues[2] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSValueListPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSValueListPrototypeTable = { 2, 1, JSCSSValueListPrototypeTableValues, 0 };
const ClassInfo JSCSSValueListPrototype::s_info = { "CSSValueListPrototype", 0, &JSCSSValueListPrototypeTable, 0 };

JSObject* JSCSSValueListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSValueList>(exec, globalObject);
}

bool JSCSSValueListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCSSValueListPrototypeTable, this, propertyName, slot);
}

bool JSCSSValueListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCSSValueListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCSSValueList::s_info = { "CSSValueList", &JSCSSValue::s_info, &JSCSSValueListTable, 0 };

JSCSSValueList::JSCSSValueList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSValueList> impl)
    : JSCSSValue(structure, globalObject, impl)
{
}

JSObject* JSCSSValueList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCSSValueListPrototype(globalObject, JSCSSValueListPrototype::createStructure(JSCSSValuePrototype::self(exec, globalObject)));
}

bool JSCSSValueList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSCSSValueListTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<CSSValueList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSCSSValueList, Base>(exec, &JSCSSValueListTable, this, propertyName, slot);
}

bool JSCSSValueList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSCSSValueListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<CSSValueList*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSCSSValueList, Base>(exec, &JSCSSValueListTable, this, propertyName, descriptor);
}

bool JSCSSValueList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<CSSValueList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsCSSValueListLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSValueList* castedThis = static_cast<JSCSSValueList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSValueList* imp = static_cast<CSSValueList*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->length());
    return result;
}

JSValue jsCSSValueListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSValueList* domObject = static_cast<JSCSSValueList*>(asObject(slotBase));
    return JSCSSValueList::getConstructor(exec, domObject->globalObject());
}
void JSCSSValueList::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<CSSValueList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSCSSValueList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSValueListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCSSValueListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSValueList::s_info))
        return throwVMTypeError(exec);
    JSCSSValueList* castedThis = static_cast<JSCSSValueList*>(asObject(thisValue));
    CSSValueList* imp = static_cast<CSSValueList*>(castedThis->impl());
    unsigned index = exec->argument(0).toInt32(exec);


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}


JSValue JSCSSValueList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSCSSValueList* thisObj = static_cast<JSCSSValueList*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<CSSValueList*>(thisObj->impl())->item(index));
}

}
