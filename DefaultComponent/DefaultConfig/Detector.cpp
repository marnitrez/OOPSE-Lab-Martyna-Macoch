/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Detector
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Detector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Detector.h"
//## link itsController
#include "Controller.h"
//## link itsDisplay
#include "Display.h"
//#[ ignore
#define Default_Detector_Detector_SERIALIZE OM_NO_OP

#define Default_Detector_message_0_SERIALIZE OM_NO_OP

#define Default_Detector_reset_counters_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Detector
Detector::Detector(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Detector, Detector(), 0, Default_Detector_Detector_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    itsDisplay = NULL;
    itsDisplay_1 = NULL;
    initStatechart();
}

Detector::~Detector() {
    NOTIFY_DESTRUCTOR(~Detector, false);
    cleanUpRelations();
}

void Detector::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_Detector_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void Detector::reset_counters() {
    NOTIFY_OPERATION(reset_counters, reset_counters(), 0, Default_Detector_reset_counters_SERIALIZE);
    //#[ operation reset_counters()
    //#]
}

Controller* Detector::getItsController() const {
    return itsController;
}

void Detector::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

Display* Detector::getItsDisplay() const {
    return itsDisplay;
}

void Detector::setItsDisplay(Display* p_Display) {
    itsDisplay = p_Display;
    if(p_Display != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDisplay", p_Display, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
        }
}

Display* Detector::getItsDisplay_1() const {
    return itsDisplay_1;
}

void Detector::setItsDisplay_1(Display* p_Display) {
    itsDisplay_1 = p_Display;
    if(p_Display != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDisplay_1", p_Display, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDisplay_1");
        }
}

bool Detector::startBehavior() {
    bool done = false;
    done = Module::startBehavior();
    return done;
}

void Detector::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Detector::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
    if(itsDisplay != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
            itsDisplay = NULL;
        }
    if(itsDisplay_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDisplay_1");
            itsDisplay_1 = NULL;
        }
}

void Detector::__setItsController(Controller* p_Controller) {
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

void Detector::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Detector::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Detector::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("5");
        NOTIFY_STATE_ENTERED("ROOT.Inactive");
        rootState_subState = Inactive;
        rootState_active = Inactive;
        NOTIFY_TRANSITION_TERMINATED("5");
    }
}

IOxfReactive::TakeEventStatus Detector::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    OMSETPARAMS(evStart);
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Inactive");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    //#[ state Active.(Exit) 
                    /reset_counters();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Inactive");
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    //#[ state Active.(Exit) 
                    /reset_counters();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    //#[ transition 4 
                    pulses_sent += margin;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCheckCollision_Default_id))
                {
                    //## transition 1 
                    if(check_collision())
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            //#[ state Active.(Exit) 
                            /reset_counters();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.Active");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            itsController->GEN(evCheckCollision);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    //#[ transition 0 
                    reset_counters();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("0");
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
void OMAnimatedDetector::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedDetector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    aomsRelations->addRelation("itsDisplay", false, true);
    if(myReal->itsDisplay)
        {
            aomsRelations->ADD_ITEM(myReal->itsDisplay);
        }
    aomsRelations->addRelation("itsDisplay_1", false, true);
    if(myReal->itsDisplay_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDisplay_1);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedDetector::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Detector::Inactive:
        {
            Inactive_serializeStates(aomsState);
        }
        break;
        case Detector::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        case Detector::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDetector::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedDetector::Inactive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inactive");
}

void OMAnimatedDetector::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Detector, Default, false, Module, OMAnimatedModule, OMAnimatedDetector)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Detector.cpp
*********************************************************************/
