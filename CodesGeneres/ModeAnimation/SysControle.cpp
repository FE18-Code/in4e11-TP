/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: SysControle
//!	Generated Date	: Thu, 19, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\SysControle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SysControle.h"
//#[ ignore
#define _MonPkg_SysControle_SysControle_SERIALIZE OM_NO_OP
//#]

//## package _MonPkg

//## class SysControle
//#[ ignore
SysControle::toMoteur_C::toMoteur_C() : _p_(0) {
}

SysControle::toMoteur_C::~toMoteur_C() {
}

void SysControle::toMoteur_C::connectSysControle(SysControle* part) {
}

SysControle::fromVolant_C::fromVolant_C() : _p_(0) {
}

SysControle::fromVolant_C::~fromVolant_C() {
}

void SysControle::fromVolant_C::connectSysControle(SysControle* part) {
}
//#]

SysControle::~SysControle() {
    NOTIFY_DESTRUCTOR(~SysControle, true);
}

SysControle::SysControle() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(SysControle, SysControle(), 0, _MonPkg_SysControle_SysControle_SERIALIZE);
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

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SysControle, _MonPkg, _MonPkg, false, OMAnimatedSysControle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.cpp
*********************************************************************/
