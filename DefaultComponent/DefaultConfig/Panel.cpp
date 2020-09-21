/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Panel
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Panel.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Panel.h"
//## link itsGramophone
#include "Gramophone.h"
//## package Default

//## class Panel
Panel::Panel(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsGramophone = NULL;
}

Panel::~Panel() {
    cleanUpRelations();
}

Gramophone* Panel::getItsGramophone() const {
    return itsGramophone;
}

void Panel::setItsGramophone(Gramophone* p_Gramophone) {
    _setItsGramophone(p_Gramophone);
}

bool Panel::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Panel::cleanUpRelations() {
    if(itsGramophone != NULL)
        {
            itsGramophone = NULL;
        }
}

void Panel::__setItsGramophone(Gramophone* p_Gramophone) {
    itsGramophone = p_Gramophone;
}

void Panel::_setItsGramophone(Gramophone* p_Gramophone) {
    __setItsGramophone(p_Gramophone);
}

void Panel::_clearItsGramophone() {
    itsGramophone = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Panel.cpp
*********************************************************************/
