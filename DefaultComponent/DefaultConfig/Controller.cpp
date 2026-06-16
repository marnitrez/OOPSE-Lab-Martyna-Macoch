/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Controller_Controller_SERIALIZE OM_NO_OP

#define Default_Controller_evCollision_SERIALIZE OM_NO_OP

#define Default_Controller_evStep_SERIALIZE OM_NO_OP

#define Default_Controller_message_0_SERIALIZE OM_NO_OP

#define Default_Controller_set_state_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Controller
Controller::Controller(IOxfActive* theActiveContext) : state(STOPPED), state0(CLOSING) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Controller, Controller(), 0, Default_Controller_Controller_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDetector.setShouldDelete(false);
        }
        {
            itsDrive.setShouldDelete(false);
        }
        {
            itsReceiver.setShouldDelete(false);
        }
        {
            itsLamp.setShouldDelete(false);
        }
        {
            itsKeyboard.setShouldDelete(false);
        }
        {
            itsDisplay.setShouldDelete(false);
        }
        {
            itsLamp_1.setShouldDelete(false);
        }
        {
            itsDrive_1.setShouldDelete(false);
        }
        {
            itsReceiver_1.setShouldDelete(false);
        }
        {
            itsDetector_1.setShouldDelete(false);
        }
        {
            itsDisplay_1.setShouldDelete(false);
        }
        {
            itsKeyboard_1.setShouldDelete(false);
        }
        {
            itsLamp_3.setShouldDelete(false);
        }
    }
    itsLamp_2 = NULL;
    initRelations();
    initStatechart();
}

Controller::~Controller() {
    NOTIFY_DESTRUCTOR(~Controller, false);
    cleanUpRelations();
    cancelTimeouts();
}

void Controller::evCollision() {
    NOTIFY_OPERATION(evCollision, evCollision(), 0, Default_Controller_evCollision_SERIALIZE);
    //#[ operation evCollision()
    //#]
}

void Controller::evStep() {
    NOTIFY_OPERATION(evStep, evStep(), 0, Default_Controller_evStep_SERIALIZE);
    //#[ operation evStep()
    //#]
}

void Controller::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_Controller_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void Controller::set_state() {
    NOTIFY_OPERATION(set_state, set_state(), 0, Default_Controller_set_state_SERIALIZE);
    //#[ operation set_state()
    //#]
}

bool Controller::getDetector_ok() const {
    return detector_ok;
}

void Controller::setDetector_ok(bool p_detector_ok) {
    detector_ok = p_detector_ok;
}

bool Controller::getDrive_ok() const {
    return drive_ok;
}

void Controller::setDrive_ok(bool p_drive_ok) {
    drive_ok = p_drive_ok;
}

bool Controller::getLamp_ok() const {
    return lamp_ok;
}

void Controller::setLamp_ok(bool p_lamp_ok) {
    lamp_ok = p_lamp_ok;
}

float Controller::getPosition() const {
    return position;
}

void Controller::setPosition(float p_position) {
    position = p_position;
}

float Controller::getPosition_max() const {
    return position_max;
}

void Controller::setPosition_max(float p_position_max) {
    position_max = p_position_max;
}

float Controller::getPosition_min() const {
    return position_min;
}

void Controller::setPosition_min(float p_position_min) {
    position_min = p_position_min;
}

bool Controller::getReceiver_ok() const {
    return receiver_ok;
}

void Controller::setReceiver_ok(bool p_receiver_ok) {
    receiver_ok = p_receiver_ok;
}

States Controller::getState() const {
    return state;
}

void Controller::setState(States p_state) {
    state = p_state;
}

States Controller::getState0() const {
    return state0;
}

void Controller::setState0(States p_state0) {
    state0 = p_state0;
}

Detector* Controller::getItsDetector() const {
    return (Detector*) &itsDetector;
}

Detector* Controller::getItsDetector_1() const {
    return (Detector*) &itsDetector_1;
}

Display* Controller::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Display* Controller::getItsDisplay_1() const {
    return (Display*) &itsDisplay_1;
}

Drive* Controller::getItsDrive() const {
    return (Drive*) &itsDrive;
}

Drive* Controller::getItsDrive_1() const {
    return (Drive*) &itsDrive_1;
}

