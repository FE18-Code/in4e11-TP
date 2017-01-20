/*********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: SysControle
//!	Generated Date	: Thu, 19, Jan 2017  
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
class SysControle : public OMThread {
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
    SysControle();
    
    //## auto_generated
    toMoteur_C* getToMoteur() const;
    
    //## auto_generated
    toMoteur_C* get_toMoteur() const;
    
    //## auto_generated
    fromVolant_C* getFromVolant() const;
    
    //## auto_generated
    fromVolant_C* get_fromVolant() const;

protected :

//#[ ignore
    toMoteur_C toMoteur;
    
    fromVolant_C fromVolant;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSysControle : virtual public AOMInstance {
    DECLARE_META(SysControle, OMAnimatedSysControle)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\SysControle.h
*********************************************************************/
