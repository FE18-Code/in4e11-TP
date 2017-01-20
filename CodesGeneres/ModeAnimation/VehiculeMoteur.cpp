/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: VehiculeMoteur
//!	Generated Date	: Thu, 19, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\VehiculeMoteur.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "VehiculeMoteur.h"
//#[ ignore
#define _MonPkg_VehiculeMoteur_VehiculeMoteur_SERIALIZE OM_NO_OP

#define _MonPkg_VehiculeMoteur_accelerer_SERIALIZE OM_NO_OP

#define _MonPkg_VehiculeMoteur_arreter_SERIALIZE OM_NO_OP

#define _MonPkg_VehiculeMoteur_demarrer_SERIALIZE OM_NO_OP

#define _MonPkg_VehiculeMoteur_dyn_moteur_SERIALIZE OM_NO_OP

#define _MonPkg_VehiculeMoteur_freiner_SERIALIZE OM_NO_OP

#define _MonPkg_VehiculeMoteur_setAlpha_SERIALIZE aomsmethod->addAttribute("p_alpha", x2String(p_alpha));

#define OMAnim__MonPkg_VehiculeMoteur_setAlpha_intRef_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alpha)

#define OMAnim__MonPkg_VehiculeMoteur_setAlpha_intRef_SERIALIZE_RET_VAL

#define _MonPkg_VehiculeMoteur_setIgnition_SERIALIZE aomsmethod->addAttribute("p_ignition", x2String(p_ignition));

#define _MonPkg_VehiculeMoteur_setSpeed_SERIALIZE aomsmethod->addAttribute("p_speed", x2String(p_speed));

#define _MonPkg_VehiculeMoteur_setThrottle_SERIALIZE aomsmethod->addAttribute("p_throttle", x2String(p_throttle));
//#]

//## package _MonPkg

//## class VehiculeMoteur
//#[ ignore
VehiculeMoteur::toCtrl_C::toCtrl_C() : _p_(0) {
}

VehiculeMoteur::toCtrl_C::~toCtrl_C() {
}

