/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: SysControle
//!	Generated Date	: Fri, 3, Feb 2017  
	File Path	: CodesGeneres\ModeAnimation\SysControle.h
*********************************************************************/

#ifndef SysControle_H
#define SysControle_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "_MonPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include "Windows.h"
//## auto_generated
#include "stdlib.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "stdint.h"
//## auto_generated
#include "tchar.h"
//## package _MonPkg

//## class SysControle
class SysControle : public OMThread, public OMReactive {
public :

//#[ ignore
    //## package _MonPkg
    class toMoteur_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        toMoteur_C();
        
        //## auto_generated
        virtual ~toMoteur_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSysControle(SysControle* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _MonPkg
    class fromVolant_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        fromVolant_C();
        
        //## auto_generated
        virtual ~fromVolant_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSysControle(SysControle* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSysControle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~SysControle();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    //## auto_generated
    SysControle(IOxfActive* theActiveContext = 0);
    
    //## operation chCons(int)
    void chCons(int param1);
    
    //## operation dyn_reg()
    void dyn_reg();
    
    //## operation getReg_on()
    bool getReg_on();
    
    //## operation regOn()
    void regOn();
    
    //## operation setReg_on(bool)
    void setReg_on(bool p_reg_on);
    
    //## operation updateSpeed(int)
    void updateSpeed(int s);
    
    //## auto_generated
    toMoteur_C* getToMoteur() const;
    
    //## auto_generated
    toMoteur_C* get_toMoteur() const;
    
    //## auto_generated
    fromVolant_C* getFromVolant() const;
    
    //## auto_generated
    fromVolant_C* get_fromVolant() const;
    
    //## auto_generated
    const int getREG_ACCEL_IDLE();
    
    //## auto_generated
    const double getREG_MAX_SPEED();
    
    //## auto_generated
    const double getREG_MIN_SPEED();
    
    //## auto_generated
    int getConsigne();
    
    //## auto_generated
    void setConsigne(int p_consigne);
    
    //## auto_generated
    double getError();
    
    //## auto_generated
    void setError(double p_error);
    
    //## auto_generated
    bool getFetchSpeed();
    
    //## auto_generated
    void setFetchSpeed(bool p_fetchSpeed);
    
    //## auto_generated
    int getIntens_accel();
    
    //## auto_generated
    void setIntens_accel(int p_intens_accel);
    
    //## auto_generated
    int getSpeed();
    
    //## auto_generated
    void setSpeed(int p_speed);
    
    //## auto_generated
    double getSteady();
    
    //## auto_generated
    void setSteady(double p_steady);
    
    //## auto_generated
    double getThrottle();
    
    //## auto_generated
    void setThrottle(double p_throttle);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    const int REG_ACCEL_IDLE;		//## attribute REG_ACCEL_IDLE
    
    const double REG_MAX_SPEED;		//## attribute REG_MAX_SPEED
    
    const double REG_MIN_SPEED;		//## attribute REG_MIN_SPEED
    
    int consigne;		//## attribute consigne
    
    double error;		//## attribute error
    
    bool fetchSpeed;		//## attribute fetchSpeed
    
    int intens_accel;		//## attribute intens_accel
    
    bool reg_on;		//## attribute reg_on
    
    int speed;		//## attribute speed
    
    double steady;		//## attribute steady
    
    double throttle;		//## attribute throttle
    
//#[ ignore
    toMoteur_C toMoteur;
    
    fromVolant_C fromVolant;
//#]

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // reg_state:
    //## statechart_method
    inline bool reg_state_IN() const;
    
    //## statechart_method
    void reg_state_entDef();
    
    //## statechart_method
    void reg_state_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus reg_state_processEvent();
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    //## statechart_method
    void state_9_entDef();
    
    //## statechart_method
    void state_9_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    // speed_loop:
    //## statechart_method
    inline bool speed_loop_IN() const;
    
    // state_8:
    //## statechart_method
    inline bool state_8_IN() const;
    
    //## statechart_method
    void state_8_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_8_processEvent();
    
    // on:
    //## statechart_method
    inline bool on_IN() const;
    
    //## statechart_method
    void on_entDef();
    
    //## statechart_method
    void on_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus onTakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus on_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus on_handleEvent();
    
    // state_6:
    //## statechart_method
    inline bool state_6_IN() const;
    
    //## statechart_method
    void state_6_entDef();
    
    //## statechart_method
    void state_6_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_processEvent();
    
    // dyn_loop:
    //## statechart_method
    inline bool dyn_loop_IN() const;
    
    // state_5:
    //## statechart_method
    inline bool state_5_IN() const;
    
    //## statechart_method
    void state_5_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_processEvent();
    
    // consigneUp:
    //## statechart_method
    inline bool consigneUp_IN() const;
    
    //## statechart_method
    void consigneUp_entDef();
    
    //## statechart_method
    virtual void consigneUp_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus consigneUp_handleEvent();
    
    // upup:
    //## statechart_method
    inline bool upup_IN() const;
    
    // consigneDown:
    //## statechart_method
    inline bool consigneDown_IN() const;
    
    //## statechart_method
    void consigneDown_entDef();
    
    //## statechart_method
    virtual void consigneDown_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus consigneDown_handleEvent();
    
    // downdown:
    //## statechart_method
    inline bool downdown_IN() const;
    
    // action:
    //## statechart_method
    inline bool action_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus action_handleEvent();
    
    // off:
    //## statechart_method
    inline bool off_IN() const;
    
    // idle_highAccel:
    //## statechart_method
    inline bool idle_highAccel_IN() const;
    
    // state_15:
    //## statechart_method
    inline bool state_15_IN() const;
    
    //## statechart_method
    void state_15_entDef();
    
    //## statechart_method
    void state_15_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_15_processEvent();
    
    // intacc_loop:
    //## statechart_method
    inline bool intacc_loop_IN() const;

protected :

//#[ ignore
    enum SysControle_Enum {
        OMNonState = 0,
        reg_state = 1,
        state_9 = 2,
        speed_loop = 3,
        state_8 = 4,
        on = 5,
        state_6 = 6,
        dyn_loop = 7,
        state_5 = 8,
        consigneUp = 9,
        upup = 10,
        consigneDown = 11,
        downdown = 12,
        action = 13,
        off = 14,
        idle_highAccel = 15,
        state_15 = 16,
        intacc_loop = 17
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_9_subState;
    
    int state_9_active;
    
    int state_8_subState;
    
    int state_8_active;
    
    int state_6_subState;
    
    int state_6_active;
    
    IOxfTimeout* state_6_timeout;
    
    int state_5_subState;
    
    int state_5_active;
    
    int consigneUp_subState;
    
    IOxfTimeout* state_5_timeout;
    
    int consigneDown_subState;
    
    int state_15_subState;
    
    int state_15_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSysControle : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SysControle, OMAnimatedSysControle)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void reg_state_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void speed_loop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dyn_loop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void consigneUp_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void upup_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void consigneDown_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void downdown_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void action_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_highAccel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void intacc_loop_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool SysControle::rootState_IN() const {
    return true;
}

inline bool SysControle::reg_state_IN() const {
    return rootState_subState == reg_state;
}

inline bool SysControle::state_9_IN() const {
    return reg_state_IN();
}

inline bool SysControle::speed_loop_IN() const {
    return state_9_subState == speed_loop;
}

inline bool SysControle::state_8_IN() const {
    return reg_state_IN();
}

inline bool SysControle::on_IN() const {
    return state_8_subState == on;
}

inline bool SysControle::state_6_IN() const {
    return on_IN();
}

inline bool SysControle::dyn_loop_IN() const {
    return state_6_subState == dyn_loop;
}

inline bool SysControle::state_5_IN() const {
    return on_IN();
}

inline bool SysControle::consigneUp_IN() const {
    return state_5_subState == consigneUp;
}

inline bool SysControle::upup_IN() const {
    return consigneUp_subState == upup;
}

inline bool SysControle::consigneDown_IN() const {
    return state_5_subState == consigneDown;
}

inline bool SysControle::downdown_IN() const {
    return consigneDown_subState == downdown;
}

inline bool SysControle::action_IN() const {
    return state_5_subState == action;
}

inline bool SysControle::off_IN() const {
    return state_8_subState == off;
}

inline bool SysControle::idle_highAccel_IN() const {
    return state_8_subState == idle_highAccel;
}

inline bool SysControle::state_15_IN() const {
    return reg_state_IN();
}

inline bool SysControle::intacc_loop_IN() const {
    return state_15_subState == intacc_loop;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.h
*********************************************************************/
