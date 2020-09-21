/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Gramophone
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Gramophone.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Gramophone.h"
//## package Default

//## class Gramophone
Gramophone::Gramophone(IOxfActive* theActiveContext) : rpm(33), settingsLocked(false), size(12), startPos(0.0), stopPos(30.0) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsHorizontalDrive.setShouldDelete(false);
        }
        {
            itsPanel.setShouldDelete(false);
        }
        {
            itsVerticalDrive.setShouldDelete(false);
        }
        {
            itsSelector.setShouldDelete(false);
        }
    }
    initRelations();
}

Gramophone::~Gramophone() {
}

int Gramophone::getIsDisk() const {
    return isDisk;
}

void Gramophone::setIsDisk(int p_isDisk) {
    isDisk = p_isDisk;
}

discSensor* Gramophone::getItsDiscSensor() const {
    return (discSensor*) &itsDiscSensor;
}

horizontalDrive* Gramophone::getItsHorizontalDrive() const {
    return (horizontalDrive*) &itsHorizontalDrive;
}

Panel* Gramophone::getItsPanel() const {
    return (Panel*) &itsPanel;
}

Selector* Gramophone::getItsSelector() const {
    return (Selector*) &itsSelector;
}

verticalDrive* Gramophone::getItsVerticalDrive() const {
    return (verticalDrive*) &itsVerticalDrive;
}

bool Gramophone::startBehavior() {
    bool done = true;
    done &= itsHorizontalDrive.startBehavior();
    done &= itsPanel.startBehavior();
    done &= itsSelector.startBehavior();
    done &= itsVerticalDrive.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Gramophone::initRelations() {
    itsDiscSensor._setItsGramophone(this);
    itsHorizontalDrive._setItsGramophone(this);
    itsPanel._setItsGramophone(this);
    itsSelector._setItsGramophone(this);
    itsVerticalDrive._setItsGramophone(this);
}

PlayingModes Gramophone::getCurrentState() const {
    return currentState;
}

void Gramophone::setCurrentState(PlayingModes p_currentState) {
    currentState = p_currentState;
}

float Gramophone::getRestPos() const {
    return restPos;
}

void Gramophone::setRestPos(float p_restPos) {
    restPos = p_restPos;
}

int Gramophone::getRpm() const {
    return rpm;
}

void Gramophone::setRpm(int p_rpm) {
    rpm = p_rpm;
}

bool Gramophone::getSettingsLocked() const {
    return settingsLocked;
}

void Gramophone::setSettingsLocked(bool p_settingsLocked) {
    settingsLocked = p_settingsLocked;
}

int Gramophone::getSize() const {
    return size;
}

void Gramophone::setSize(int p_size) {
    size = p_size;
}

float Gramophone::getStartPos() const {
    return startPos;
}

void Gramophone::setStartPos(float p_startPos) {
    startPos = p_startPos;
}

float Gramophone::getStopPos() const {
    return stopPos;
}

void Gramophone::setStopPos(float p_stopPos) {
    stopPos = p_stopPos;
}

void Gramophone::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsHorizontalDrive.setActiveContext(theActiveContext, false);
        itsPanel.setActiveContext(theActiveContext, false);
        itsVerticalDrive.setActiveContext(theActiveContext, false);
        itsSelector.setActiveContext(theActiveContext, false);
    }
}

void Gramophone::destroy() {
    itsHorizontalDrive.destroy();
    itsPanel.destroy();
    itsSelector.destroy();
    itsVerticalDrive.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Gramophone.cpp
*********************************************************************/
