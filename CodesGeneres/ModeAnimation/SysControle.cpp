/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: SysControle
//!	Generated Date	: Fri, 3, Feb 2017  
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

#define _MonPkg_SysControle_chCons_SERIALIZE aomsmethod->addAttribute("param1", x2String(param1));

#define _MonPkg_SysControle_dyn_reg_SERIALIZE OM_NO_OP

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
    cancelTimeouts();
}

SysControle::SysControle(IOxfActive* theActiveContext) : REG_MAX_SPEED(120.0), REG_MIN_SPEED(50.0), consigne(0), error(0.0), fetchSpeed(false), reg_on(false), steady(0.0), throttle(0.0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(SysControle, SysControle(), 0, _MonPkg_SysControle_SysControle_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

void SysControle::chCons(int param1) {
    NOTIFY_OPERATION(chCons, chCons(int), 1, _MonPkg_SysControle_chCons_SERIALIZE);
    //#[ operation chCons(int)
    consigne+=param1;
    
    if(consigne<(int)REG_MIN_SPEED){
    	consigne=(int)REG_MIN_SPEED;
    }
    if(consigne>(int)REG_MAX_SPEED){
    	consigne=(int)REG_MAX_SPEED;
    }
    //#]
}

void SysControle::dyn_reg() {
    NOTIFY_OPERATION(dyn_reg, dyn_reg(), 0, _MonPkg_SysControle_dyn_reg_SERIALIZE);
    //#[ operation dyn_reg()
    error = (double) ((consigne-speed)/6.0);
    steady = (double) (consigne/12.0);
    throttle = steady+error;
    
    OUT_PORT(toMoteur)->GEN(evRegThrottle(throttle));
    //#]
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
    	consigne=0;
    	chCons(speed);
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

const double SysControle::getREG_MAX_SPEED() {
    return REG_MAX_SPEED;
}

const double SysControle::getREG_MIN_SPEED() {
    return REG_MIN_SPEED;
}

int SysControle::getConsigne() {
    return consigne;
}

void SysControle::setConsigne(int p_consigne) {
    consigne = p_consigne;
    NOTIFY_SET_OPERATION;
}

double SysControle::getError() {
    return error;
}

void SysControle::setError(double p_error) {
    error = p_error;
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

double SysControle::getSteady() {
    return steady;
}

void SysControle::setSteady(double p_steady) {
    steady = p_steady;
}

double SysControle::getThrottle() {
    return throttle;
}

void SysControle::setThrottle(double p_throttle) {
    throttle = p_throttle;
    NOTIFY_SET_OPERATION;
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
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_8_subState = OMNonState;
    state_8_active = OMNonState;
    state_6_subState = OMNonState;
    state_6_active = OMNonState;
    state_6_timeout = NULL;
    state_5_subState = OMNonState;
    state_5_active = OMNonState;
    consigneUp_subState = OMNonState;
    state_5_timeout = NULL;
    consigneDown_subState = OMNonState;
}

void SysControle::cancelTimeouts() {
    cancel(state_6_timeout);
    cancel(state_5_timeout);
}

bool SysControle::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_6_timeout == arg)
        {
            state_6_timeout = NULL;
            res = true;
        }
    if(state_5_timeout == arg)
        {
            state_5_timeout = NULL;
            res = true;
        }
    return res;
}

void SysControle::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        reg_state_entDef();
    }
}

IOxfReactive::TakeEventStatus SysControle::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State reg_state
    if(rootState_active == reg_state)
        {
            res = reg_state_processEvent();
        }
    return res;
}

void SysControle::reg_state_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state");
    rootState_subState = reg_state;
    rootState_active = reg_state;
    state_8_entDef();
    state_9_entDef();
}

void SysControle::reg_state_exit() {
    switch (state_8_subState) {
        // State off
        case off:
        {
            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.off");
        }
        break;
        // State on
        case on:
        {
            on_exit();
        }
        break;
        default:
            break;
    }
    state_8_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8");
    state_9_exit();
    
    NOTIFY_STATE_EXITED("ROOT.reg_state");
}

IOxfReactive::TakeEventStatus SysControle::reg_state_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_8
    if(state_8_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(reg_state))
                {
                    return res;
                }
        }
    // State state_9
    if(state_9_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(reg_state))
                {
                    return res;
                }
        }
    
    return res;
}

void SysControle::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_9");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_9.speed_loop");
    state_9_subState = speed_loop;
    state_9_active = speed_loop;
    NOTIFY_TRANSITION_TERMINATED("9");
}

void SysControle::state_9_exit() {
    // State speed_loop
    if(state_9_subState == speed_loop)
        {
            NOTIFY_STATE_EXITED("ROOT.reg_state.state_9.speed_loop");
        }
    state_9_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_9");
}

