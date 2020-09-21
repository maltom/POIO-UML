/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: discSensor
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\discSensor.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "discSensor.h"
//## link itsGramophone
#include "Gramophone.h"
//## package Default

//## class discSensor
discSensor::discSensor(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsGramophone = NULL;
}

discSensor::~discSensor() {
    cleanUpRelations();
}

Gramophone* discSensor::getItsGramophone() const {
    return itsGramophone;
}

void discSensor::setItsGramophone(Gramophone* p_Gramophone) {
    _setItsGramophone(p_Gramophone);
}

bool discSensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void discSensor::cleanUpRelations() {
    if(itsGramophone != NULL)
        {
            itsGramophone = NULL;
        }
}

void discSensor::__setItsGramophone(Gramophone* p_Gramophone) {
    itsGramophone = p_Gramophone;
}

void discSensor::_setItsGramophone(Gramophone* p_Gramophone) {
    __setItsGramophone(p_Gramophone);
}

void discSensor::_clearItsGramophone() {
    itsGramophone = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\discSensor.cpp
*********************************************************************/
