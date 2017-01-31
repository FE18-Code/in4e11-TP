/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: SysControle
//!	Generated Date	: Tue, 31, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\SysControle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SysControle.h"
//#[ ignore
#define _MonPkg_SysControle_SysControle_SERIALIZE OM_NO_OP

#define _MonPkg_SysControle_getReg_on_SERIALIZE OM_NO_OP

#define _MonPkg_SysControle_regOn_SERIALIZE OM_NO_OP

#define _MonPkg_SysControle_setReg_on_SERIALIZE aomsmethod->addAttribute("p_reg_on", x2String(p_reg_on));

#define _MonPkg_SysControle_updateSpeed_SERIALIZE aomsmethod->addAttribute("s", x2String(s));
//#]

//## package _MonPkg

//## class SysControle
//#[ ignore
SysControle::toMoteur_C::toMoteur_C() : _p_(0) {
}

SysControle::toMoteur_C::~toMoteur_C() {
}

void SysControle::toMoteur_C::connectSysControle(SysControle* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

SysControle::fromVolant_C::fromVolant_C() : _p_(0) {
}

SysControle::fromVolant_C::~fromVolant_C() {
}

void SysControle::fromVolant_C::connectSysControle(SysControle* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

SysControle::~SysControle() {
    NOTIFY_DESTRUCTOR(~SysControle, true);
}

SysControle::SysControle(IOxfActive* theActiveContext) : consigne(0), fetchSpeed(false), reg_on(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(SysControle, SysControle(), 0, _MonPkg_SysControle_SysControle_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

bool SysControle::getReg_on() {
    NOTIFY_OPERATION(getReg_on, getReg_on(), 0, _MonPkg_SysControle_getReg_on_SERIALIZE);
    //#[ operation getReg_on()
    return reg_on;
    //#]
}

void SysControle::regOn() {
    NOTIFY_OPERATION(regOn, regOn(), 0, _MonPkg_SysControle_regOn_SERIALIZE);
    //#[ operation regOn()
    reg_on=true;
    fetchSpeed=true;
    //#]
}

void SysControle::setReg_on(bool p_reg_on) {
    NOTIFY_OPERATION(setReg_on, setReg_on(bool), 1, _MonPkg_SysControle_setReg_on_SERIALIZE);
    //#[ operation setReg_on(bool)
    reg_on = p_reg_on;
    //#]
    NOTIFY_SET_OPERATION;
}

void SysControle::updateSpeed(int s) {
    NOTIFY_OPERATION(updateSpeed, updateSpeed(int), 1, _MonPkg_SysControle_updateSpeed_SERIALIZE);
    //#[ operation updateSpeed(int)
    speed=s;
    if(fetchSpeed==true){
    	consigne=speed;
    	fetchSpeed=false;
    }
    
    //#]
}

SysControle::toMoteur_C* SysControle::getToMoteur() const {
    return (SysControle::toMoteur_C*) &toMoteur;
}

SysControle::toMoteur_C* SysControle::get_toMoteur() const {
    return (SysControle::toMoteur_C*) &toMoteur;
}

SysControle::fromVolant_C* SysControle::getFromVolant() const {
    return (SysControle::fromVolant_C*) &fromVolant;
}

SysControle::fromVolant_C* SysControle::get_fromVolant() const {
    return (SysControle::fromVolant_C*) &fromVolant;
}

int SysControle::getConsigne() {
    return consigne;
}

void SysControle::setConsigne(int p_consigne) {
    consigne = p_consigne;
    NOTIFY_SET_OPERATION;
}

bool SysControle::getFetchSpeed() {
    return fetchSpeed;
}

void SysControle::setFetchSpeed(bool p_fetchSpeed) {
    fetchSpeed = p_fetchSpeed;
}

int SysControle::getSpeed() {
    return speed;
}

void SysControle::setSpeed(int p_speed) {
    speed = p_speed;
}

bool SysControle::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void SysControle::initRelations() {
    if (get_toMoteur() != NULL) {
        get_toMoteur()->connectSysControle(this);
    }
    if (get_fromVolant() != NULL) {
        get_fromVolant()->connectSysControle(this);
    }
}

void SysControle::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void SysControle::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.off");
        rootState_subState = off;
        rootState_active = off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SysControle::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State off
        case off:
        {
            if(IS_EVENT_TYPE_OF(evToggleReg__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.off");
                    //#[ transition 1 
                    regOn();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on");
                    rootState_subState = on;
                    rootState_active = on;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State on
        case on:
        {
            res = on_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus SysControle::on_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evRegMoins__MonPkg_id))
        {
            //## transition 4 
            if(reg_on)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.on");
                    //#[ transition 4 
                    consigne--;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on");
                    rootState_subState = on;
                    rootState_active = on;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evRegPlus__MonPkg_id))
        {
            //## transition 3 
            if(reg_on)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.on");
                    //#[ transition 3 
                    consigne++;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on");
                    rootState_subState = on;
                    rootState_active = on;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evSetSpeed__MonPkg_id))
        {
            OMSETPARAMS(evSetSpeed);
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.on");
            //#[ transition 5 
            updateSpeed(params->speed);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.on");
            rootState_subState = on;
            rootState_active = on;
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evToggleReg__MonPkg_id))
        {
            //## transition 2 
            if(reg_on==true)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.on");
                    //#[ transition 2 
                    reg_on=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.off");
                    rootState_subState = off;
                    rootState_active = off;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSysControle::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("reg_on", x2String(myReal->reg_on));
    aomsAttributes->addAttribute("consigne", x2String(myReal->consigne));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
    aomsAttributes->addAttribute("fetchSpeed", x2String(myReal->fetchSpeed));
}

void OMAnimatedSysControle::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SysControle::off:
        {
            off_serializeStates(aomsState);
        }
        break;
        case SysControle::on:
        {
            on_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSysControle::on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on");
}

void OMAnimatedSysControle::off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.off");
}
//#]

IMPLEMENT_REACTIVE_META_P(SysControle, _MonPkg, _MonPkg, false, OMAnimatedSysControle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.cpp
*********************************************************************/