Keyboard* Controller::getItsKeyboard() const {
    return (Keyboard*) &itsKeyboard;
}

Keyboard* Controller::getItsKeyboard_1() const {
    return (Keyboard*) &itsKeyboard_1;
}

Lamp* Controller::getItsLamp() const {
    return (Lamp*) &itsLamp;
}

Lamp* Controller::getItsLamp_1() const {
    return (Lamp*) &itsLamp_1;
}

Lamp* Controller::getItsLamp_2() const {
    return itsLamp_2;
}

void Controller::setItsLamp_2(Lamp* p_Lamp) {
    itsLamp_2 = p_Lamp;
    if(p_Lamp != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLamp_2", p_Lamp, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLamp_2");
        }
}

Lamp* Controller::getItsLamp_3() const {
    return (Lamp*) &itsLamp_3;
}

Receiver* Controller::getItsReceiver() const {
    return (Receiver*) &itsReceiver;
}

Receiver* Controller::getItsReceiver_1() const {
    return (Receiver*) &itsReceiver_1;
}

bool Controller::startBehavior() {
    bool done = true;
    done &= Lamp::startBehavior();
    done &= itsDetector.startBehavior();
    done &= itsDetector_1.startBehavior();
    done &= itsDisplay.startBehavior();
    done &= itsDisplay_1.startBehavior();
    done &= itsDrive.startBehavior();
    done &= itsDrive_1.startBehavior();
    done &= itsKeyboard.startBehavior();
    done &= itsKeyboard_1.startBehavior();
    done &= itsLamp.startBehavior();
    done &= itsLamp_1.startBehavior();
    done &= itsLamp_3.startBehavior();
    done &= itsReceiver.startBehavior();
    done &= itsReceiver_1.startBehavior();
    return done;
}

void Controller::initRelations() {
    itsDetector_1._setItsController(this);
    itsDisplay_1._setItsController(this);
    itsDrive_1._setItsController(this);
    itsKeyboard_1._setItsController(this);
    itsLamp_1._setItsController(this);
    itsLamp_3._setItsController_1(this);
    itsReceiver_1._setItsController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Stop_subState = OMNonState;
    Start_subState = OMNonState;
    rootState_timeout = NULL;
    
}

void Controller::cleanUpRelations() {
    if(itsLamp_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLamp_2");
            itsLamp_2 = NULL;
        }
}

void Controller::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Controller::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDetector.setActiveContext(theActiveContext, false);
        itsDrive.setActiveContext(theActiveContext, false);
        itsReceiver.setActiveContext(theActiveContext, false);
        itsLamp.setActiveContext(theActiveContext, false);
        itsKeyboard.setActiveContext(theActiveContext, false);
        itsDisplay.setActiveContext(theActiveContext, false);
        itsLamp_1.setActiveContext(theActiveContext, false);
        itsDrive_1.setActiveContext(theActiveContext, false);
        itsReceiver_1.setActiveContext(theActiveContext, false);
        itsDetector_1.setActiveContext(theActiveContext, false);
        itsDisplay_1.setActiveContext(theActiveContext, false);
        itsKeyboard_1.setActiveContext(theActiveContext, false);
        itsLamp_3.setActiveContext(theActiveContext, false);
    }
}

void Controller::destroy() {
    itsDetector.destroy();
    itsDetector_1.destroy();
    itsDisplay.destroy();
    itsDisplay_1.destroy();
    itsDrive.destroy();
    itsDrive_1.destroy();
    itsKeyboard.destroy();
    itsKeyboard_1.destroy();
    itsLamp.destroy();
    itsLamp_1.destroy();
    itsLamp_3.destroy();
    itsReceiver.destroy();
    itsReceiver_1.destroy();
    Lamp::destroy();
}

