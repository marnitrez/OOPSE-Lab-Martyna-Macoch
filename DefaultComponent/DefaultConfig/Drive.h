/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drive
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Drive.h
*********************************************************************/

#ifndef Drive_H
#define Drive_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Drive
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Drive
class Drive : public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Drive(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Drive();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    Module* getItsModule() const;
    
    //## auto_generated
    void setItsModule(Module* p_Module);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    Module* itsModule;		//## link itsModule
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    //## auto_generated
    void __setItsModule(Module* p_Module);
    
    //## auto_generated
    void _setItsModule(Module* p_Module);
    
    //## auto_generated
    void _clearItsModule();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // Inactive:
    //## statechart_method
    inline bool Inactive_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Drive_Enum {
        OMNonState = 0,
        sendaction_4 = 1,
        Inactive = 2,
        Active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDrive : public OMAnimatedModule {
    DECLARE_REACTIVE_META(Drive, OMAnimatedDrive)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Inactive_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Active_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Drive::rootState_IN() const {
    return true;
}

inline bool Drive::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool Drive::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool Drive::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Drive.h
*********************************************************************/
