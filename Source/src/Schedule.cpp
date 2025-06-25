/*
* ============================================================================
*  Name         : Schedule.cpp
*  Part of      : Schedule
*  Interface    : Browser Control API
*  Description  : Implements the main application class.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation. 
* ============================================================================
*/

// INCLUDE FILES
#include "Schedule.h"
#include "ScheduleDocument.h"
#include <eikstart.h>

// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CSchedule::AppDllUid()
// Returns application UID
// ---------------------------------------------------------
//
TUid CSchedule::AppDllUid() const
    {
    return KUidSchedule;
    }

// ---------------------------------------------------------
// CDictionaryStore* CSchedule::OpenIniFileLC(RFs& aFs) const
// overrides CAknApplication::OpenIniFileLC to enable INI file support
// ---------------------------------------------------------
//
CDictionaryStore* CSchedule::OpenIniFileLC(RFs& aFs) const
{
    return CEikApplication::OpenIniFileLC(aFs);
}
   
// ---------------------------------------------------------
// CSchedule::CreateDocumentL()
// Creates CScheduleDocument object
// ---------------------------------------------------------
//
CApaDocument* CSchedule::CreateDocumentL()
    {
    return CScheduleDocument::NewL( *this );
    }

// ================= OTHER EXPORTED FUNCTIONS ==============
//
// ---------------------------------------------------------
// NewApplication() 
// Constructs CSchedule
// Returns: created application object
// ---------------------------------------------------------
//
LOCAL_C CApaApplication* NewApplication( )
	{
    return new CSchedule;
    }
    

// ---------------------------------------------------------
//    E32Main
//    Main function for Symbian OS v9 EXE application
//    Returns: TInt
// ---------------------------------------------------------
GLDEF_C TInt E32Main()
    {
    return EikStart::RunApplication( NewApplication );
    }

// End of File  