void Controller::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("27");
        NOTIFY_STATE_ENTERED("ROOT.Servicing");
        pushNullTransition();
        rootState_subState = Servicing;
        rootState_active = Servicing;
        NOTIFY_TRANSITION_TERMINATED("27");
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Ready
        case Ready:
        {
            res = Ready_handleEvent();
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 4 
                    if(!state_indication)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_2");
                            NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_5");
                            pushNullTransition();
                            Start_subState = sendaction_5;
                            rootState_active = sendaction_5;
                            //#[ state Start.sendaction_5.(Entry) 
                            itsDrive.GEN(evStart());
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_2");
                            NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_4");
                            pushNullTransition();
                            Start_subState = sendaction_4;
                            rootState_active = sendaction_4;
                            //#[ state Start.sendaction_4.(Entry) 
                            itsLamp.GEN(evStart());
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_5");
                    pushNullTransition();
                    Start_subState = sendaction_5;
                    rootState_active = sendaction_5;
                    //#[ state Start.sendaction_5.(Entry) 
                    itsDrive.GEN(evStart());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.Start.terminationstate_3");
                    Start_subState = terminationstate_3;
                    rootState_active = terminationstate_3;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            res = sendaction_7_handleEvent();
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_8");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_9");
                    pushNullTransition();
                    Stop_subState = sendaction_9;
                    rootState_active = sendaction_9;
                    //#[ state Stop.sendaction_9.(Entry) 
                    itsDetector.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.terminationstate_10");
                    Stop_subState = terminationstate_10;
                    rootState_active = terminationstate_10;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State terminationstate_10
        case terminationstate_10:
        {
            res = Stop_handleEvent();
        }
        break;
        // State Step
        case Step:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Step");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
                    pushNullTransition();
                    rootState_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state sendaction_12.(Entry) 
                    itsDetector.GEN(evCheckCollision);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 21 
                    if(!state_indication)
                        {
                            NOTIFY_TRANSITION_STARTED("23");
                            NOTIFY_TRANSITION_STARTED("21");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                            NOTIFY_STATE_ENTERED("ROOT.Ready");
                            rootState_subState = Ready;
                            rootState_active = Ready;
                            NOTIFY_TRANSITION_TERMINATED("21");
                            NOTIFY_TRANSITION_TERMINATED("23");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("23");
                            NOTIFY_TRANSITION_STARTED("24");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_13");
                            rootState_subState = sendaction_13;
                            rootState_active = sendaction_13;
                            //#[ state sendaction_13.(Entry) 
                            itsLamp.GEN(evStep());
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("24");
                            NOTIFY_TRANSITION_TERMINATED("23");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Blockade
        case Blockade:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Blockade");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_15");
                    rootState_subState = terminationstate_15;
                    rootState_active = terminationstate_15;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Firmware
        case Firmware:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Firmware");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_15");
                    rootState_subState = terminationstate_15;
                    rootState_active = terminationstate_15;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Regulations
        case Regulations:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Regulations");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_15");
                    rootState_subState = terminationstate_15;
                    rootState_active = terminationstate_15;
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Operation
        case Operation:
        {
            if(IS_EVENT_TYPE_OF(evTest_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Testing");
                    rootState_subState = Testing;
                    rootState_active = Testing;
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRegulate_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("34");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Regulations");
                    pushNullTransition();
                    rootState_subState = Regulations;
                    rootState_active = Regulations;
                    NOTIFY_TRANSITION_TERMINATED("34");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFirmware_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("28");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Firmware");
                    pushNullTransition();
                    rootState_subState = Firmware;
                    rootState_active = Firmware;
                    NOTIFY_TRANSITION_TERMINATED("28");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Error
        case Error:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("33");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Error");
                            NOTIFY_STATE_ENTERED("ROOT.Auth");
                            rootState_subState = Auth;
                            rootState_active = Auth;
                            NOTIFY_TRANSITION_TERMINATED("33");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Auth
        case Auth:
        {
            if(IS_EVENT_TYPE_OF(evSuccess_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    NOTIFY_STATE_EXITED("ROOT.Auth");
                    NOTIFY_STATE_ENTERED("ROOT.Operation");
                    rootState_subState = Operation;
                    rootState_active = Operation;
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evError_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("32");
                    NOTIFY_STATE_EXITED("ROOT.Auth");
                    NOTIFY_STATE_ENTERED("ROOT.Error");
                    rootState_subState = Error;
                    rootState_active = Error;
                    rootState_timeout = scheduleTimeout(2000, "ROOT.Error");
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Testing
        case Testing:
        {
            if(IS_EVENT_TYPE_OF(evOK_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("37");
                    NOTIFY_STATE_EXITED("ROOT.Testing");
                    //#[ transition 37 
                    itsReceiver.GEN(evActivate(true));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("37");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFAIL_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("36");
                    NOTIFY_STATE_EXITED("ROOT.Testing");
                    //#[ transition 36 
                    itsReceiver.GEN(evActivate(false));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Blockade");
                    pushNullTransition();
                    rootState_subState = Blockade;
                    rootState_active = Blockade;
                    NOTIFY_TRANSITION_TERMINATED("36");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Servicing
        case Servicing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("31");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Servicing");
                    NOTIFY_STATE_ENTERED("ROOT.Auth");
                    rootState_subState = Auth;
                    rootState_active = Auth;
                    NOTIFY_TRANSITION_TERMINATED("31");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Controller::Stop_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Stop");
    pushNullTransition();
    rootState_subState = Stop;
    NOTIFY_TRANSITION_STARTED("9");
    //#[ transition 9 
    set_state(STOPPED);
    //#]
    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_7");
    pushNullTransition();
    Stop_subState = sendaction_7;
    rootState_active = sendaction_7;
    //#[ state Stop.sendaction_7.(Entry) 
    itsDrive.GEN(evStop);
    //#]
    NOTIFY_TRANSITION_TERMINATED("9");
}

void Controller::Stop_exit() {
    popNullTransition();
    switch (Stop_subState) {
        // State sendaction_7
        case sendaction_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_7");
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_8");
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_9");
        }
        break;
        // State terminationstate_10
        case terminationstate_10:
        {
            NOTIFY_STATE_EXITED("ROOT.Stop.terminationstate_10");
        }
        break;
        default:
            break;
    }
    Stop_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Stop");
}

IOxfReactive::TakeEventStatus Controller::Stop_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 17 
            if(IS_COMPLETED(Stop)==true)
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    Stop_exit();
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::sendaction_7_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 12 
            if(!state_indication)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_9");
                    pushNullTransition();
                    Stop_subState = sendaction_9;
                    rootState_active = sendaction_9;
                    //#[ state Stop.sendaction_9.(Entry) 
                    itsDetector.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_8");
                    pushNullTransition();
                    Stop_subState = sendaction_8;
                    rootState_active = sendaction_8;
                    //#[ state Stop.sendaction_8.(Entry) 
                    itsLamp.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Stop_handleEvent();
        }
    return res;
}

void Controller::Start_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Start");
    rootState_subState = Start;
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_2");
    pushNullTransition();
    Start_subState = sendaction_2;
    rootState_active = sendaction_2;
    //#[ state Start.sendaction_2.(Entry) 
    itsDetector.GEN(evStart());
    //#]
    NOTIFY_TRANSITION_TERMINATED("0");
}

void Controller::Start_exit() {
    switch (Start_subState) {
        // State sendaction_2
        case sendaction_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_2");
        }
        break;
        // State terminationstate_3
        case terminationstate_3:
        {
            NOTIFY_STATE_EXITED("ROOT.Start.terminationstate_3");
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_4");
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_5");
        }
        break;
        default:
            break;
    }
    Start_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Start");
}

IOxfReactive::TakeEventStatus Controller::Ready_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSignal_Default_id))
        {
            if(TRUE)
                {
                    //## transition 7 
                    if(state0==OPENING)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("7");
                            NOTIFY_STATE_EXITED("ROOT.Ready");
                            //#[ transition 7 
                            set_state(CLOSING);
                            //#]
                            Start_entDef();
                            NOTIFY_TRANSITION_TERMINATED("7");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("8");
                            NOTIFY_STATE_EXITED("ROOT.Ready");
                            //#[ transition 8 
                            state0==CLOSING/set_state(OPENING);
                            //#]
                            Start_entDef();
                            NOTIFY_TRANSITION_TERMINATED("8");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            Stop_entDef();
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStep_Default_id))
        {
            OMSETPARAMS(evStep);
            //## transition 20 
            if(state == OPENING ? (position < position_max) : (position > position_min))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    NOTIFY_STATE_ENTERED("ROOT.Step");
                    pushNullTransition();
                    rootState_subState = Step;
                    rootState_active = Step;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    Stop_entDef();
                    NOTIFY_TRANSITION_TERMINATED("19");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String((int)myReal->state));
    aomsAttributes->addAttribute("state0", x2String((int)myReal->state0));
    aomsAttributes->addAttribute("detector_ok", x2String(myReal->detector_ok));
    aomsAttributes->addAttribute("drive_ok", x2String(myReal->drive_ok));
    aomsAttributes->addAttribute("lamp_ok", x2String(myReal->lamp_ok));
    aomsAttributes->addAttribute("position", x2String(myReal->position));
    aomsAttributes->addAttribute("position_max", x2String(myReal->position_max));
    aomsAttributes->addAttribute("position_min", x2String(myReal->position_min));
    aomsAttributes->addAttribute("receiver_ok", x2String(myReal->receiver_ok));
    OMAnimatedLamp::serializeAttributes(aomsAttributes);
}

