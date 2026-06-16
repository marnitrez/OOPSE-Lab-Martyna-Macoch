/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drive
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Drive.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Drive.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Drive_Drive_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Drive
Drive::Drive(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Drive, Drive(), 0, Default_Drive_Drive_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    itsModule = NULL;
    initStatechart();
}

Drive::~Drive() {
    NOTIFY_DESTRUCTOR(~Drive, false);
    cleanUpRelations();
    cancelTimeouts();
}

Controller* Drive::getItsController() const {
    return itsController;
}

void Drive::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

Module* Drive::getItsModule() const {
    return itsModule;
}

void Drive::setItsModule(Module* p_Module) {
    _setItsModule(p_Module);
}

bool Drive::startBehavior() {
    bool done = false;
    done = Module::startBehavior();
    return done;
}

void Drive::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Drive::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
    if(itsModule != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsModule");
            itsModule = NULL;
        }
}

void Drive::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Drive::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Drive::__setItsController(Controller* p_Controller) {
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

void Drive::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Drive::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Drive::__setItsModule(Module* p_Module) {
    itsModule = p_Module;
    if(p_Module != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsModule", p_Module, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsModule");
        }
}

void Drive::_setItsModule(Module* p_Module) {
    __setItsModule(p_Module);
}

void Drive::_clearItsModule() {
    NOTIFY_RELATION_CLEARED("itsModule");
    itsModule = NULL;
}

void Drive::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.Inactive");
        rootState_subState = Inactive;
        rootState_active = Inactive;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus Drive::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    OMSETPARAMS(evStart);
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state Inactive.(Exit) 
                    evStop;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Inactive");
                    //#[ transition 1 
                    direction=params->state;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    //#[ state Active.(Entry) 
                    evStop;
                    //#]
                    rootState_timeout = scheduleTimeout(period, "ROOT.Active");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Inactive");
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active");
                            //#[ transition 3 
                            std::cout << "\nDrive: period=" <<  period << ", velocity = " << velocity << ", dir=" << direction;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                            pushNullTransition();
                            rootState_subState = sendaction_4;
                            rootState_active = sendaction_4;
                            //#[ state sendaction_4.(Entry) 
                            itsController->GEN(evStep_f());
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
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
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    //#[ state Active.(Entry) 
                    evStop;
                    //#]
                    rootState_timeout = scheduleTimeout(period, "ROOT.Active");
                    NOTIFY_TRANSITION_TERMINATED("4");
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
void OMAnimatedDrive::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedDrive::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsModule", false, true);
    if(myReal->itsModule)
        {
            aomsRelations->ADD_ITEM(myReal->itsModule);
        }
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedDrive::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Drive::Inactive:
        {
            Inactive_serializeStates(aomsState);
        }
        break;
        case Drive::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        case Drive::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDrive::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedDrive::Inactive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inactive");
}

void OMAnimatedDrive::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Drive, Default, false, Module, OMAnimatedModule, OMAnimatedDrive)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Drive.cpp
*********************************************************************/
