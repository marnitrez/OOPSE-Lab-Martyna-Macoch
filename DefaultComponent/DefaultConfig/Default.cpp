/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance itsController
#include "Controller.h"
//## auto_generated
#include "class_62.h"
//## auto_generated
#include "Detector.h"
//## auto_generated
#include "Display.h"
//## auto_generated
#include "Drive.h"
//## auto_generated
#include "Keyboard.h"
//## auto_generated
#include "Lamp.h"
//## auto_generated
#include "Module.h"
//## auto_generated
#include "Receiver.h"
//#[ ignore
#define evStep_SERIALIZE OMADD_SER(evStep_float, x2String(myEvent->evStep_float))

#define evStep_UNSERIALIZE OMADD_UNSER(float, evStep_float, OMDestructiveString2X)

#define evStep_CONSTRUCTOR evStep(evStep_float)

#define eventmessage_0_SERIALIZE OM_NO_OP

#define eventmessage_0_UNSERIALIZE OM_NO_OP

#define eventmessage_0_CONSTRUCTOR eventmessage_0()

#define evStart_SERIALIZE OMADD_SER(state, x2String(myEvent->state))

#define evStart_UNSERIALIZE OMADD_UNSER(int, state, OMDestructiveString2X)

#define evStart_CONSTRUCTOR evStart(state)

#define evCheckCollision_SERIALIZE OM_NO_OP

#define evCheckCollision_UNSERIALIZE OM_NO_OP

#define evCheckCollision_CONSTRUCTOR evCheckCollision()

#define evStop_SERIALIZE OM_NO_OP

#define evStop_UNSERIALIZE OM_NO_OP

#define evStop_CONSTRUCTOR evStop()

#define evActivate_SERIALIZE OM_NO_OP

#define evActivate_UNSERIALIZE OM_NO_OP

#define evActivate_CONSTRUCTOR evActivate()

#define evActive_SERIALIZE OM_NO_OP

#define evActive_UNSERIALIZE OM_NO_OP

#define evActive_CONSTRUCTOR evActive()

#define evSignal_SERIALIZE OM_NO_OP

#define evSignal_UNSERIALIZE OM_NO_OP

#define evSignal_CONSTRUCTOR evSignal()

#define evStep_f_SERIALIZE OMADD_SER(evStep, x2String(myEvent->evStep))

#define evStep_f_UNSERIALIZE OMADD_UNSER(float, evStep, OMDestructiveString2X)

#define evStep_f_CONSTRUCTOR evStep_f(evStep)

#define evCollision_SERIALIZE OM_NO_OP

#define evCollision_UNSERIALIZE OM_NO_OP

#define evCollision_CONSTRUCTOR evCollision()

#define evFirmware_SERIALIZE OM_NO_OP

#define evFirmware_UNSERIALIZE OM_NO_OP

#define evFirmware_CONSTRUCTOR evFirmware()

#define evTest_SERIALIZE OM_NO_OP

#define evTest_UNSERIALIZE OM_NO_OP

#define evTest_CONSTRUCTOR evTest()

#define evSuccess_SERIALIZE OM_NO_OP

#define evSuccess_UNSERIALIZE OM_NO_OP

#define evSuccess_CONSTRUCTOR evSuccess()

#define evError_SERIALIZE OM_NO_OP

#define evError_UNSERIALIZE OM_NO_OP

#define evError_CONSTRUCTOR evError()

#define evRegulate_SERIALIZE OM_NO_OP

#define evRegulate_UNSERIALIZE OM_NO_OP

#define evRegulate_CONSTRUCTOR evRegulate()

#define evFAIL_SERIALIZE OM_NO_OP

#define evFAIL_UNSERIALIZE OM_NO_OP

#define evFAIL_CONSTRUCTOR evFAIL()

#define evOK_SERIALIZE OM_NO_OP

#define evOK_UNSERIALIZE OM_NO_OP

#define evOK_CONSTRUCTOR evOK()
//#]

//## package Default


//## classInstance itsController
Controller itsController;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsController, Controller, "itsController", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

//## event evStep(float)
evStep::evStep(float p_evStep_float) : evStep_float(p_evStep_float) {
    NOTIFY_EVENT_CONSTRUCTOR(evStep)
    setId(evStep_Default_id);
}

