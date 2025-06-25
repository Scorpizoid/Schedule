/*
* ============================================================================
*  Name         : Schedule.h
*  Part of      : Schedule
*  Interface   	: 
*  Description  : Declares main application class.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

#ifndef SCHEDULE_H
#define SCHEDULE_H

// INCLUDES
#include <aknapp.h>

// CONSTANTS
// UID of the application
const TUid KUidSchedule = { 0x2002AA26 };

// CLASS DECLARATION

/**
* CSchedule application class.
* Provides the factory to create a concrete document object.
* 
*/
class CSchedule : public CAknApplication
    {
    
    public: // Functions from base classes
        /**
        * From CApaApplication, overridden to enable INI file support.
        * @return CDictionaryStore*, A pointer to the dictionary store
        */
        CDictionaryStore* OpenIniFileLC(RFs& aFs) const;
    private:

        /**
        * From CApaApplication, creates CScheduleDocument document object.
        * @return CApaDocument*, A pointer to the created document object.
        */
        CApaDocument* CreateDocumentL();
        
        /**
        * From CApaApplication, returns application's UID (KUidSchedule).
        * @return TUid, The value of KUidSchedule.
        */
        TUid AppDllUid() const;
    };

#endif

// End of File

