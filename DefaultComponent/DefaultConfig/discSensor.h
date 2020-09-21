/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: discSensor
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\discSensor.h
*********************************************************************/

#ifndef discSensor_H
#define discSensor_H

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

//## class discSensor
class discSensor : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    discSensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~discSensor();
    
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
	File Path	: DefaultComponent\DefaultConfig\discSensor.h
*********************************************************************/