bool evStep::isTypeOf(const short id) const {
    return (evStep_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStep, Default, Default, evStep(float))

//## event eventmessage_0()
eventmessage_0::eventmessage_0() {
    NOTIFY_EVENT_CONSTRUCTOR(eventmessage_0)
    setId(eventmessage_0_Default_id);
}

bool eventmessage_0::isTypeOf(const short id) const {
    return (eventmessage_0_Default_id==id);
}

IMPLEMENT_META_EVENT_P(eventmessage_0, Default, Default, eventmessage_0())

//## event evStart(int)
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}

evStart::evStart(int p_state) : state(p_state) {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, Default, Default, evStart(int))

//## event evCheckCollision()
evCheckCollision::evCheckCollision() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckCollision)
    setId(evCheckCollision_Default_id);
}

bool evCheckCollision::isTypeOf(const short id) const {
    return (evCheckCollision_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evCheckCollision, Default, Default, evCheckCollision())

//## event evStop()
evStop::evStop() {
    NOTIFY_EVENT_CONSTRUCTOR(evStop)
    setId(evStop_Default_id);
}

bool evStop::isTypeOf(const short id) const {
    return (evStop_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStop, Default, Default, evStop())

//## event evActivate()
evActivate::evActivate() {
    NOTIFY_EVENT_CONSTRUCTOR(evActivate)
    setId(evActivate_Default_id);
}

bool evActivate::isTypeOf(const short id) const {
    return (evActivate_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evActivate, Default, Default, evActivate())

//## event evActive()
evActive::evActive() {
    NOTIFY_EVENT_CONSTRUCTOR(evActive)
    setId(evActive_Default_id);
}

bool evActive::isTypeOf(const short id) const {
    return (evActive_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evActive, Default, Default, evActive())

//## event evSignal()
evSignal::evSignal() {
    NOTIFY_EVENT_CONSTRUCTOR(evSignal)
    setId(evSignal_Default_id);
}

bool evSignal::isTypeOf(const short id) const {
    return (evSignal_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSignal, Default, Default, evSignal())

//## event evStep_f(float)
evStep_f::evStep_f(float p_evStep) : evStep(p_evStep) {
    NOTIFY_EVENT_CONSTRUCTOR(evStep_f)
    setId(evStep_f_Default_id);
}

bool evStep_f::isTypeOf(const short id) const {
    return (evStep_f_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStep_f, Default, Default, evStep_f(float))

//## event evCollision()
evCollision::evCollision() {
    NOTIFY_EVENT_CONSTRUCTOR(evCollision)
    setId(evCollision_Default_id);
}

bool evCollision::isTypeOf(const short id) const {
    return (evCollision_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evCollision, Default, Default, evCollision())

//## event evFirmware()
evFirmware::evFirmware() {
    NOTIFY_EVENT_CONSTRUCTOR(evFirmware)
    setId(evFirmware_Default_id);
}

bool evFirmware::isTypeOf(const short id) const {
    return (evFirmware_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evFirmware, Default, Default, evFirmware())

//## event evTest()
evTest::evTest() {
    NOTIFY_EVENT_CONSTRUCTOR(evTest)
    setId(evTest_Default_id);
}

bool evTest::isTypeOf(const short id) const {
    return (evTest_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evTest, Default, Default, evTest())

//## event evSuccess()
evSuccess::evSuccess() {
    NOTIFY_EVENT_CONSTRUCTOR(evSuccess)
    setId(evSuccess_Default_id);
}

bool evSuccess::isTypeOf(const short id) const {
    return (evSuccess_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSuccess, Default, Default, evSuccess())

//## event evError()
evError::evError() {
    NOTIFY_EVENT_CONSTRUCTOR(evError)
    setId(evError_Default_id);
}

bool evError::isTypeOf(const short id) const {
    return (evError_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evError, Default, Default, evError())

//## event evRegulate()
evRegulate::evRegulate() {
    NOTIFY_EVENT_CONSTRUCTOR(evRegulate)
    setId(evRegulate_Default_id);
}

bool evRegulate::isTypeOf(const short id) const {
    return (evRegulate_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRegulate, Default, Default, evRegulate())

//## event evFAIL()
evFAIL::evFAIL() {
    NOTIFY_EVENT_CONSTRUCTOR(evFAIL)
    setId(evFAIL_Default_id);
}

bool evFAIL::isTypeOf(const short id) const {
    return (evFAIL_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evFAIL, Default, Default, evFAIL())

//## event evOK()
evOK::evOK() {
    NOTIFY_EVENT_CONSTRUCTOR(evOK)
    setId(evOK_Default_id);
}

bool evOK::isTypeOf(const short id) const {
    return (evOK_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evOK, Default, Default, evOK())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
