/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Keyboard
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Keyboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Keyboard.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Keyboard_Keyboard_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Keyboard
Keyboard::Keyboard(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Keyboard, Keyboard(), 0, Default_Keyboard_Keyboard_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
}

Keyboard::~Keyboard() {
    NOTIFY_DESTRUCTOR(~Keyboard, false);
    cleanUpRelations();
}

Controller* Keyboard::getItsController() const {
    return itsController;
}

void Keyboard::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Keyboard::startBehavior() {
    bool done = false;
    done = Module::startBehavior();
    return done;
}

void Keyboard::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Keyboard::__setItsController(Controller* p_Controller) {
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

void Keyboard::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Keyboard::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedKeyboard::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedKeyboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(Keyboard, Default, false, Module, OMAnimatedModule, OMAnimatedKeyboard)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Keyboard.cpp
*********************************************************************/
