/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Module.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Module.h"
//#[ ignore
#define Default_Module_Module_SERIALIZE OM_NO_OP

#define Default_Module_get_active_SERIALIZE OM_NO_OP

#define Default_Module_is_ok_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Module
Module::Module(IOxfActive* theActiveContext) : is_active(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Module, Module(), 0, Default_Module_Module_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDrive.setShouldDelete(false);
        }
    }
    initRelations();
}

Module::~Module() {
    NOTIFY_DESTRUCTOR(~Module, true);
}

bool Module::get_active() {
    NOTIFY_OPERATION(get_active, get_active(), 0, Default_Module_get_active_SERIALIZE);
    //#[ operation get_active()
    //#]
}

bool Module::is_ok() {
    NOTIFY_OPERATION(is_ok, is_ok(), 0, Default_Module_is_ok_SERIALIZE);
    //#[ operation is_ok()
    //#]
}

int Module::getDirection() const {
    return direction;
}

void Module::setDirection(int p_direction) {
    direction = p_direction;
}

int Module::getId() const {
    return id;
}

void Module::setId(int p_id) {
    id = p_id;
}

bool Module::getIs_active() const {
    return is_active;
}

void Module::setIs_active(bool p_is_active) {
    is_active = p_is_active;
}

std::string Module::getName() const {
    return name;
}

void Module::setName(std::string p_name) {
    name = p_name;
}

int Module::getPeriod() const {
    return period;
}

void Module::setPeriod(int p_period) {
    period = p_period;
}

float Module::getVelocity() const {
    return velocity;
}

void Module::setVelocity(float p_velocity) {
    velocity = p_velocity;
}

Drive* Module::getItsDrive() const {
    return (Drive*) &itsDrive;
}

bool Module::startBehavior() {
    bool done = true;
    done &= itsDrive.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Module::initRelations() {
    itsDrive._setItsModule(this);
}

void Module::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDrive.setActiveContext(theActiveContext, false);
    }
}

void Module::destroy() {
    itsDrive.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedModule::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    aomsAttributes->addAttribute("is_active", x2String(myReal->is_active));
    aomsAttributes->addAttribute("name", UNKNOWN2STRING(myReal->name));
    aomsAttributes->addAttribute("period", x2String(myReal->period));
    aomsAttributes->addAttribute("velocity", x2String(myReal->velocity));
    aomsAttributes->addAttribute("direction", x2String(myReal->direction));
}

void OMAnimatedModule::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDrive", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDrive);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Module, Default, Default, false, OMAnimatedModule)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Module.cpp
*********************************************************************/
