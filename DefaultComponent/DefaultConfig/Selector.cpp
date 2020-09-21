/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Selector
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Selector.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Selector.h"
//## link itsGramophone
#include "Gramophone.h"
//## package Default

//## class Selector
Selector::Selector(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsGramophone = NULL;
}

Selector::~Selector() {
    cleanUpRelations();
}

int Selector::getValue() const {
    return Value;
}

void Selector::setValue(int p_Value) {
    Value = p_Value;
}

int Selector::getChosenMode() const {
    return chosenMode;
}

void Selector::setChosenMode(int p_chosenMode) {
    chosenMode = p_chosenMode;
}

int Selector::getSecondParameter() const {
    return secondParameter;
}

void Selector::setSecondParameter(int p_secondParameter) {
    secondParameter = p_secondParameter;
}

Gramophone* Selector::getItsGramophone() const {
    return itsGramophone;
}

void Selector::setItsGramophone(Gramophone* p_Gramophone) {
    _setItsGramophone(p_Gramophone);
}

bool Selector::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Selector::cleanUpRelations() {
    if(itsGramophone != NULL)
        {
            itsGramophone = NULL;
        }
}

void Selector::__setItsGramophone(Gramophone* p_Gramophone) {
    itsGramophone = p_Gramophone;
}

void Selector::_setItsGramophone(Gramophone* p_Gramophone) {
    __setItsGramophone(p_Gramophone);
}

void Selector::_clearItsGramophone() {
    itsGramophone = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Selector.cpp
*********************************************************************/
