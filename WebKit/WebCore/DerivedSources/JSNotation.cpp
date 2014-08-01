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
#include "JSNotation.h"

#include "KURL.h"
#include "Notation.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNotation);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNotationTableValues[4] =
{
    { "publicId", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNotationPublicId), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemId", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNotationSystemId), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNotationConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNotationTable = { 9, 7, JSNotationTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNotationConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNotationConstructorTable = { 1, 0, JSNotationConstructorTableValues, 0 };
class JSNotationConstructor : public DOMConstructorObject {
public:
    JSNotationConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSNotationConstructor::s_info = { "NotationConstructor", 0, &JSNotationConstructorTable, 0 };

JSNotationConstructor::JSNotationConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSNotationConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSNotationPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSNotationConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNotationConstructor, DOMObject>(exec, &JSNotationConstructorTable, this, propertyName, slot);
}

bool JSNotationConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNotationConstructor, DOMObject>(exec, &JSNotationConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNotationPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNotationPrototypeTable = { 1, 0, JSNotationPrototypeTableValues, 0 };
const ClassInfo JSNotationPrototype::s_info = { "NotationPrototype", 0, &JSNotationPrototypeTable, 0 };

JSObject* JSNotationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNotation>(exec, globalObject);
}

const ClassInfo JSNotation::s_info = { "Notation", &JSNode::s_info, &JSNotationTable, 0 };

JSNotation::JSNotation(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Notation> impl)
    : JSNode(structure, globalObject, impl)
{
}

JSObject* JSNotation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSNotationPrototype(globalObject, JSNotationPrototype::createStructure(JSNodePrototype::self(exec, globalObject)));
}

bool JSNotation::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNotation, Base>(exec, &JSNotationTable, this, propertyName, slot);
}

bool JSNotation::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNotation, Base>(exec, &JSNotationTable, this, propertyName, descriptor);
}

JSValue jsNotationPublicId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNotation* castedThis = static_cast<JSNotation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Notation* imp = static_cast<Notation*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->publicId());
    return result;
}

JSValue jsNotationSystemId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNotation* castedThis = static_cast<JSNotation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Notation* imp = static_cast<Notation*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->systemId());
    return result;
}

JSValue jsNotationConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNotation* domObject = static_cast<JSNotation*>(asObject(slotBase));
    return JSNotation::getConstructor(exec, domObject->globalObject());
}
JSValue JSNotation::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNotationConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
