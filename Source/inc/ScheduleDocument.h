/*
* ============================================================================
*  Name         : ScheduleDocument.h
*  Part of      : Schedule
*  Interface    : Browser Control API
*  Description  : Declares document for application.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

#ifndef SCHEDULEDOCUMENT_H
#define SCHEDULEDOCUMENT_H

// INCLUDES
#include <akndoc.h>
   
// CONSTANTS

// FORWARD DECLARATIONS
class  CEikAppUi;

// CLASS DECLARATION

/**
*  CScheduleDocument application class.
*/
class CScheduleDocument : public CAknDocument
    {
    public: // Constructors and destructor
        /**
        * Two-phased constructor.
        */
        static CScheduleDocument* NewL(CEikApplication& aApp);

        /**
        * Destructor.
        */
        virtual ~CScheduleDocument();

    public: // New functions

    protected:  // New functions

    protected:  // Functions from base classes

    private:

        /**
        * EPOC default constructor.
        */
        CScheduleDocument(CEikApplication& aApp);
        void ConstructL();

    private:

        /**
        * From CEikDocument, create CScheduleAppUi "App UI" object.
        */
        CEikAppUi* CreateAppUiL();
    };

#endif

// End of File

