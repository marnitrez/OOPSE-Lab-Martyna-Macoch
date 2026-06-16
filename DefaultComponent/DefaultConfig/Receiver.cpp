/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Receiver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Receiver.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Receiver_Receiver_SERIALIZE OM_NO_OP

#define Default_Receiver_message_0_SERIALIZE OM_NO_OP

#define Default_Receiver_validate_signal_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Receiver
Receiver::Receiver(IOxfActive* theActiveContext) : signal_ok(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Receiver, Receiver(), 0, Default_Receiver_Receiver_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Receiver::~Receiver() {
    NOTIFY_DESTRUCTOR(~Receiver, false);
    cleanUpRelations();
}

void Receiver::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_Receiver_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void Receiver::validate_signal() {
    NOTIFY_OPERATION(validate_signal, validate_signal(), 0, Default_Receiver_validate_signal_SERIALIZE);
    //#[ operation validate_signal()
    signal_ok=true;
    //#]
}

bool Receiver::getSignal_ok() const {
    return signal_ok;
}

void Receiver::setSignal_ok(bool p_signal_ok) {
    signal_ok = p_signal_ok;
}

Controller* Receiver::getItsController() const {
    return itsController;
}

void Receiver::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Receiver::startBehavior() {
    bool done = false;
    done = Module::startBehavior();
    return done;
}

void Receiver::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Receiver::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Receiver::__setItsController(Controller* p_Controller) {
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

void Receiver::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Receiver::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Receiver::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("4");
        NOTIFY_STATE_ENTERED("ROOT.Inactive");
        rootState_subState = Inactive;
        rootState_active = Inactive;
        NOTIFY_TRANSITION_TERMINATED("4");
    }
}

IOxfReactive::TakeEventStatus Receiver::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    //## transition 3 
                    if(params->active)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.Inactive");
                            NOTIFY_STATE_ENTERED("ROOT.Active");
                            rootState_subState = Active;
                            rootState_active = Active;
                            //#[ state Active.(Entry) 
                            validate_signal();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Inactive");
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSignal_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.validate");
                    pushNullTransition();
                    rootState_subState = validate;
                    rootState_active = validate;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State validate
        // Description: validate_signal();
        case validate:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 1 
                    if(signal_ok)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            NOTIFY_TRANSITION_STARTED("1");
                            popNullTransition();
                            //#[ state validate.(Exit) 
                            validate_signal();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.validate");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            itsController->GEN(evSignal);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            NOTIFY_TRANSITION_STARTED("0");
                            popNullTransition();
                            //#[ state validate.(Exit) 
                            validate_signal();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.validate");
                            NOTIFY_STATE_ENTERED("ROOT.Active");
                            rootState_subState = Active;
                            rootState_active = Active;
                            //#[ state Active.(Entry) 
                            validate_signal();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("0");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    //#[ state Active.(Entry) 
                    validate_signal();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedReceiver::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("signal_ok", x2String(myReal->signal_ok));
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedReceiver::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedReceiver::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Receiver::Inactive:
        {
            Inactive_serializeStates(aomsState);
        }
        break;
        case Receiver::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        case Receiver::validate:
        {
            validate_serializeStates(aomsState);
        }
        break;
        case Receiver::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedReceiver::validate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.validate");
}

void OMAnimatedReceiver::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedReceiver::Inactive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inactive");
}

void OMAnimatedReceiver::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Receiver, Default, false, Module, OMAnimatedModule, OMAnimatedReceiver)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Receiver.cpp
*********************************************************************/
