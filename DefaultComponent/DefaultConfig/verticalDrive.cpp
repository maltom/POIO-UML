/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: verticalDrive
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\verticalDrive.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "verticalDrive.h"
//## link itsGramophone
#include "Gramophone.h"
//## package Default

//## class verticalDrive
verticalDrive::verticalDrive(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsGramophone = NULL;
}

verticalDrive::~verticalDrive() {
    cleanUpRelations();
}

void verticalDrive::armRisen() {
    //#[ operation armRisen()
    //#]
}

Gramophone* verticalDrive::getItsGramophone() const {
    return itsGramophone;
}

void verticalDrive::setItsGramophone(Gramophone* p_Gramophone) {
    _setItsGramophone(p_Gramophone);
}

bool verticalDrive::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void verticalDrive::cleanUpRelations() {
    if(itsGramophone != NULL)
        {
            itsGramophone = NULL;
        }
}

void verticalDrive::__setItsGramophone(Gramophone* p_Gramophone) {
    itsGramophone = p_Gramophone;
}

void verticalDrive::_setItsGramophone(Gramophone* p_Gramophone) {
    __setItsGramophone(p_Gramophone);
}

void verticalDrive::_clearItsGramophone() {
    itsGramophone = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\verticalDrive.cpp
*********************************************************************/