void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDetector", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDetector);
    aomsRelations->addRelation("itsDrive", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDrive);
    aomsRelations->addRelation("itsReceiver", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsReceiver);
    aomsRelations->addRelation("itsLamp", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLamp);
    aomsRelations->addRelation("itsKeyboard", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKeyboard);
    aomsRelations->addRelation("itsDisplay", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay);
    aomsRelations->addRelation("itsLamp_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLamp_1);
    aomsRelations->addRelation("itsDrive_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDrive_1);
    aomsRelations->addRelation("itsReceiver_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsReceiver_1);
    aomsRelations->addRelation("itsDetector_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDetector_1);
    aomsRelations->addRelation("itsDisplay_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay_1);
    aomsRelations->addRelation("itsKeyboard_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKeyboard_1);
    aomsRelations->addRelation("itsLamp_2", false, true);
    if(myReal->itsLamp_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsLamp_2);
        }
    aomsRelations->addRelation("itsLamp_3", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLamp_3);
    OMAnimatedLamp::serializeRelations(aomsRelations);
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case Controller::Start:
        {
            Start_serializeStates(aomsState);
        }
        break;
        case Controller::Stop:
        {
            Stop_serializeStates(aomsState);
        }
        break;
        case Controller::Step:
        {
            Step_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_13:
        {
            sendaction_13_serializeStates(aomsState);
        }
        break;
        case Controller::Blockade:
        {
            Blockade_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_15:
        {
            terminationstate_15_serializeStates(aomsState);
        }
        break;
        case Controller::Firmware:
        {
            Firmware_serializeStates(aomsState);
        }
        break;
        case Controller::Regulations:
        {
            Regulations_serializeStates(aomsState);
        }
        break;
        case Controller::Operation:
        {
            Operation_serializeStates(aomsState);
        }
        break;
        case Controller::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case Controller::Auth:
        {
            Auth_serializeStates(aomsState);
        }
        break;
        case Controller::Testing:
        {
            Testing_serializeStates(aomsState);
        }
        break;
        case Controller::Servicing:
        {
            Servicing_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::Testing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Testing");
}

void OMAnimatedController::terminationstate_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_15");
}

void OMAnimatedController::Stop_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop");
    switch (myReal->Stop_subState) {
        case Controller::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_8:
        {
            sendaction_8_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_9:
        {
            sendaction_9_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_10:
        {
            terminationstate_10_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::terminationstate_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.terminationstate_10");
}

void OMAnimatedController::sendaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_9");
}

void OMAnimatedController::sendaction_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_8");
}

void OMAnimatedController::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_7");
}

void OMAnimatedController::Step_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Step");
}

void OMAnimatedController::Start_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start");
    switch (myReal->Start_subState) {
        case Controller::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_3:
        {
            terminationstate_3_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::terminationstate_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.terminationstate_3");
}

void OMAnimatedController::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_5");
}

void OMAnimatedController::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_4");
}

void OMAnimatedController::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_2");
}

void OMAnimatedController::Servicing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Servicing");
}

void OMAnimatedController::sendaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_13");
}

void OMAnimatedController::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_12");
}

void OMAnimatedController::Regulations_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulations");
}

void OMAnimatedController::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}

void OMAnimatedController::Operation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Operation");
}

void OMAnimatedController::Firmware_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Firmware");
}

void OMAnimatedController::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Error");
}

void OMAnimatedController::Blockade_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Blockade");
}

void OMAnimatedController::Auth_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Auth");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Controller, Default, false, Lamp, OMAnimatedLamp, OMAnimatedController)

OMINIT_SUPERCLASS(Lamp, OMAnimatedLamp)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/