IOxfReactive::TakeEventStatus SysControle::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State speed_loop
    if(state_9_active == speed_loop)
        {
            if(IS_EVENT_TYPE_OF(evSetSpeed__MonPkg_id))
                {
                    OMSETPARAMS(evSetSpeed);
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.reg_state.state_9.speed_loop");
                    //#[ transition 5 
                    updateSpeed(params->speed);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_9.speed_loop");
                    state_9_subState = speed_loop;
                    state_9_active = speed_loop;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void SysControle::state_8_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8");
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.off");
    state_8_subState = off;
    state_8_active = off;
    //#[ state reg_state.state_8.off.(Entry) 
    reg_on=false;
    //#]
    NOTIFY_TRANSITION_TERMINATED("0");
}

IOxfReactive::TakeEventStatus SysControle::state_8_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_8_active) {
        // State off
        case off:
        {
            if(IS_EVENT_TYPE_OF(evToggleReg__MonPkg_id))
                {
                    //## transition 1 
                    if(speed>=REG_MIN_SPEED)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.off");
                            //#[ transition 1 
                            regOn();
                            //#]
                            on_entDef();
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State on
        case on:
        {
            res = on_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void SysControle::on_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on");
    pushNullTransition();
    state_8_subState = on;
    state_8_active = on;
    state_5_entDef();
    state_6_entDef();
}

void SysControle::on_exit() {
    popNullTransition();
    switch (state_5_subState) {
        // State action
        case action:
        {
            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.action");
        }
        break;
        // State consigneUp
        case consigneUp:
        {
            consigneUp_exit();
        }
        break;
        // State consigneDown
        case consigneDown:
        {
            consigneDown_exit();
        }
        break;
        default:
            break;
    }
    state_5_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5");
    state_6_exit();
    
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on");
}

IOxfReactive::TakeEventStatus SysControle::on_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_5
    if(state_5_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(on))
                {
                    return res;
                }
        }
    // State state_6
    if(state_6_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(on))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = on_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SysControle::on_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 11 
            if(speed<REG_MIN_SPEED-1.0)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    on_exit();
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.off");
                    state_8_subState = off;
                    state_8_active = off;
                    //#[ state reg_state.state_8.off.(Entry) 
                    reg_on=false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evFreiner__MonPkg_id))
        {
            OMSETPARAMS(evFreiner);
            NOTIFY_TRANSITION_STARTED("10");
            on_exit();
            NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.off");
            state_8_subState = off;
            state_8_active = off;
            //#[ state reg_state.state_8.off.(Entry) 
            reg_on=false;
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evToggleReg__MonPkg_id))
        {
            //## transition 2 
            if(reg_on==true)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    on_exit();
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.off");
                    state_8_subState = off;
                    state_8_active = off;
                    //#[ state reg_state.state_8.off.(Entry) 
                    reg_on=false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    
    return res;
}

void SysControle::state_6_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_6");
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_6.dyn_loop");
    state_6_subState = dyn_loop;
    state_6_active = dyn_loop;
    state_6_timeout = scheduleTimeout(500, "ROOT.reg_state.state_8.on.state_6.dyn_loop");
    NOTIFY_TRANSITION_TERMINATED("7");
}

void SysControle::state_6_exit() {
    // State dyn_loop
    if(state_6_subState == dyn_loop)
        {
            cancel(state_6_timeout);
            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_6.dyn_loop");
        }
    state_6_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_6");
}

IOxfReactive::TakeEventStatus SysControle::state_6_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State dyn_loop
    if(state_6_active == dyn_loop)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_6_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(state_6_timeout);
                            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_6.dyn_loop");
                            //#[ transition 6 
                            dyn_reg();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_6.dyn_loop");
                            state_6_subState = dyn_loop;
                            state_6_active = dyn_loop;
                            state_6_timeout = scheduleTimeout(500, "ROOT.reg_state.state_8.on.state_6.dyn_loop");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void SysControle::state_5_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.action");
    state_5_subState = action;
    state_5_active = action;
    NOTIFY_TRANSITION_TERMINATED("8");
}

