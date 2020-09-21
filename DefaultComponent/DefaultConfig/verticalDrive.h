/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: verticalDrive
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\verticalDrive.h
*********************************************************************/

#ifndef verticalDrive_H
#define verticalDrive_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsGramophone
class Gramophone;

//## package Default

//## class verticalDrive
class verticalDrive : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    verticalDrive(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~verticalDrive();
    
    ////    Operations    ////
    
    //## operation armRisen()
    void armRisen();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Gramophone* getItsGramophone() const;
    
    //## auto_generated
    void setItsGramophone(Gramophone* p_Gramophone);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Gramophone* itsGramophone;		//## link itsGramophone
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGramophone(Gramophone* p_Gramophone);
    
    //## auto_generated
    void _setItsGramophone(Gramophone* p_Gramophone);
    
    //## auto_generated
    void _clearItsGramophone();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\verticalDrive.h
*********************************************************************/
