/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: AcquisitionUserEnv
//!	Generated Date	: Thu, 19, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\AcquisitionUserEnv.h
*********************************************************************/

#ifndef AcquisitionUserEnv_H
#define AcquisitionUserEnv_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
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
//## auto_generated
#include "_MonPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <oxf\OMDefaultMulticastReactivePort.h>
//#[ ignore
#define OMAnim__MonPkg_AcquisitionUserEnv_setAcc_int_ARGS_DECLARATION int p_acc;

#define OMAnim__MonPkg_AcquisitionUserEnv_setAlpha_int_ARGS_DECLARATION int p_alpha;
//#]

//## package _MonPkg

//## class AcquisitionUserEnv
class AcquisitionUserEnv : public OMThread, public OMReactive {
public :

//#[ ignore
    //## package _MonPkg
    class out_C : public OMDefaultMulticastReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        out_C();
        
        //## auto_generated
        virtual ~out_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAcquisitionUserEnv(AcquisitionUserEnv* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedAcquisitionUserEnv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~AcquisitionUserEnv();
    
    ////    Operations    ////
    
    //## operation GetData()
    void GetData();
    
    //## operation Run()
    void Run();
    
    ////    Additional operations    ////
    
    //## auto_generated
    out_C* getOut() const;
    
    //## auto_generated
    out_C* get_out() const;
    
    //## auto_generated
    int getButton();
    
    //## operation setButton(int)
    void setButton(int p_Button);
    
    //## auto_generated
    int getVolantAcc();
    
    //## auto_generated
    void setVolantAcc(int p_VolantAcc);
    
    //## auto_generated
    int getVolantAngle();
    
    //## auto_generated
    void setVolantAngle(int p_VolantAngle);
    
    //## auto_generated
    int getVolantFrein();
    
    //## auto_generated
    void setVolantFrein(int p_VolantFrein);
    
    //## auto_generated
    bool getBReadStat();
    
    //## auto_generated
    void setBReadStat(bool p_bReadStat);
    
    //## auto_generated
    HANDLE getG_hCom();
    
    //## auto_generated
    void setG_hCom(HANDLE p_g_hCom);
    
    //## auto_generated
    int getPeriod();
    
    //## auto_generated
    void setPeriod(int p_period);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
    int Button;		//## attribute Button
    
    int VolantAcc;		//## attribute VolantAcc
    
    int VolantAngle;		//## attribute VolantAngle
    
    int VolantFrein;		//## attribute VolantFrein
    
    bool bReadStat;		//## attribute bReadStat
    
    HANDLE g_hCom;		//## attribute g_hCom
    
    int period;		//## attribute period
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    AcquisitionUserEnv(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    int getAcc();
    
    //## auto_generated
    void setAcc(int p_acc);
    
    //## auto_generated
    int getAlpha();
    
    //## auto_generated
    void setAlpha(int p_alpha);
    
    //## auto_generated
    bool getVolant();
    
    //## auto_generated
    void setVolant(bool p_volant);

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    int acc;		//## attribute acc
    
    int alpha;		//## attribute alpha
    
    bool volant;		//## attribute volant
    
//#[ ignore
    out_C out;
//#]

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // volant_reel:
    //## statechart_method
    inline bool volant_reel_IN() const;
    
    //## statechart_method
    void volant_reel_entDef();
    
    //## statechart_method
    void volant_reel_exit();
    
    // state_35:
    //## statechart_method
    inline bool state_35_IN() const;
    
    // state_37:
    //## statechart_method
    inline bool state_37_IN() const;
    
    // simulation:
    //## statechart_method
    inline bool simulation_IN() const;

protected :

//#[ ignore
    enum AcquisitionUserEnv_Enum {
        OMNonState = 0,
        volant_reel = 1,
        state_35 = 2,
        state_37 = 3,
        simulation = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int volant_reel_subState;
    
    IOxfTimeout* volant_reel_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(_MonPkg_AcquisitionUserEnv_setAcc_int)

DECLARE_OPERATION_CLASS(_MonPkg_AcquisitionUserEnv_setAlpha_int)

//#[ ignore
class OMAnimatedAcquisitionUserEnv : virtual public AOMInstance {
    DECLARE_REACTIVE_META(AcquisitionUserEnv, OMAnimatedAcquisitionUserEnv)
    
    DECLARE_META_OP(_MonPkg_AcquisitionUserEnv_setAcc_int)
    
    DECLARE_META_OP(_MonPkg_AcquisitionUserEnv_setAlpha_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void volant_reel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_35_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_37_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void simulation_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool AcquisitionUserEnv::rootState_IN() const {
    return true;
}

inline bool AcquisitionUserEnv::volant_reel_IN() const {
    return rootState_subState == volant_reel;
}

inline bool AcquisitionUserEnv::state_35_IN() const {
    return volant_reel_subState == state_35;
}

inline bool AcquisitionUserEnv::state_37_IN() const {
    return rootState_subState == state_37;
}

inline bool AcquisitionUserEnv::simulation_IN() const {
    return rootState_subState == simulation;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\AcquisitionUserEnv.h
*********************************************************************/
