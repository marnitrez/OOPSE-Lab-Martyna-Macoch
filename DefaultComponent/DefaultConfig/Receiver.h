/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Receiver.h
*********************************************************************/

#ifndef Receiver_H
#define Receiver_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Receiver
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Receiver
class Receiver : public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedReceiver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Receiver(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Receiver();
    
    ////    Operations    ////
    
    //## operation message_0()
    void message_0();
    
    //## operation validate_signal()
    void validate_signal();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getSignal_ok() const;
    
    //## auto_generated
    void setSignal_ok(bool p_signal_ok);
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool signal_ok;		//## attribute signal_ok
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // validate:
    //## statechart_method
    inline bool validate_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // Inactive:
    //## statechart_method
    inline bool Inactive_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Receiver_Enum {
        OMNonState = 0,
        validate = 1,
        sendaction_3 = 2,
        Inactive = 3,
        Active = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedReceiver : public OMAnimatedModule {
    DECLARE_REACTIVE_META(Receiver, OMAnimatedReceiver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void validate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Inactive_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Active_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Receiver::rootState_IN() const {
    return true;
}

inline bool Receiver::validate_IN() const {
    return rootState_subState == validate;
}

inline bool Receiver::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool Receiver::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool Receiver::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Receiver.h
*********************************************************************/
