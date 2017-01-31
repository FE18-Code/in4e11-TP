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
    bool getFetchSpeed();
    
    //## auto_generated
    void setFetchSpeed(bool p_fetchSpeed);
    
    //## auto_generated
    int getSpeed();
    
    //## auto_generated
    void setSpeed(int p_speed);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    int consigne;		//## attribute consigne
    
    bool fetchSpeed;		//## attribute fetchSpeed
    
    bool reg_on;		//## attribute reg_on
    
    int speed;		//## attribute speed
    
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
    IOxfReactive::TakeEventStatus on_handleEvent();
    
    // off:
    //## statechart_method
    inline bool off_IN() const;

protected :

//#[ ignore
    enum SysControle_Enum {
        OMNonState = 0,
        on = 1,
        off = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
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

inline bool SysControle::off_IN() const {
    return rootState_subState == off;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.h
*********************************************************************/
