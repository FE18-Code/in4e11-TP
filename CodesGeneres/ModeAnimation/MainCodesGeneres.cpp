/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: ModeAnimation
//!	Generated Date	: Thu, 19, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\MainCodesGeneres.cpp
*********************************************************************/

//## auto_generated
#include "MainCodesGeneres.h"
//## auto_generated
#include "MainDeApplication.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            MainDeApplication * p_MainDeApplication;
            p_MainDeApplication = new MainDeApplication;
            p_MainDeApplication->startBehavior();
            //#[ configuration CodesGeneres::ModeAnimation 
            //#]
            OXF::start();
            delete p_MainDeApplication;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\MainCodesGeneres.cpp
*********************************************************************/