IOxfReactive::TakeEventStatus SysControle::state_5_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_5_active) {
        // State action
        case action:
        {
            res = action_handleEvent();
        }
        break;
        // State upup
        case upup:
        {
            if(IS_EVENT_TYPE_OF(evRegPlus__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.consigneUp.upup");
                    //#[ transition 14 
                    chCons(9);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.consigneUp.upup");
                    consigneUp_subState = upup;
                    state_5_active = upup;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = consigneUp_handleEvent();
                }
        }
        break;
        // State downdown
        case downdown:
        {
            if(IS_EVENT_TYPE_OF(evRegMoins__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.consigneDown.downdown");
                    //#[ transition 15 
                    chCons(-9);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.consigneDown.downdown");
                    consigneDown_subState = downdown;
                    state_5_active = downdown;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = consigneDown_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

void SysControle::consigneUp_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.consigneUp");
    state_5_subState = consigneUp;
    state_5_timeout = scheduleTimeout(250, "ROOT.reg_state.state_8.on.state_5.consigneUp");
    NOTIFY_TRANSITION_STARTED("13");
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.consigneUp.upup");
    consigneUp_subState = upup;
    state_5_active = upup;
    NOTIFY_TRANSITION_TERMINATED("13");
}

void SysControle::consigneUp_exit() {
    // State upup
    if(consigneUp_subState == upup)
        {
            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.consigneUp.upup");
        }
    consigneUp_subState = OMNonState;
    cancel(state_5_timeout);
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.consigneUp");
}

IOxfReactive::TakeEventStatus SysControle::consigneUp_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_5_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    consigneUp_exit();
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.action");
                    state_5_subState = action;
                    state_5_active = action;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
        }
    
    
    return res;
}

void SysControle::consigneDown_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.consigneDown");
    state_5_subState = consigneDown;
    state_5_timeout = scheduleTimeout(250, "ROOT.reg_state.state_8.on.state_5.consigneDown");
    NOTIFY_TRANSITION_STARTED("16");
    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.consigneDown.downdown");
    consigneDown_subState = downdown;
    state_5_active = downdown;
    NOTIFY_TRANSITION_TERMINATED("16");
}

void SysControle::consigneDown_exit() {
    // State downdown
    if(consigneDown_subState == downdown)
        {
            NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.consigneDown.downdown");
        }
    consigneDown_subState = OMNonState;
    cancel(state_5_timeout);
    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.consigneDown");
}

IOxfReactive::TakeEventStatus SysControle::consigneDown_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_5_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    consigneDown_exit();
                    NOTIFY_STATE_ENTERED("ROOT.reg_state.state_8.on.state_5.action");
                    state_5_subState = action;
                    state_5_active = action;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus SysControle::action_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evRegMoins__MonPkg_id))
        {
            //## transition 4 
            if(reg_on)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.action");
                    //#[ transition 4 
                    chCons(-1);
                    //#]
                    consigneDown_entDef();
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
                    NOTIFY_STATE_EXITED("ROOT.reg_state.state_8.on.state_5.action");
                    //#[ transition 3 
                    chCons(1);
                    //#]
                    consigneUp_entDef();
                    NOTIFY_TRANSITION_TERMINATED("3");
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
    aomsAttributes->addAttribute("error", x2String(myReal->error));
    aomsAttributes->addAttribute("steady", x2String(myReal->steady));
    aomsAttributes->addAttribute("throttle", x2String(myReal->throttle));
    aomsAttributes->addAttribute("REG_MIN_SPEED", x2String(myReal->REG_MIN_SPEED));
    aomsAttributes->addAttribute("REG_MAX_SPEED", x2String(myReal->REG_MAX_SPEED));
}

void OMAnimatedSysControle::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == SysControle::reg_state)
        {
            reg_state_serializeStates(aomsState);
        }
}

void OMAnimatedSysControle::reg_state_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state");
    state_8_serializeStates(aomsState);
    state_9_serializeStates(aomsState);
}

void OMAnimatedSysControle::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_9");
    if(myReal->state_9_subState == SysControle::speed_loop)
        {
            speed_loop_serializeStates(aomsState);
        }
}

void OMAnimatedSysControle::speed_loop_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_9.speed_loop");
}

void OMAnimatedSysControle::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8");
    switch (myReal->state_8_subState) {
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
    aomsState->addState("ROOT.reg_state.state_8.on");
    state_5_serializeStates(aomsState);
    state_6_serializeStates(aomsState);
}

void OMAnimatedSysControle::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_6");
    if(myReal->state_6_subState == SysControle::dyn_loop)
        {
            dyn_loop_serializeStates(aomsState);
        }
}

void OMAnimatedSysControle::dyn_loop_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_6.dyn_loop");
}

void OMAnimatedSysControle::state_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_5");
    switch (myReal->state_5_subState) {
        case SysControle::action:
        {
            action_serializeStates(aomsState);
        }
        break;
        case SysControle::consigneUp:
        {
            consigneUp_serializeStates(aomsState);
        }
        break;
        case SysControle::consigneDown:
        {
            consigneDown_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSysControle::consigneUp_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_5.consigneUp");
    if(myReal->consigneUp_subState == SysControle::upup)
        {
            upup_serializeStates(aomsState);
        }
}

void OMAnimatedSysControle::upup_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_5.consigneUp.upup");
}

void OMAnimatedSysControle::consigneDown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_5.consigneDown");
    if(myReal->consigneDown_subState == SysControle::downdown)
        {
            downdown_serializeStates(aomsState);
        }
}

void OMAnimatedSysControle::downdown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_5.consigneDown.downdown");
}

void OMAnimatedSysControle::action_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.on.state_5.action");
}

void OMAnimatedSysControle::off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reg_state.state_8.off");
}
//#]

IMPLEMENT_REACTIVE_META_P(SysControle, _MonPkg, _MonPkg, false, OMAnimatedSysControle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.cpp
*********************************************************************/
