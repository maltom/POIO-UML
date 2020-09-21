/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Gramophone;

//## auto_generated
class Panel;

//## auto_generated
class Selector;

//## auto_generated
class discSensor;

//## auto_generated
class horizontalDrive;

//## auto_generated
class verticalDrive;

//#[ ignore
#define evImpulse_Default_id 18601

#define evSelectedOption_Default_id 18602

#define chooseMode_Default_id 18603

#define setRPM_Default_id 18604

#define setSize_Default_id 18605

#define calcstartPos_Default_id 18606

#define setState_Default_id 18607

#define setLock_Default_id 18608

#define riseArm_Default_id 18609

#define eventmessage_0_Default_id 18610

#define moveArm_Default_id 18611

#define lowerArm_Default_id 18612

#define startRotation_Default_id 18613

#define stopRotation_Default_id 18614
//#]

//## package Default


//## type Modes
enum Modes {
    settings = 0,
    playing = 1
};

//## type PlayingModes
enum PlayingModes {
    stop = 0,
    pause = 2,
    resume = 3,
    play = 1
};

//## type SettingModes
enum SettingModes {
    rpm = 0,
    size = 1
};

//## event evImpulse()
class evImpulse : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evImpulse();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evSelectedOption()
class evSelectedOption : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSelectedOption();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event chooseMode()
class chooseMode : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    chooseMode();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event setRPM()
class setRPM : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    setRPM();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event setSize()
class setSize : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    setSize();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event calcstartPos()
class calcstartPos : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    calcstartPos();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event setState()
class setState : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    setState();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event setLock()
class setLock : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    setLock();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event riseArm()
class riseArm : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    riseArm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event moveArm()
class moveArm : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    moveArm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event lowerArm()
class lowerArm : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    lowerArm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event startRotation()
class startRotation : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    startRotation();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event stopRotation()
class stopRotation : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    stopRotation();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
