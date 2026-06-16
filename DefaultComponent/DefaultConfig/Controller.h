/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsDetector
#include "Detector.h"
//## classInstance itsDisplay
#include "Display.h"
//## classInstance itsDrive
#include "Drive.h"
//## classInstance itsKeyboard
#include "Keyboard.h"
//## class Controller
#include "Lamp.h"
//## classInstance itsReceiver
#include "Receiver.h"
//## package Default

//## class Controller
class Controller : public Lamp {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Controller(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Controller();
    
    ////    Operations    ////
    
    //## operation evCollision()
    void evCollision();
    
    //## operation evStep()
    void evStep();
    
    //## operation message_0()
    void message_0();
    
    //## operation set_state()
    void set_state();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getDetector_ok() const;
    
    //## auto_generated
    void setDetector_ok(bool p_detector_ok);
    
    //## auto_generated
    bool getDrive_ok() const;
    
    //## auto_generated
    void setDrive_ok(bool p_drive_ok);
    
    //## auto_generated
    bool getLamp_ok() const;
    
    //## auto_generated
    void setLamp_ok(bool p_lamp_ok);
    
    //## auto_generated
    float getPosition() const;
    
    //## auto_generated
    void setPosition(float p_position);
    
    //## auto_generated
    float getPosition_max() const;
    
    //## auto_generated
    void setPosition_max(float p_position_max);
    
    //## auto_generated
    float getPosition_min() const;
    
    //## auto_generated
    void setPosition_min(float p_position_min);
    
    //## auto_generated
    bool getReceiver_ok() const;
    
    //## auto_generated
    void setReceiver_ok(bool p_receiver_ok);
    
    //## auto_generated
    States getState() const;
    
    //## auto_generated
    void setState(States p_state);
    
    //## auto_generated
    States getState0() const;
    
    //## auto_generated
    void setState0(States p_state0);
    
    //## auto_generated
    Detector* getItsDetector() const;
    
    //## auto_generated
    Detector* getItsDetector_1() const;
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    Display* getItsDisplay_1() const;
    
    //## auto_generated
    Drive* getItsDrive() const;
    
    //## auto_generated
    Drive* getItsDrive_1() const;
    
    //## auto_generated
    Keyboard* getItsKeyboard() const;
    
    //## auto_generated
    Keyboard* getItsKeyboard_1() const;
    
    //## auto_generated
    Lamp* getItsLamp() const;
    
    //## auto_generated
    Lamp* getItsLamp_1() const;
    
    //## auto_generated
    Lamp* getItsLamp_2() const;
    
    //## auto_generated
    void setItsLamp_2(Lamp* p_Lamp);
    
    //## auto_generated
    Lamp* getItsLamp_3() const;
    
    //## auto_generated
    Receiver* getItsReceiver() const;
    
    //## auto_generated
    Receiver* getItsReceiver_1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    bool detector_ok;		//## attribute detector_ok
    
    bool drive_ok;		//## attribute drive_ok
    
    bool lamp_ok;		//## attribute lamp_ok
    
    float position;		//## attribute position
    
    float position_max;		//## attribute position_max
    
    float position_min;		//## attribute position_min
    
    bool receiver_ok;		//## attribute receiver_ok
    
    States state;		//## attribute state
    
    States state0;		//## attribute state0
    
    ////    Relations and components    ////
    
    Detector itsDetector;		//## classInstance itsDetector
    
    Detector itsDetector_1;		//## link itsDetector_1
    
    Display itsDisplay;		//## classInstance itsDisplay
    
    Display itsDisplay_1;		//## link itsDisplay_1
    
    Drive itsDrive;		//## classInstance itsDrive
    
    Drive itsDrive_1;		//## link itsDrive_1
    
    Keyboard itsKeyboard;		//## classInstance itsKeyboard
    
    Keyboard itsKeyboard_1;		//## link itsKeyboard_1
    
    Lamp itsLamp;		//## classInstance itsLamp
    
    Lamp itsLamp_1;		//## link itsLamp_1
    
    Lamp* itsLamp_2;		//## link itsLamp_2
    
    Lamp itsLamp_3;		//## link itsLamp_3
    
    Receiver itsReceiver;		//## classInstance itsReceiver
    
    Receiver itsReceiver_1;		//## link itsReceiver_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Testing:
    //## statechart_method
    inline bool Testing_IN() const;
    
    // terminationstate_15:
    //## statechart_method
    inline bool terminationstate_15_IN() const;
    
    // Stop:
    //## statechart_method
    inline bool Stop_IN() const;
    
    //## statechart_method
    inline bool Stop_isCompleted();
    
    //## statechart_method
    void Stop_entDef();
    
    //## statechart_method
    void Stop_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Stop_handleEvent();
    
    // terminationstate_10:
    //## statechart_method
    inline bool terminationstate_10_IN() const;
    
    // sendaction_9:
    //## statechart_method
    inline bool sendaction_9_IN() const;
    
    // sendaction_8:
    //## statechart_method
    inline bool sendaction_8_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus sendaction_7_handleEvent();
    
    // Step:
    //## statechart_method
    inline bool Step_IN() const;
    
    // Start:
    //## statechart_method
    inline bool Start_IN() const;
    
    //## statechart_method
    inline bool Start_isCompleted();
    
    //## statechart_method
    void Start_entDef();
    
    //## statechart_method
    void Start_exit();
    
    // terminationstate_3:
    //## statechart_method
    inline bool terminationstate_3_IN() const;
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // Servicing:
    //## statechart_method
    inline bool Servicing_IN() const;
    
    // sendaction_13:
    //## statechart_method
    inline bool sendaction_13_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // Regulations:
    //## statechart_method
    inline bool Regulations_IN() const;
    
    // Ready:
    //## statechart_method
    inline bool Ready_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Ready_handleEvent();
    
    // Operation:
    //## statechart_method
    inline bool Operation_IN() const;
    
    // Firmware:
    //## statechart_method
    inline bool Firmware_IN() const;
    
    // Error:
    //## statechart_method
    inline bool Error_IN() const;
    
    // Blockade:
    //## statechart_method
    inline bool Blockade_IN() const;
    
    // Auth:
    //## statechart_method
    inline bool Auth_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        Testing = 4,
        terminationstate_15 = 5,
        Stop = 6,
        terminationstate_10 = 7,
        sendaction_9 = 8,
        sendaction_8 = 9,
        sendaction_7 = 10,
        Step = 11,
        Start = 12,
        terminationstate_3 = 13,
        sendaction_5 = 14,
        sendaction_4 = 15,
        sendaction_2 = 16,
        Servicing = 17,
        sendaction_13 = 18,
        sendaction_12 = 19,
        Regulations = 20,
        Ready = 21,
        Operation = 22,
        Firmware = 23,
        Error = 24,
        Blockade = 25,
        Auth = 26
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Stop_subState;
    
    int Start_subState;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : public OMAnimatedLamp {
    DECLARE_REACTIVE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Testing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Step_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Start_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Servicing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Regulations_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Operation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Firmware_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Error_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Blockade_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Auth_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::rootState_isCompleted() {
    return ( IS_IN(terminationstate_15) );
}

inline bool Controller::Testing_IN() const {
    return rootState_subState == Testing;
}

inline bool Controller::terminationstate_15_IN() const {
    return rootState_subState == terminationstate_15;
}

inline bool Controller::Stop_IN() const {
    return rootState_subState == Stop;
}

inline bool Controller::Stop_isCompleted() {
    return ( IS_IN(terminationstate_10) );
}

inline bool Controller::terminationstate_10_IN() const {
    return Stop_subState == terminationstate_10;
}

inline bool Controller::sendaction_9_IN() const {
    return Stop_subState == sendaction_9;
}

inline bool Controller::sendaction_8_IN() const {
    return Stop_subState == sendaction_8;
}

inline bool Controller::sendaction_7_IN() const {
    return Stop_subState == sendaction_7;
}

inline bool Controller::Step_IN() const {
    return rootState_subState == Step;
}

inline bool Controller::Start_IN() const {
    return rootState_subState == Start;
}

inline bool Controller::Start_isCompleted() {
    return ( IS_IN(terminationstate_3) );
}

inline bool Controller::terminationstate_3_IN() const {
    return Start_subState == terminationstate_3;
}

inline bool Controller::sendaction_5_IN() const {
    return Start_subState == sendaction_5;
}

inline bool Controller::sendaction_4_IN() const {
    return Start_subState == sendaction_4;
}

inline bool Controller::sendaction_2_IN() const {
    return Start_subState == sendaction_2;
}

inline bool Controller::Servicing_IN() const {
    return rootState_subState == Servicing;
}

inline bool Controller::sendaction_13_IN() const {
    return rootState_subState == sendaction_13;
}

inline bool Controller::sendaction_12_IN() const {
    return rootState_subState == sendaction_12;
}

inline bool Controller::Regulations_IN() const {
    return rootState_subState == Regulations;
}

inline bool Controller::Ready_IN() const {
    return rootState_subState == Ready;
}

inline bool Controller::Operation_IN() const {
    return rootState_subState == Operation;
}

inline bool Controller::Firmware_IN() const {
    return rootState_subState == Firmware;
}

inline bool Controller::Error_IN() const {
    return rootState_subState == Error;
}

inline bool Controller::Blockade_IN() const {
    return rootState_subState == Blockade;
}

inline bool Controller::Auth_IN() const {
    return rootState_subState == Auth;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.h
*********************************************************************/
