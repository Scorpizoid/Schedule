/*
* ============================================================================
*  Name        : ScheduleUi.cpp
*  Part of     : Schedule
*  Interface   : Browser Control API
*  Description : The Ui class for the Browser Control Sample Application
*  Version     : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

// INCLUDE FILES
#include "ScheduleUi.h"
#include "ScheduleContainer.h" 
#include <Schedule.rsg>
#include "Schedule.hrh"

#include <avkon.hrh>


// ================= MEMBER FUNCTIONS =======================
//
// ----------------------------------------------------------
// CScheduleUi::ConstructL()
// ?implementation_description
// ----------------------------------------------------------
//
void CScheduleUi::ConstructL()
    {
    BaseConstructL(CAknAppUi::EAknEnableSkin);
    iAppContainer = new (ELeave) CScheduleContainer;
    iAppContainer->SetMopParent(this);
    iAppContainer->ConstructL( ApplicationRect() );
    AddToStackL( iAppContainer );
    }

// ----------------------------------------------------
// CScheduleUi::~CScheduleUi()
// Destructor
// Frees reserved resources
// ----------------------------------------------------
//
CScheduleUi::~CScheduleUi()
    {
    if (iAppContainer)
        {
        RemoveFromStack( iAppContainer );
        delete iAppContainer;
        }

   }

// ------------------------------------------------------------------------------
// CScheduleUi::::DynInitMenuPaneL(TInt aResourceId,CEikMenuPane* aMenuPane)
//  This function is called by the EIKON framework just before it displays
//  a menu pane. Its default implementation is empty, and by overriding it,
//  the application can set the state of menu items dynamically according
//  to the state of application data.
// ------------------------------------------------------------------------------
//
void CScheduleUi::DynInitMenuPaneL(
    TInt aResourceId,CEikMenuPane* aMenuPane)
    {
    iAppContainer->DynInitMenuPaneL(aResourceId, aMenuPane);
    }

// ----------------------------------------------------
// CScheduleUi::HandleKeyEventL(
//     const TKeyEvent& aKeyEvent,TEventCode /*aType*/)
// ?implementation_description
// ----------------------------------------------------
//
TKeyResponse CScheduleUi::HandleKeyEventL(
    const TKeyEvent& aKeyEvent,TEventCode aType)
    {
    return iAppContainer->HandleKeyEventL(aKeyEvent, aType);;
    }

// ----------------------------------------------------
// CScheduleUi::HandleCommandL(TInt aCommand)
// ?implementation_description
// ----------------------------------------------------
//
void CScheduleUi::HandleCommandL(TInt aCommand)
    {
    switch ( aCommand )
        {
        case EEikCmdExit:
        case EAknSoftkeyExit:
            {
            Exit();
            break;
            }

      default:
            iAppContainer->HandleCommandL(aCommand);
            break;      
        }
    }

// End of File  

