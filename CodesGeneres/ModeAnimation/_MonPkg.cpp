/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Mon, 23, Jan 2017  
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

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/
