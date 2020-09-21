/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Selector
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Selector.h
*********************************************************************/

#ifndef Selector_H
#define Selector_H

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

//## class Selector
class Selector : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Selector(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Selector();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getValue() const;
    
    //## auto_generated
    void setValue(int p_Value);
    
    //## auto_generated
    int getChosenMode() const;
    
    //## auto_generated
    void setChosenMode(int p_chosenMode);
    
    //## auto_generated
    int getSecondParameter() const;
    
    //## auto_generated
    void setSecondParameter(int p_secondParameter);
    
    //## auto_generated
    Gramophone* getItsGramophone() const;
    
    //## auto_generated
    void setItsGramophone(Gramophone* p_Gramophone);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Value;		//## attribute Value
    
    int chosenMode;		//## attribute chosenMode
    
    int secondParameter;		//## attribute secondParameter
    
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
	File Path	: DefaultComponent\DefaultConfig\Selector.h
*********************************************************************/
