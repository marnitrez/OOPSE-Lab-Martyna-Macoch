/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Display.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Display_Display_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Display
Display::Display(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Display, Display(), 0, Default_Display_Display_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
}

Display::~Display() {
    NOTIFY_DESTRUCTOR(~Display, false);
    cleanUpRelations();
}

Controller* Display::getItsController() const {
    return itsController;
}

void Display::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Display::startBehavior() {
    bool done = false;
    done = Module::startBehavior();
    return done;
}

void Display::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Display::__setItsController(Controller* p_Controller) {
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

void Display::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Display::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDisplay::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedDisplay::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(Display, Default, false, Module, OMAnimatedModule, OMAnimatedDisplay)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Display.cpp
*********************************************************************/
