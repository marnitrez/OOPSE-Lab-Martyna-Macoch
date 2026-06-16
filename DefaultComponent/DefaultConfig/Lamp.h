/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lamp
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Lamp.h
*********************************************************************/

#ifndef Lamp_H
#define Lamp_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Lamp
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Lamp
class Lamp : public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLamp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Lamp(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Lamp();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    Controller* getItsController_1() const;
    
    //## auto_generated
    void setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    Controller* itsController_1;		//## link itsController_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    //## auto_generated
    void __setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController_1();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Inactive:
    //## statechart_method
    inline bool Inactive_IN() const;
    
    // Blink:
    //## statechart_method
    inline bool Blink_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Lamp_Enum {
        OMNonState = 0,
        Inactive = 1,
        Blink = 2,
        Active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLamp : public OMAnimatedModule {
    DECLARE_REACTIVE_META(Lamp, OMAnimatedLamp)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Inactive_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Blink_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Active_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Lamp::rootState_IN() const {
    return true;
}

inline bool Lamp::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool Lamp::Blink_IN() const {
    return rootState_subState == Blink;
}

inline bool Lamp::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Lamp.h
*********************************************************************/
