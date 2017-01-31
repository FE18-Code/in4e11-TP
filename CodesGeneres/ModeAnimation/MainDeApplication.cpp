/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: MainDeApplication
//!	Generated Date	: Tue, 31, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\MainDeApplication.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MainDeApplication.h"
//#[ ignore
#define IHM_Objets_MainDeApplication_MainDeApplication_SERIALIZE OM_NO_OP
//#]

//## package IHM_Objets

//## class MainDeApplication
MainDeApplication::~MainDeApplication() {
    NOTIFY_DESTRUCTOR(~MainDeApplication, true);
}

SysControle* MainDeApplication::getObjetSysControle() const {
    return (SysControle*) &objetSysControle;
}

bool MainDeApplication::startBehavior() {
    bool done = true;
    done &= objAcqUserEnv.startBehavior();
    done &= objVehiculeMoteur.startBehavior();
    done &= objetSysControle.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void MainDeApplication::initRelations() {
    {
        
        objVehiculeMoteur.get_toCtrl()->setItsDefaultRequiredInterface(objetSysControle.get_toMoteur()->getItsDefaultProvidedInterface());
        
    }{
        
        objetSysControle.get_toMoteur()->setItsDefaultRequiredInterface(objVehiculeMoteur.get_toCtrl()->getItsDefaultProvidedInterface());
        
    }
    {
        
        objAcqUserEnv.get_out()->addItsDefaultRequiredInterface(objVehiculeMoteur.get_fromVolant()->getItsDefaultProvidedInterface());
        
    }{
        
        objVehiculeMoteur.get_fromVolant()->setItsDefaultRequiredInterface(objAcqUserEnv.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        objAcqUserEnv.get_out()->addItsDefaultRequiredInterface(objetSysControle.get_fromVolant()->getItsDefaultProvidedInterface());
        
    }{
        
        objetSysControle.get_fromVolant()->setItsDefaultRequiredInterface(objAcqUserEnv.get_out()->getItsDefaultProvidedInterface());
        
    }
}

void MainDeApplication::destroy() {
    objAcqUserEnv.destroy();
    objVehiculeMoteur.destroy();
    objetSysControle.destroy();
    OMReactive::destroy();
}

MainDeApplication::MainDeApplication(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MainDeApplication, MainDeApplication(), 0, IHM_Objets_MainDeApplication_MainDeApplication_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            objVehiculeMoteur.setShouldDelete(false);
        }
        {
            objetSysControle.setShouldDelete(false);
        }
        {
            objAcqUserEnv.setShouldDelete(false);
        }
    }
    initRelations();
}

AcquisitionUserEnv* MainDeApplication::getObjAcqUserEnv() const {
    return (AcquisitionUserEnv*) &objAcqUserEnv;
}

VehiculeMoteur* MainDeApplication::getObjVehiculeMoteur() const {
    return (VehiculeMoteur*) &objVehiculeMoteur;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMainDeApplication::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("objVehiculeMoteur", true, true);
    aomsRelations->ADD_ITEM(&myReal->objVehiculeMoteur);
    aomsRelations->addRelation("objetSysControle", true, true);
    aomsRelations->ADD_ITEM(&myReal->objetSysControle);
    aomsRelations->addRelation("objAcqUserEnv", true, true);
    aomsRelations->ADD_ITEM(&myReal->objAcqUserEnv);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(MainDeApplication, IHM_Objets, IHM_Objets, false, OMAnimatedMainDeApplication)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\MainDeApplication.cpp
*********************************************************************/
