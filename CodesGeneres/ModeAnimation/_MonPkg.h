/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Fri, 27, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.h
*********************************************************************/

#ifndef _MonPkg_H
#define _MonPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
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
//## auto_generated
class AcquisitionUserEnv;

//## auto_generated
class SysControle;

//## auto_generated
class VehiculeMoteur;

//#[ ignore
#define evContact__MonPkg_id 13401

#define evAccelerer__MonPkg_id 13402

#define evFreiner__MonPkg_id 13403

#define evButtonDeux__MonPkg_id 13404

#define evButtonDroit__MonPkg_id 13405

#define evButtonGauche__MonPkg_id 13406

#define evButtonZero__MonPkg_id 13407

#define evTournerD__MonPkg_id 13408

#define evTournerG__MonPkg_id 13409

#define evReel__MonPkg_id 13410

#define evSimu__MonPkg_id 13411

#define evToggleReg__MonPkg_id 13412

#define evRegPlus__MonPkg_id 13413

#define evRegMoins__MonPkg_id 13414

#define evSetSpeed__MonPkg_id 13415
//#]

//## package _MonPkg



//## event evContact()
class evContact : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevContact;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evContact();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevContact : virtual public AOMEvent {
    DECLARE_META_EVENT(evContact)
};
//#]
#endif // _OMINSTRUMENT

//## event evAccelerer(int)
class evAccelerer : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAccelerer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAccelerer();
    
    //## auto_generated
    evAccelerer(int p_val);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int val;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAccelerer : virtual public AOMEvent {
    DECLARE_META_EVENT(evAccelerer)
};
//#]
#endif // _OMINSTRUMENT

//## event evFreiner(int)
class evFreiner : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFreiner;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFreiner();
    
    //## auto_generated
    evFreiner(int p_val);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int val;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFreiner : virtual public AOMEvent {
    DECLARE_META_EVENT(evFreiner)
};
//#]
#endif // _OMINSTRUMENT

//## event evButtonDeux()
class evButtonDeux : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevButtonDeux;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evButtonDeux();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevButtonDeux : virtual public AOMEvent {
    DECLARE_META_EVENT(evButtonDeux)
};
//#]
#endif // _OMINSTRUMENT

//## event evButtonDroit()
class evButtonDroit : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevButtonDroit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evButtonDroit();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevButtonDroit : virtual public AOMEvent {
    DECLARE_META_EVENT(evButtonDroit)
};
//#]
#endif // _OMINSTRUMENT

//## event evButtonGauche()
class evButtonGauche : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevButtonGauche;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evButtonGauche();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevButtonGauche : virtual public AOMEvent {
    DECLARE_META_EVENT(evButtonGauche)
};
//#]
#endif // _OMINSTRUMENT

//## event evButtonZero()
class evButtonZero : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevButtonZero;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evButtonZero();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevButtonZero : virtual public AOMEvent {
    DECLARE_META_EVENT(evButtonZero)
};
//#]
#endif // _OMINSTRUMENT

//## event evTournerD()
class evTournerD : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTournerD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTournerD();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTournerD : virtual public AOMEvent {
    DECLARE_META_EVENT(evTournerD)
};
//#]
#endif // _OMINSTRUMENT

//## event evTournerG()
class evTournerG : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTournerG;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTournerG();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTournerG : virtual public AOMEvent {
    DECLARE_META_EVENT(evTournerG)
};
//#]
#endif // _OMINSTRUMENT

//## event evReel()
class evReel : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReel();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReel : virtual public AOMEvent {
    DECLARE_META_EVENT(evReel)
};
//#]
#endif // _OMINSTRUMENT

//## event evSimu()
class evSimu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSimu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSimu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSimu : virtual public AOMEvent {
    DECLARE_META_EVENT(evSimu)
};
//#]
#endif // _OMINSTRUMENT

//## event evToggleReg()
class evToggleReg : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevToggleReg;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evToggleReg();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevToggleReg : virtual public AOMEvent {
    DECLARE_META_EVENT(evToggleReg)
};
//#]
#endif // _OMINSTRUMENT

//## event evRegPlus()
class evRegPlus : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRegPlus;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRegPlus();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRegPlus : virtual public AOMEvent {
    DECLARE_META_EVENT(evRegPlus)
};
//#]
#endif // _OMINSTRUMENT

//## event evRegMoins()
class evRegMoins : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRegMoins;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRegMoins();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRegMoins : virtual public AOMEvent {
    DECLARE_META_EVENT(evRegMoins)
};
//#]
#endif // _OMINSTRUMENT

//## event evSetSpeed(int)
class evSetSpeed : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetSpeed;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetSpeed();
    
    //## auto_generated
    evSetSpeed(int p_speed);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int speed;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetSpeed : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetSpeed)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.h
*********************************************************************/
