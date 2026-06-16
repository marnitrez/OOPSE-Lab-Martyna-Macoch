/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-102
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Module.h
*********************************************************************/

#ifndef Module_H
#define Module_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## link itsDrive
#include "Drive.h"
//## package Default

//## class Module
class Module : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedModule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Module(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Module();
    
    ////    Operations    ////
    
    //## operation get_active()
    bool get_active();
    
    //## operation is_ok()
    bool is_ok();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getDirection() const;
    
    //## auto_generated
    void setDirection(int p_direction);
    
    //## auto_generated
    int getId() const;
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    bool getIs_active() const;
    
    //## auto_generated
    void setIs_active(bool p_is_active);
    
    //## auto_generated
    std::string getName() const;
    
    //## auto_generated
    void setName(std::string p_name);
    
    //## auto_generated
    int getPeriod() const;
    
    //## auto_generated
    void setPeriod(int p_period);
    
    //## auto_generated
    float getVelocity() const;
    
    //## auto_generated
    void setVelocity(float p_velocity);
    
    //## auto_generated
    Drive* getItsDrive() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
    int direction;		//## attribute direction
    
    int id;		//## attribute id
    
    bool is_active;		//## attribute is_active
    
    std::string name;		//## attribute name
    
    int period;		//## attribute period
    
    float velocity;		//## attribute velocity
    
    ////    Relations and components    ////
    
    Drive itsDrive;		//## link itsDrive
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedModule : virtual public AOMInstance {
    DECLARE_META(Module, OMAnimatedModule)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Module.h
*********************************************************************/
