/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: VehiculeMoteur
//!	Generated Date	: Fri, 3, Feb 2017  
	File Path	: CodesGeneres\ModeAnimation\VehiculeMoteur.h
*********************************************************************/

#ifndef VehiculeMoteur_H
#define VehiculeMoteur_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
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
#include <oxf\OMDefaultReactivePort.h>
//## dependency math
#include <math.h>
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
//#[ ignore
#define OMAnim__MonPkg_VehiculeMoteur_setAlpha_intRef_ARGS_DECLARATION int p_alpha;
//#]

//## package _MonPkg

//## class VehiculeMoteur
class VehiculeMoteur : public OMThread, public OMReactive {
public :

//#[ ignore
    //## package _MonPkg
    class toCtrl_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        toCtrl_C();
        
        //## auto_generated
        virtual ~toCtrl_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectVehiculeMoteur(VehiculeMoteur* part);
        
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
        void connectVehiculeMoteur(VehiculeMoteur* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedVehiculeMoteur;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation ~VehiculeMoteur()
    ~VehiculeMoteur();
    
    ////    Operations    ////
    
    //## operation accelerer(int)
    void accelerer(int intensite);
    
    //## operation arreter()
    void arreter();
    
    //## operation demarrer()
    void demarrer();
    
    //## operation dyn_moteur()
    void dyn_moteur();
    
    //## operation freiner(int)
    void freiner(int intensite);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getMAX_BRAKE();
    
    //## auto_generated
    void setMAX_BRAKE(int p_MAX_BRAKE);
    
    //## auto_generated
    int getMAX_SPEED();
    
    //## auto_generated
    void setMAX_SPEED(int p_MAX_SPEED);
    
    //## auto_generated
    double getMAX_THROTTLE();
    
    //## auto_generated
    void setMAX_THROTTLE(double p_MAX_THROTTLE);
    
    //## auto_generated
    double getAirResistance();
    
    //## auto_generated
    void setAirResistance(double p_airResistance);
    
    //## auto_generated
    int getBrakePedal();
    
    //## auto_generated
    void setBrakePedal(int p_brakePedal);
    
    //## auto_generated
    int getDistance();
    
    //## auto_generated
    void setDistance(int p_distance);
    
    //## auto_generated
    double getFdist();
    
    //## auto_generated
    void setFdist(double p_fdist);
    
    //## auto_generated
    double getFspeed();
    
    //## auto_generated
    void setFspeed(double p_fspeed);
    
    //## auto_generated
    bool getIgnition();
    
    //## operation setIgnition(bool)
    void setIgnition(bool p_ignition);
    
    //## auto_generated
    int getPeriod();
    
    //## auto_generated
    void setPeriod(int p_period);
    
    //## auto_generated
    int getSpeed();
    
    //## operation setSpeed(int)
    void setSpeed(int p_speed);
    
    //## operation setThrottle(double)
    void setThrottle(double p_throttle);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
    int MAX_BRAKE;		//## attribute MAX_BRAKE
    
    int MAX_SPEED;		//## attribute MAX_SPEED
    
    double MAX_THROTTLE;		//## attribute MAX_THROTTLE
    
    double airResistance;		//## attribute airResistance
    
    int brakePedal;		//## attribute brakePedal
    
    int distance;		//## attribute distance
    
    double fdist;		//## attribute fdist
    
    double fspeed;		//## attribute fspeed
    
    bool ignition;		//## attribute ignition
    
    int period;		//## attribute period
    
    int speed;		//## attribute speed
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    double getThrottle();

protected :

    double throttle;		//## attribute throttle

public :

    //## auto_generated
    double getAlpha();
    
    //## operation setAlpha(int)
    void setAlpha(int& p_alpha);
    
    //## auto_generated
    double getIntensite_acceleration();
    
    //## auto_generated
    void setIntensite_acceleration(double p_intensite_acceleration);

protected :

    double intensite_acceleration;		//## attribute intensite_acceleration

public :

    //## auto_generated
    VehiculeMoteur(IOxfActive* theActiveContext = 0);
    
    //## operation init()
    void init();
    
    //## operation regThrottle(double)
    void regThrottle(double param1);
    
    //## auto_generated
    toCtrl_C* getToCtrl() const;
    
    //## auto_generated
    toCtrl_C* get_toCtrl() const;
    
    //## auto_generated
    fromVolant_C* getFromVolant() const;
    
    //## auto_generated
    fromVolant_C* get_fromVolant() const;
    
    //## auto_generated
    void setAlpha(double p_alpha);
    
    //## auto_generated
    bool getRegCtrl();
    
    //## auto_generated
    void setRegCtrl(bool p_regCtrl);

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    double alpha;		//## attribute alpha
    
    bool regCtrl;		//## attribute regCtrl
    
//#[ ignore
    toCtrl_C toCtrl;
    
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
    
    // moteur_demarre:
    //## statechart_method
    inline bool moteur_demarre_IN() const;
    
    //## statechart_method
    void moteur_demarre_entDef();
    
    //## statechart_method
    void moteur_demarre_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus moteur_demarre_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus moteur_demarre_handleEvent();
    
    // state_4:
    //## statechart_method
    inline bool state_4_IN() const;
    
    //## statechart_method
    void state_4_entDef();
    
    //## statechart_method
    void state_4_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_processEvent();
    
    // dyn_loop:
    //## statechart_method
    inline bool dyn_loop_IN() const;
    
    // state_3:
    //## statechart_method
    inline bool state_3_IN() const;
    
    //## statechart_method
    void state_3_entDef();
    
    //## statechart_method
    void state_3_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent();
    
    // moteur_action:
    //## statechart_method
    inline bool moteur_action_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus moteur_action_handleEvent();
    
    // moteur_arrete:
    //## statechart_method
    inline bool moteur_arrete_IN() const;

protected :

//#[ ignore
    enum VehiculeMoteur_Enum {
        OMNonState = 0,
        moteur_demarre = 1,
        state_4 = 2,
        dyn_loop = 3,
        state_3 = 4,
        moteur_action = 5,
        moteur_arrete = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_4_subState;
    
    int state_4_active;
    
    IOxfTimeout* state_4_timeout;
    
    int state_3_subState;
    
    int state_3_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(_MonPkg_VehiculeMoteur_setAlpha_intRef)

//#[ ignore
class OMAnimatedVehiculeMoteur : virtual public AOMInstance {
    DECLARE_REACTIVE_META(VehiculeMoteur, OMAnimatedVehiculeMoteur)
    
    DECLARE_META_OP(_MonPkg_VehiculeMoteur_setAlpha_intRef)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void moteur_demarre_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dyn_loop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void moteur_action_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void moteur_arrete_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool VehiculeMoteur::rootState_IN() const {
    return true;
}

inline bool VehiculeMoteur::moteur_demarre_IN() const {
    return rootState_subState == moteur_demarre;
}

inline bool VehiculeMoteur::state_4_IN() const {
    return moteur_demarre_IN();
}

inline bool VehiculeMoteur::dyn_loop_IN() const {
    return state_4_subState == dyn_loop;
}

inline bool VehiculeMoteur::state_3_IN() const {
    return moteur_demarre_IN();
}

inline bool VehiculeMoteur::moteur_action_IN() const {
    return state_3_subState == moteur_action;
}

inline bool VehiculeMoteur::moteur_arrete_IN() const {
    return rootState_subState == moteur_arrete;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\VehiculeMoteur.h
*********************************************************************/
