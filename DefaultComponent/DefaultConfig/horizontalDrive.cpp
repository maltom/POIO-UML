/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: horizontalDrive
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\horizontalDrive.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "horizontalDrive.h"
//## link itsGramophone
#include "Gramophone.h"
//## package Default

//## class horizontalDrive
horizontalDrive::horizontalDrive(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsGramophone = NULL;
}

horizontalDrive::~horizontalDrive() {
    cleanUpRelations();
}

void horizontalDrive::armMoved() {
    //#[ operation armMoved()
    //#]
}

Gramophone* horizontalDrive::getItsGramophone() const {
    return itsGramophone;
}

void horizontalDrive::setItsGramophone(Gramophone* p_Gramophone) {
    _setItsGramophone(p_Gramophone);
}

bool horizontalDrive::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void horizontalDrive::cleanUpRelations() {
    if(itsGramophone != NULL)
        {
            itsGramophone = NULL;
        }
}

void horizontalDrive::__setItsGramophone(Gramophone* p_Gramophone) {
    itsGramophone = p_Gramophone;
}

void horizontalDrive::_setItsGramophone(Gramophone* p_Gramophone) {
    __setItsGramophone(p_Gramophone);
}

void horizontalDrive::_clearItsGramophone() {
    itsGramophone = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\horizontalDrive.cpp
*********************************************************************/