void VehiculeMoteur::toCtrl_C::connectVehiculeMoteur(VehiculeMoteur* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

VehiculeMoteur::fromVolant_C::fromVolant_C() : _p_(0) {
}

VehiculeMoteur::fromVolant_C::~fromVolant_C() {
}

void VehiculeMoteur::fromVolant_C::connectVehiculeMoteur(VehiculeMoteur* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

VehiculeMoteur::~VehiculeMoteur() {
    NOTIFY_DESTRUCTOR(~VehiculeMoteur, true);
    cancelTimeouts();
}

void VehiculeMoteur::accelerer() {
    NOTIFY_OPERATION(accelerer, accelerer(), 0, _MonPkg_VehiculeMoteur_accelerer_SERIALIZE);
    //#[ operation accelerer()
    if(brakePedal>0)
    	brakePedal=0;
    else{
    	if(throttle<(MAX_THROTTLE-1))
    		throttle+=intensite_acceleration;	
    	else 
    		 throttle=MAX_THROTTLE;
    }
    
    //#]
}

void VehiculeMoteur::arreter() {
    NOTIFY_OPERATION(arreter, arreter(), 0, _MonPkg_VehiculeMoteur_arreter_SERIALIZE);
    //#[ operation arreter()
    //stop engine
    speed=0;
    ignition=false;
    throttle=0.0;
    //#]
}

void VehiculeMoteur::demarrer() {
    NOTIFY_OPERATION(demarrer, demarrer(), 0, _MonPkg_VehiculeMoteur_demarrer_SERIALIZE);
    //#[ operation demarrer()
    fdist=0.0;
    fspeed=0.0;
    ignition=true;
    throttle=0.0;
    airResistance=MAX_SPEED/MAX_THROTTLE;
    brakePedal=0;
    //#]
}

void VehiculeMoteur::dyn_moteur() {
    NOTIFY_OPERATION(dyn_moteur, dyn_moteur(), 0, _MonPkg_VehiculeMoteur_dyn_moteur_SERIALIZE);
    //#[ operation dyn_moteur()
    fspeed=fspeed-1.5*sin(alpha*3.14/180)+((throttle-fspeed/airResistance-2*brakePedal))/5;
    
    if(fspeed>MAX_SPEED) fspeed=MAX_SPEED;
    if(fspeed<0) fspeed=0;
    
    fdist=fdist+(fspeed/36.0)/5.0;
    
    speed=(int)fspeed;
    
    distance=(int)fdist;
    
    if(throttle>0.0) throttle-=(0.5/5.0);
    
    printf("dynmoteur : speed=%d\n", speed);
    
    
    //#]
}

void VehiculeMoteur::freiner() {
    NOTIFY_OPERATION(freiner, freiner(), 0, _MonPkg_VehiculeMoteur_freiner_SERIALIZE);
    //#[ operation freiner()
    if(throttle>1.0) 
    	throttle -= 2.0;
            
     else {
     	if ( brakePedal < MAX_BRAKE ) brakePedal +=1;
    
     }
    //#]
}

int VehiculeMoteur::getMAX_BRAKE() {
    return MAX_BRAKE;
}

void VehiculeMoteur::setMAX_BRAKE(int p_MAX_BRAKE) {
    MAX_BRAKE = p_MAX_BRAKE;
}

int VehiculeMoteur::getMAX_SPEED() {
    return MAX_SPEED;
}

void VehiculeMoteur::setMAX_SPEED(int p_MAX_SPEED) {
    MAX_SPEED = p_MAX_SPEED;
}

double VehiculeMoteur::getMAX_THROTTLE() {
    return MAX_THROTTLE;
}

void VehiculeMoteur::setMAX_THROTTLE(double p_MAX_THROTTLE) {
    MAX_THROTTLE = p_MAX_THROTTLE;
}

double VehiculeMoteur::getAirResistance() {
    return airResistance;
}

void VehiculeMoteur::setAirResistance(double p_airResistance) {
    airResistance = p_airResistance;
}

int VehiculeMoteur::getBrakePedal() {
    return brakePedal;
}

void VehiculeMoteur::setBrakePedal(int p_brakePedal) {
    brakePedal = p_brakePedal;
}

int VehiculeMoteur::getDistance() {
    return distance;
}

void VehiculeMoteur::setDistance(int p_distance) {
    distance = p_distance;
}

double VehiculeMoteur::getFdist() {
    return fdist;
}

void VehiculeMoteur::setFdist(double p_fdist) {
    fdist = p_fdist;
}

double VehiculeMoteur::getFspeed() {
    return fspeed;
}

void VehiculeMoteur::setFspeed(double p_fspeed) {
    fspeed = p_fspeed;
}

bool VehiculeMoteur::getIgnition() {
    return ignition;
}

void VehiculeMoteur::setIgnition(bool p_ignition) {
    NOTIFY_OPERATION(setIgnition, setIgnition(bool), 1, _MonPkg_VehiculeMoteur_setIgnition_SERIALIZE);
    //#[ operation setIgnition(bool)
    ignition = p_ignition;
    NOTIFY_SET_OPERATION;
    //#]
    NOTIFY_SET_OPERATION;
}

int VehiculeMoteur::getPeriod() {
    return period;
}

void VehiculeMoteur::setPeriod(int p_period) {
    period = p_period;
}

int VehiculeMoteur::getSpeed() {
    return speed;
}

void VehiculeMoteur::setSpeed(int p_speed) {
    NOTIFY_OPERATION(setSpeed, setSpeed(int), 1, _MonPkg_VehiculeMoteur_setSpeed_SERIALIZE);
    //#[ operation setSpeed(int)
    speed = p_speed;
    NOTIFY_SET_OPERATION;
    //#]
    NOTIFY_SET_OPERATION;
}

void VehiculeMoteur::setThrottle(double p_throttle) {
    NOTIFY_OPERATION(setThrottle, setThrottle(double), 1, _MonPkg_VehiculeMoteur_setThrottle_SERIALIZE);
    //#[ operation setThrottle(double)
    throttle = p_throttle;
    NOTIFY_SET_OPERATION;
    //#]
    NOTIFY_SET_OPERATION;
}

bool VehiculeMoteur::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void VehiculeMoteur::initRelations() {
    if (get_toCtrl() != NULL) {
        get_toCtrl()->connectVehiculeMoteur(this);
    }
    if (get_fromVolant() != NULL) {
        get_fromVolant()->connectVehiculeMoteur(this);
    }
}

double VehiculeMoteur::getThrottle() {
    return throttle;
}

double VehiculeMoteur::getAlpha() {
    return alpha;
}

void VehiculeMoteur::setAlpha(int& p_alpha) {
    NOTIFY_OPERATION(setAlpha, setAlpha(int), 1, _MonPkg_VehiculeMoteur_setAlpha_SERIALIZE);
    //#[ operation setAlpha(int)
    alpha = p_alpha;
    NOTIFY_SET_OPERATION;
    //#]
}

double VehiculeMoteur::getIntensite_acceleration() {
    return intensite_acceleration;
}

void VehiculeMoteur::setIntensite_acceleration(double p_intensite_acceleration) {
    intensite_acceleration = p_intensite_acceleration;
}

VehiculeMoteur::VehiculeMoteur(IOxfActive* theActiveContext) : MAX_BRAKE(10), MAX_SPEED(120), MAX_THROTTLE(10.0), alpha(0), distance(0), ignition(false), intensite_acceleration(1.0), period(200), speed(0), throttle(0.0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(VehiculeMoteur, VehiculeMoteur(), 0, _MonPkg_VehiculeMoteur_VehiculeMoteur_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

VehiculeMoteur::toCtrl_C* VehiculeMoteur::getToCtrl() const {
    return (VehiculeMoteur::toCtrl_C*) &toCtrl;
}

VehiculeMoteur::toCtrl_C* VehiculeMoteur::get_toCtrl() const {
    return (VehiculeMoteur::toCtrl_C*) &toCtrl;
}

VehiculeMoteur::fromVolant_C* VehiculeMoteur::getFromVolant() const {
    return (VehiculeMoteur::fromVolant_C*) &fromVolant;
}

VehiculeMoteur::fromVolant_C* VehiculeMoteur::get_fromVolant() const {
    return (VehiculeMoteur::fromVolant_C*) &fromVolant;
}

void VehiculeMoteur::setAlpha(double p_alpha) {
    alpha = p_alpha;
}

void VehiculeMoteur::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void VehiculeMoteur::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool VehiculeMoteur::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void VehiculeMoteur::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.moteur_arrete");
        rootState_subState = moteur_arrete;
        rootState_active = moteur_arrete;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus VehiculeMoteur::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State moteur_arrete
        case moteur_arrete:
        {
            if(IS_EVENT_TYPE_OF(evContact__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.moteur_arrete");
                    //#[ transition 1 
                    demarrer();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.moteur_demarre");
                    rootState_subState = moteur_demarre;
                    rootState_active = moteur_demarre;
                    rootState_timeout = scheduleTimeout(200, "ROOT.moteur_demarre");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State moteur_demarre
        case moteur_demarre:
        {
            res = moteur_demarre_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus VehiculeMoteur::moteur_demarre_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.moteur_demarre");
                    //#[ transition 4 
                    dyn_moteur();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.moteur_demarre");
                    rootState_subState = moteur_demarre;
                    rootState_active = moteur_demarre;
                    rootState_timeout = scheduleTimeout(200, "ROOT.moteur_demarre");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evContact__MonPkg_id))
        {
            //## transition 3 
            if(ignition==true)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.moteur_demarre");
                    //#[ transition 3 
                    arreter();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.moteur_arrete");
                    rootState_subState = moteur_arrete;
                    rootState_active = moteur_arrete;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evFreiner__MonPkg_id))
        {
            OMSETPARAMS(evFreiner);
            NOTIFY_TRANSITION_STARTED("5");
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.moteur_demarre");
            //#[ transition 5 
            freiner();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.moteur_demarre");
            rootState_subState = moteur_demarre;
            rootState_active = moteur_demarre;
            rootState_timeout = scheduleTimeout(200, "ROOT.moteur_demarre");
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evAccelerer__MonPkg_id))
        {
            OMSETPARAMS(evAccelerer);
            NOTIFY_TRANSITION_STARTED("2");
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.moteur_demarre");
            //#[ transition 2 
            intensite_acceleration=params->val;
            accelerer();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.moteur_demarre");
            rootState_subState = moteur_demarre;
            rootState_active = moteur_demarre;
            rootState_timeout = scheduleTimeout(200, "ROOT.moteur_demarre");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVehiculeMoteur::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("fspeed", x2String(myReal->fspeed));
    aomsAttributes->addAttribute("fdist", x2String(myReal->fdist));
    aomsAttributes->addAttribute("airResistance", x2String(myReal->airResistance));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
    aomsAttributes->addAttribute("period", x2String(myReal->period));
    aomsAttributes->addAttribute("brakePedal", x2String(myReal->brakePedal));
    aomsAttributes->addAttribute("ignition", x2String(myReal->ignition));
    aomsAttributes->addAttribute("MAX_SPEED", x2String(myReal->MAX_SPEED));
    aomsAttributes->addAttribute("MAX_BRAKE", x2String(myReal->MAX_BRAKE));
    aomsAttributes->addAttribute("MAX_THROTTLE", x2String(myReal->MAX_THROTTLE));
    aomsAttributes->addAttribute("distance", x2String(myReal->distance));
    aomsAttributes->addAttribute("throttle", x2String(myReal->throttle));
    aomsAttributes->addAttribute("intensite_acceleration", x2String(myReal->intensite_acceleration));
    aomsAttributes->addAttribute("alpha", x2String(myReal->alpha));
}

void OMAnimatedVehiculeMoteur::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case VehiculeMoteur::moteur_arrete:
        {
            moteur_arrete_serializeStates(aomsState);
        }
        break;
        case VehiculeMoteur::moteur_demarre:
        {
            moteur_demarre_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedVehiculeMoteur::moteur_demarre_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.moteur_demarre");
}

void OMAnimatedVehiculeMoteur::moteur_arrete_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.moteur_arrete");
}
//#]

IMPLEMENT_REACTIVE_META_P(VehiculeMoteur, _MonPkg, _MonPkg, false, OMAnimatedVehiculeMoteur)

IMPLEMENT_META_OP(OMAnimatedVehiculeMoteur, _MonPkg_VehiculeMoteur_setAlpha_intRef, "setAlpha", FALSE, "setAlpha(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg_VehiculeMoteur_setAlpha_intRef, VehiculeMoteur, setAlpha(p_alpha), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\VehiculeMoteur.cpp
*********************************************************************/
