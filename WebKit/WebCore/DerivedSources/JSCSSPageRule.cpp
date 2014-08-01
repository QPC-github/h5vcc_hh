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
#include "JSCSSPageRule.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSPageRule.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "KURL.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSPageRule);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSPageRuleTableValues[4] =
{
    { "selectorText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPageRuleSelectorText), (intptr_t)setJSCSSPageRuleSelectorText THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPageRuleStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPageRuleConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSPageRuleTable = { 8, 7, JSCSSPageRuleTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSPageRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSPageRuleConstructorTable = { 1, 0, JSCSSPageRuleConstructorTableValues, 0 };
class JSCSSPageRuleConstructor : public DOMConstructorObject {
public:
    JSCSSPageRuleConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSCSSPageRuleConstructor::s_info = { "CSSPageRuleConstructor", 0, &JSCSSPageRuleConstructorTable, 0 };

JSCSSPageRuleConstructor::JSCSSPageRuleConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSCSSPageRuleConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSCSSPageRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCSSPageRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPageRuleConstructor, DOMObject>(exec, &JSCSSPageRuleConstructorTable, this, propertyName, slot);
}

bool JSCSSPageRuleConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSPageRuleConstructor, DOMObject>(exec, &JSCSSPageRuleConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSPageRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSPageRulePrototypeTable = { 1, 0, JSCSSPageRulePrototypeTableValues, 0 };
const ClassInfo JSCSSPageRulePrototype::s_info = { "CSSPageRulePrototype", 0, &JSCSSPageRulePrototypeTable, 0 };

JSObject* JSCSSPageRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSPageRule>(exec, globalObject);
}

const ClassInfo JSCSSPageRule::s_info = { "CSSPageRule", &JSCSSRule::s_info, &JSCSSPageRuleTable, 0 };

JSCSSPageRule::JSCSSPageRule(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSPageRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
}

JSObject* JSCSSPageRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCSSPageRulePrototype(globalObject, JSCSSPageRulePrototype::createStructure(JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSCSSPageRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPageRule, Base>(exec, &JSCSSPageRuleTable, this, propertyName, slot);
}

bool JSCSSPageRule::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSPageRule, Base>(exec, &JSCSSPageRuleTable, this, propertyName, descriptor);
}

JSValue jsCSSPageRuleSelectorText(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSPageRule* castedThis = static_cast<JSCSSPageRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSPageRule* imp = static_cast<CSSPageRule*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->selectorText());
    return result;
}

JSValue jsCSSPageRuleStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSPageRule* castedThis = static_cast<JSCSSPageRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSPageRule* imp = static_cast<CSSPageRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsCSSPageRuleConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSPageRule* domObject = static_cast<JSCSSPageRule*>(asObject(slotBase));
    return JSCSSPageRule::getConstructor(exec, domObject->globalObject());
}
void JSCSSPageRule::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSCSSPageRule, Base>(exec, propertyName, value, &JSCSSPageRuleTable, this, slot);
}

void setJSCSSPageRuleSelectorText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSCSSPageRule* castedThis = static_cast<JSCSSPageRule*>(thisObject);
    CSSPageRule* imp = static_cast<CSSPageRule*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setSelectorText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValue JSCSSPageRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSPageRuleConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
