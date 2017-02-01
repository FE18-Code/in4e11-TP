/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: MainDeApplication
//!	Generated Date	: Wed, 1, Feb 2017  
	File Path	: CodesGeneres\ModeAnimation\MainDeApplication.h
*********************************************************************/

#ifndef MainDeApplication_H
#define MainDeApplication_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance objetSysControle
#include "SysControle.h"
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
#include "IHM_Objets.h"
//## classInstance objAcqUserEnv
#include "AcquisitionUserEnv.h"
//## classInstance objVehiculeMoteur
#include "VehiculeMoteur.h"
//## package IHM_Objets

//## class MainDeApplication
class MainDeApplication : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMainDeApplication;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~MainDeApplication();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    SysControle* getObjetSysControle() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    SysControle objetSysControle;		//## classInstance objetSysControle
    
    VehiculeMoteur objVehiculeMoteur;		//## classInstance objVehiculeMoteur

public :

    //## auto_generated
    virtual void destroy();
    
    //## auto_generated
    MainDeApplication(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    AcquisitionUserEnv* getObjAcqUserEnv() const;
    
    //## auto_generated
    VehiculeMoteur* getObjVehiculeMoteur() const;

protected :

    AcquisitionUserEnv objAcqUserEnv;		//## classInstance objAcqUserEnv
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMainDeApplication : virtual public AOMInstance {
    DECLARE_META(MainDeApplication, OMAnimatedMainDeApplication)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\MainDeApplication.h
*********************************************************************/
