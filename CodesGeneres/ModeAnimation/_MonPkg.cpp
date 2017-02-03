/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Fri, 3, Feb 2017  
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "_MonPkg.h"
//## auto_generated
#include "SysControle.h"
//## auto_generated
#include "AcquisitionUserEnv.h"
//## auto_generated
#include "VehiculeMoteur.h"
//#[ ignore
#define evContact_SERIALIZE OM_NO_OP

#define evContact_UNSERIALIZE OM_NO_OP

#define evContact_CONSTRUCTOR evContact()

#define evAccelerer_SERIALIZE OMADD_SER(val, x2String(myEvent->val))

#define evAccelerer_UNSERIALIZE OMADD_UNSER(int, val, OMDestructiveString2X)

#define evAccelerer_CONSTRUCTOR evAccelerer(val)

#define evFreiner_SERIALIZE OMADD_SER(val, x2String(myEvent->val))

#define evFreiner_UNSERIALIZE OMADD_UNSER(int, val, OMDestructiveString2X)

#define evFreiner_CONSTRUCTOR evFreiner(val)

#define evButtonDeux_SERIALIZE OM_NO_OP

#define evButtonDeux_UNSERIALIZE OM_NO_OP

#define evButtonDeux_CONSTRUCTOR evButtonDeux()

#define evButtonDroit_SERIALIZE OM_NO_OP

#define evButtonDroit_UNSERIALIZE OM_NO_OP

#define evButtonDroit_CONSTRUCTOR evButtonDroit()

#define evButtonGauche_SERIALIZE OM_NO_OP

#define evButtonGauche_UNSERIALIZE OM_NO_OP

#define evButtonGauche_CONSTRUCTOR evButtonGauche()

#define evButtonZero_SERIALIZE OM_NO_OP

#define evButtonZero_UNSERIALIZE OM_NO_OP

#define evButtonZero_CONSTRUCTOR evButtonZero()

#define evTournerD_SERIALIZE OM_NO_OP

#define evTournerD_UNSERIALIZE OM_NO_OP

#define evTournerD_CONSTRUCTOR evTournerD()

#define evTournerG_SERIALIZE OM_NO_OP

#define evTournerG_UNSERIALIZE OM_NO_OP

#define evTournerG_CONSTRUCTOR evTournerG()

#define evReel_SERIALIZE OM_NO_OP

#define evReel_UNSERIALIZE OM_NO_OP

#define evReel_CONSTRUCTOR evReel()

#define evSimu_SERIALIZE OM_NO_OP

#define evSimu_UNSERIALIZE OM_NO_OP

#define evSimu_CONSTRUCTOR evSimu()

#define evToggleReg_SERIALIZE OM_NO_OP

#define evToggleReg_UNSERIALIZE OM_NO_OP

#define evToggleReg_CONSTRUCTOR evToggleReg()

#define evRegPlus_SERIALIZE OM_NO_OP

#define evRegPlus_UNSERIALIZE OM_NO_OP

#define evRegPlus_CONSTRUCTOR evRegPlus()

#define evRegMoins_SERIALIZE OM_NO_OP

#define evRegMoins_UNSERIALIZE OM_NO_OP

#define evRegMoins_CONSTRUCTOR evRegMoins()

#define evSetSpeed_SERIALIZE OMADD_SER(speed, x2String(myEvent->speed))

#define evSetSpeed_UNSERIALIZE OMADD_UNSER(int, speed, OMDestructiveString2X)

#define evSetSpeed_CONSTRUCTOR evSetSpeed(speed)

#define evRegThrottle_SERIALIZE OMADD_SER(val, x2String(myEvent->val))

#define evRegThrottle_UNSERIALIZE OMADD_UNSER(double, val, OMDestructiveString2X)

#define evRegThrottle_CONSTRUCTOR evRegThrottle(val)

#define evAlpha_SERIALIZE OMADD_SER(val, x2String(myEvent->val))

#define evAlpha_UNSERIALIZE OMADD_UNSER(double, val, OMDestructiveString2X)

#define evAlpha_CONSTRUCTOR evAlpha(val)
//#]

//## package _MonPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(_MonPkg, _MonPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evContact()
evContact::evContact() {
    NOTIFY_EVENT_CONSTRUCTOR(evContact)
    setId(evContact__MonPkg_id);
}

