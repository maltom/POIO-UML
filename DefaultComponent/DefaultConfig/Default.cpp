/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//## auto_generated
#include "Default.h"
//## auto_generated
#include "discSensor.h"
//## auto_generated
#include "Gramophone.h"
//## auto_generated
#include "horizontalDrive.h"
//## auto_generated
#include "Panel.h"
//## auto_generated
#include "Selector.h"
//## auto_generated
#include "verticalDrive.h"
//## package Default



//## event evImpulse()
evImpulse::evImpulse() {
    setId(evImpulse_Default_id);
}

bool evImpulse::isTypeOf(const short id) const {
    return (evImpulse_Default_id==id);
}

//## event evSelectedOption()
evSelectedOption::evSelectedOption() {
    setId(evSelectedOption_Default_id);
}

bool evSelectedOption::isTypeOf(const short id) const {
    return (evSelectedOption_Default_id==id);
}

//## event chooseMode()
chooseMode::chooseMode() {
    setId(chooseMode_Default_id);
}

bool chooseMode::isTypeOf(const short id) const {
    return (chooseMode_Default_id==id);
}

//## event setRPM()
setRPM::setRPM() {
    setId(setRPM_Default_id);
}

bool setRPM::isTypeOf(const short id) const {
    return (setRPM_Default_id==id);
}

//## event setSize()
setSize::setSize() {
    setId(setSize_Default_id);
}

bool setSize::isTypeOf(const short id) const {
    return (setSize_Default_id==id);
}

//## event calcstartPos()
calcstartPos::calcstartPos() {
    setId(calcstartPos_Default_id);
}

bool calcstartPos::isTypeOf(const short id) const {
    return (calcstartPos_Default_id==id);
}

//## event setState()
setState::setState() {
    setId(setState_Default_id);
}

bool setState::isTypeOf(const short id) const {
    return (setState_Default_id==id);
}

//## event setLock()
setLock::setLock() {
    setId(setLock_Default_id);
}

bool setLock::isTypeOf(const short id) const {
    return (setLock_Default_id==id);
}

//## event riseArm()
riseArm::riseArm() {
    setId(riseArm_Default_id);
}

bool riseArm::isTypeOf(const short id) const {
    return (riseArm_Default_id==id);
}

//## event eventmessage_0()
eventmessage_0::eventmessage_0() {
    setId(eventmessage_0_Default_id);
}

bool eventmessage_0::isTypeOf(const short id) const {
    return (eventmessage_0_Default_id==id);
}

//## event moveArm()
moveArm::moveArm() {
    setId(moveArm_Default_id);
}

bool moveArm::isTypeOf(const short id) const {
    return (moveArm_Default_id==id);
}

//## event lowerArm()
lowerArm::lowerArm() {
    setId(lowerArm_Default_id);
}

bool lowerArm::isTypeOf(const short id) const {
    return (lowerArm_Default_id==id);
}

//## event startRotation()
startRotation::startRotation() {
    setId(startRotation_Default_id);
}

bool startRotation::isTypeOf(const short id) const {
    return (startRotation_Default_id==id);
}

//## event stopRotation()
stopRotation::stopRotation() {
    setId(stopRotation_Default_id);
}

bool stopRotation::isTypeOf(const short id) const {
    return (stopRotation_Default_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
