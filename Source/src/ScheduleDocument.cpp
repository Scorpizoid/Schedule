/*
* ============================================================================
*  Name         : ScheduleDocument.h
*  Part of      : Schedule
*  Interface   	: Browser Control API 
*  Description  : Implements the document for application.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

// INCLUDE FILES
#include "ScheduleDocument.h"
#include "ScheduleUi.h"

// ================= MEMBER FUNCTIONS =======================

// constructor
CScheduleDocument::CScheduleDocument(CEikApplication& aApp)
: CAknDocument(aApp)    
    {
    }

// destructor
CScheduleDocument::~CScheduleDocument()
    {
    }

// EPOC default constructor can leave.
void CScheduleDocument::ConstructL()
    {
    }

// Two-phased constructor.
CScheduleDocument* CScheduleDocument::NewL(
        CEikApplication& aApp)     // CSchedule reference
    {
    CScheduleDocument* self = new (ELeave) CScheduleDocument( aApp );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();

    return self;
    }
    
// ----------------------------------------------------
// CScheduleDocument::CreateAppUiL()
// constructs CScheduleUi
// ----------------------------------------------------
//
CEikAppUi* CScheduleDocument::CreateAppUiL()
    {
    return new (ELeave) CScheduleUi;
    }

// End of File  

