/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: SysControle
//!	Generated Date	: Tue, 31, Jan 2017  
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
    
    int consigne;		//## attribute consigne
    
    double error;		//## attribute error
    
    bool fetchSpeed;		//## attribute fetchSpeed
    
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
    
    // on:
    //## statechart_method
    inline bool on_IN() const;
    
    //## statechart_method
    void on_entDef();
    
    //## statechart_method
    void on_exit();
    
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
    void state_5_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_processEvent();
    
    // action:
    //## statechart_method
    inline bool action_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus action_handleEvent();
    
    // off:
    //## statechart_method
    inline bool off_IN() const;

protected :

//#[ ignore
    enum SysControle_Enum {
        OMNonState = 0,
        on = 1,
        state_6 = 2,
        dyn_loop = 3,
        state_5 = 4,
        action = 5,
        off = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_6_subState;
    
    int state_6_active;
    
    IOxfTimeout* state_6_timeout;
    
    int state_5_subState;
    
    int state_5_active;
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
    void on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dyn_loop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void action_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool SysControle::rootState_IN() const {
    return true;
}

inline bool SysControle::on_IN() const {
    return rootState_subState == on;
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

inline bool SysControle::action_IN() const {
    return state_5_subState == action;
}

inline bool SysControle::off_IN() const {
    return rootState_subState == off;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.h
*********************************************************************/
