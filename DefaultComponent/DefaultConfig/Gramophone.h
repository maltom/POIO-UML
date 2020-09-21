/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Gramophone
//!	Generated Date	: Mon, 21, Sep 2020  
	File Path	: DefaultComponent\DefaultConfig\Gramophone.h
*********************************************************************/

#ifndef Gramophone_H
#define Gramophone_H

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
//## link itsDiscSensor
#include "discSensor.h"
//## link itsHorizontalDrive
#include "horizontalDrive.h"
//## link itsPanel
#include "Panel.h"
//## link itsSelector
#include "Selector.h"
//## link itsVerticalDrive
#include "verticalDrive.h"
//## package Default

//## class Gramophone
class Gramophone : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Gramophone(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Gramophone();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getIsDisk() const;
    
    //## auto_generated
    void setIsDisk(int p_isDisk);
    
    //## auto_generated
    discSensor* getItsDiscSensor() const;
    
    //## auto_generated
    horizontalDrive* getItsHorizontalDrive() const;
    
    //## auto_generated
    Panel* getItsPanel() const;
    
    //## auto_generated
    Selector* getItsSelector() const;
    
    //## auto_generated
    verticalDrive* getItsVerticalDrive() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();

private :

    //## auto_generated
    PlayingModes getCurrentState() const;
    
    //## auto_generated
    void setCurrentState(PlayingModes p_currentState);
    
    //## auto_generated
    float getRestPos() const;
    
    //## auto_generated
    void setRestPos(float p_restPos);
    
    //## auto_generated
    int getRpm() const;
    
    //## auto_generated
    void setRpm(int p_rpm);
    
    //## auto_generated
    bool getSettingsLocked() const;
    
    //## auto_generated
    void setSettingsLocked(bool p_settingsLocked);
    
    //## auto_generated
    int getSize() const;
    
    //## auto_generated
    void setSize(int p_size);
    
    //## auto_generated
    float getStartPos() const;
    
    //## auto_generated
    void setStartPos(float p_startPos);
    
    //## auto_generated
    float getStopPos() const;
    
    //## auto_generated
    void setStopPos(float p_stopPos);
    
    ////    Attributes    ////

protected :

    PlayingModes currentState;		//## attribute currentState
    
    int isDisk;		//## attribute isDisk
    
    float restPos;		//## attribute restPos
    
    int rpm;		//## attribute rpm
    
    bool settingsLocked;		//## attribute settingsLocked
    
    int size;		//## attribute size
    
    float startPos;		//## attribute startPos
    
    float stopPos;		//## attribute stopPos
    
    ////    Relations and components    ////
    
    discSensor itsDiscSensor;		//## link itsDiscSensor
    
    horizontalDrive itsHorizontalDrive;		//## link itsHorizontalDrive
    
    Panel itsPanel;		//## link itsPanel
    
    Selector itsSelector;		//## link itsSelector
    
    verticalDrive itsVerticalDrive;		//## link itsVerticalDrive
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Gramophone.h
*********************************************************************/