bool evContact::isTypeOf(const short id) const {
    return (evContact__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evContact, _MonPkg, _MonPkg, evContact())

//## event evAccelerer(int)
evAccelerer::evAccelerer() {
    NOTIFY_EVENT_CONSTRUCTOR(evAccelerer)
    setId(evAccelerer__MonPkg_id);
}

evAccelerer::evAccelerer(int p_val) : val(p_val) {
    NOTIFY_EVENT_CONSTRUCTOR(evAccelerer)
    setId(evAccelerer__MonPkg_id);
}

bool evAccelerer::isTypeOf(const short id) const {
    return (evAccelerer__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evAccelerer, _MonPkg, _MonPkg, evAccelerer(int))

//## event evFreiner(int)
evFreiner::evFreiner() {
    NOTIFY_EVENT_CONSTRUCTOR(evFreiner)
    setId(evFreiner__MonPkg_id);
}

evFreiner::evFreiner(int p_val) : val(p_val) {
    NOTIFY_EVENT_CONSTRUCTOR(evFreiner)
    setId(evFreiner__MonPkg_id);
}

bool evFreiner::isTypeOf(const short id) const {
    return (evFreiner__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evFreiner, _MonPkg, _MonPkg, evFreiner(int))

//## event evButtonDeux()
evButtonDeux::evButtonDeux() {
    NOTIFY_EVENT_CONSTRUCTOR(evButtonDeux)
    setId(evButtonDeux__MonPkg_id);
}

bool evButtonDeux::isTypeOf(const short id) const {
    return (evButtonDeux__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evButtonDeux, _MonPkg, _MonPkg, evButtonDeux())

//## event evButtonDroit()
evButtonDroit::evButtonDroit() {
    NOTIFY_EVENT_CONSTRUCTOR(evButtonDroit)
    setId(evButtonDroit__MonPkg_id);
}

bool evButtonDroit::isTypeOf(const short id) const {
    return (evButtonDroit__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evButtonDroit, _MonPkg, _MonPkg, evButtonDroit())

//## event evButtonGauche()
evButtonGauche::evButtonGauche() {
    NOTIFY_EVENT_CONSTRUCTOR(evButtonGauche)
    setId(evButtonGauche__MonPkg_id);
}

bool evButtonGauche::isTypeOf(const short id) const {
    return (evButtonGauche__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evButtonGauche, _MonPkg, _MonPkg, evButtonGauche())

//## event evButtonZero()
evButtonZero::evButtonZero() {
    NOTIFY_EVENT_CONSTRUCTOR(evButtonZero)
    setId(evButtonZero__MonPkg_id);
}

bool evButtonZero::isTypeOf(const short id) const {
    return (evButtonZero__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evButtonZero, _MonPkg, _MonPkg, evButtonZero())

//## event evTournerD()
evTournerD::evTournerD() {
    NOTIFY_EVENT_CONSTRUCTOR(evTournerD)
    setId(evTournerD__MonPkg_id);
}

bool evTournerD::isTypeOf(const short id) const {
    return (evTournerD__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evTournerD, _MonPkg, _MonPkg, evTournerD())

//## event evTournerG()
evTournerG::evTournerG() {
    NOTIFY_EVENT_CONSTRUCTOR(evTournerG)
    setId(evTournerG__MonPkg_id);
}

bool evTournerG::isTypeOf(const short id) const {
    return (evTournerG__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evTournerG, _MonPkg, _MonPkg, evTournerG())

//## event evReel()
evReel::evReel() {
    NOTIFY_EVENT_CONSTRUCTOR(evReel)
    setId(evReel__MonPkg_id);
}

bool evReel::isTypeOf(const short id) const {
    return (evReel__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evReel, _MonPkg, _MonPkg, evReel())

//## event evSimu()
evSimu::evSimu() {
    NOTIFY_EVENT_CONSTRUCTOR(evSimu)
    setId(evSimu__MonPkg_id);
}

bool evSimu::isTypeOf(const short id) const {
    return (evSimu__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSimu, _MonPkg, _MonPkg, evSimu())

//## event evToggleReg()
evToggleReg::evToggleReg() {
    NOTIFY_EVENT_CONSTRUCTOR(evToggleReg)
    setId(evToggleReg__MonPkg_id);
}

bool evToggleReg::isTypeOf(const short id) const {
    return (evToggleReg__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evToggleReg, _MonPkg, _MonPkg, evToggleReg())

//## event evRegPlus()
evRegPlus::evRegPlus() {
    NOTIFY_EVENT_CONSTRUCTOR(evRegPlus)
    setId(evRegPlus__MonPkg_id);
}

bool evRegPlus::isTypeOf(const short id) const {
    return (evRegPlus__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evRegPlus, _MonPkg, _MonPkg, evRegPlus())

//## event evRegMoins()
evRegMoins::evRegMoins() {
    NOTIFY_EVENT_CONSTRUCTOR(evRegMoins)
    setId(evRegMoins__MonPkg_id);
}

bool evRegMoins::isTypeOf(const short id) const {
    return (evRegMoins__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evRegMoins, _MonPkg, _MonPkg, evRegMoins())

//## event evSetSpeed(int)
evSetSpeed::evSetSpeed() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetSpeed)
    setId(evSetSpeed__MonPkg_id);
}

evSetSpeed::evSetSpeed(int p_speed) : speed(p_speed) {
    NOTIFY_EVENT_CONSTRUCTOR(evSetSpeed)
    setId(evSetSpeed__MonPkg_id);
}

bool evSetSpeed::isTypeOf(const short id) const {
    return (evSetSpeed__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetSpeed, _MonPkg, _MonPkg, evSetSpeed(int))

//## event evRegThrottle(double)
evRegThrottle::evRegThrottle() {
    NOTIFY_EVENT_CONSTRUCTOR(evRegThrottle)
    setId(evRegThrottle__MonPkg_id);
}

evRegThrottle::evRegThrottle(double p_val) : val(p_val) {
    NOTIFY_EVENT_CONSTRUCTOR(evRegThrottle)
    setId(evRegThrottle__MonPkg_id);
}

bool evRegThrottle::isTypeOf(const short id) const {
    return (evRegThrottle__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evRegThrottle, _MonPkg, _MonPkg, evRegThrottle(double))

//## event evAlpha(double)
evAlpha::evAlpha() {
    NOTIFY_EVENT_CONSTRUCTOR(evAlpha)
    setId(evAlpha__MonPkg_id);
}

evAlpha::evAlpha(double p_val) : val(p_val) {
    NOTIFY_EVENT_CONSTRUCTOR(evAlpha)
    setId(evAlpha__MonPkg_id);
}

bool evAlpha::isTypeOf(const short id) const {
    return (evAlpha__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evAlpha, _MonPkg, _MonPkg, evAlpha(double))

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/
