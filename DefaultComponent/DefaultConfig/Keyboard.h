/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Keyboard
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Keyboard.h
*********************************************************************/

#ifndef Keyboard_H
#define Keyboard_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Keyboard
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Keyboard
class Keyboard : public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedKeyboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Keyboard(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Keyboard();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKeyboard : public OMAnimatedModule {
    DECLARE_META(Keyboard, OMAnimatedKeyboard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Keyboard.h
*********************************************************************/
