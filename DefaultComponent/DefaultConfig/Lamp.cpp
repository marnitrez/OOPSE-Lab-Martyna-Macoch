/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lamp
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Lamp.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Lamp.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Lamp_Lamp_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Lamp
Lamp::Lamp(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Lamp, Lamp(), 0, Default_Lamp_Lamp_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    itsController_1 = NULL;
    initStatechart();
}

Lamp::~Lamp() {
    NOTIFY_DESTRUCTOR(~Lamp, false);
    cleanUpRelations();
}

Controller* Lamp::getItsController() const {
    return itsController;
}

void Lamp::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

Controller* Lamp::getItsController_1() const {
    return itsController_1;
}

void Lamp::setItsController_1(Controller* p_Controller) {
    _setItsController_1(p_Controller);
}

bool Lamp::startBehavior() {
    bool done = false;
    done = Module::startBehavior();
    return done;
}

void Lamp::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Lamp::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
    if(itsController_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_1");
            itsController_1 = NULL;
        }
}

void Lamp::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

void Lamp::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Lamp::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Lamp::__setItsController_1(Controller* p_Controller) {
    itsController_1 = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController_1", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController_1");
        }
}

void Lamp::_setItsController_1(Controller* p_Controller) {
    __setItsController_1(p_Controller);
}

void Lamp::_clearItsController_1() {
    NOTIFY_RELATION_CLEARED("itsController_1");
    itsController_1 = NULL;
}

void Lamp::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("4");
        NOTIFY_STATE_ENTERED("ROOT.Inactive");
        rootState_subState = Inactive;
        rootState_active = Inactive;
        NOTIFY_TRANSITION_TERMINATED("4");
    }
}

IOxfReactive::TakeEventStatus Lamp::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    OMSETPARAMS(evStart);
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Inactive");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    //#[ state Active.(Entry) 
                    evStart;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state Active.(Exit) 
                    evStop;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Inactive");
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStep_Default_id))
                {
                    OMSETPARAMS(evStep);
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state Active.(Exit) 
                    evStop;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Blink");
                    pushNullTransition();
                    rootState_subState = Blink;
                    rootState_active = Blink;
                    //#[ state Blink.(Entry) 
                    evStep;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Blink
        case Blink:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Blink");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    //#[ state Active.(Entry) 
                    evStart;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLamp::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedLamp::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    aomsRelations->addRelation("itsController_1", false, true);
    if(myReal->itsController_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_1);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedLamp::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Lamp::Inactive:
        {
            Inactive_serializeStates(aomsState);
        }
        break;
        case Lamp::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        case Lamp::Blink:
        {
            Blink_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLamp::Inactive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inactive");
}

void OMAnimatedLamp::Blink_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Blink");
}

void OMAnimatedLamp::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Lamp, Default, false, Module, OMAnimatedModule, OMAnimatedLamp)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Lamp.cpp
*********************************************************************/
