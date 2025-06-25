/*
* ============================================================================
*  Name         : ScheduleContainer.h
*  Part of      : Schedule
*  Interface    : Browser Control API
*  Description  : Declares container control for Browser Control Sample application.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

#ifndef SCHEDULECONTAINER_H
#define SCHEDULECONTAINER_H

// INCLUDES
#include <coecntrl.h>
#include <akndef.h>
#include <fbs.h>
#include <BITSTD.H>
#include "BrCtlInterface.h"
/*
// FORWARD DECLARATIONS
class CScheduleSpecialLoadObserver;
class CScheduleLayoutObserver;
class CScheduleSoftkeysObserver;
class CScheduleLoadEventObserver;
class CScheduleLinkResolver;
class CScheduleStateChangeObserver;
class CScheduleDialogsProvider;
*/
// CLASS DECLARATION

/**
*  CScheduleContainer class.
*  This is the container control class.
*/
class CScheduleContainer : public CCoeControl, MCoeControlObserver, MBrCtlDataLoadSupplier
    {
    public: // Constructors and destructor
        
        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CScheduleContainer();

    public: // New functions

        /**
        * Pass a command to the Browser Control
        * @since 2.8
        * @param aCommand The command that the Browser Control should process
        * @return void
        */
        void HandleCommandL(TInt aCommand);

        /**
        * Dynamically initialises a menu pane. The Uikon framework calls this 
        *   function, if it is implemented in a menuís observer, immediately before 
        *   the menu pane is activated. 
        * @since 2.8
        * @param aResourceId Resource ID identifying the menu pane to initialise
        * @param aMenuPane The in-memory representation of the menu pane.
        * @return void
        */
        void DynInitMenuPaneL(TInt aResourceId, CEikMenuPane* aMenuPane);

        /**
        * Handles key events
        * @since 2.8
        * @param aKeyEvent The key event that occurred.
        * @param aType The window server event type that is being handled
        * @return TKeyResponse Value indicates whether or not the key event was consumed by the control. The default implementation simply returns EKeyWasNotConsumed.
        */
        TKeyResponse HandleKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);
        
        /**
        * Accessor method for iText
        * @since 2.8
        * @param void
        * @return TDesc& The descriptor of the text
        */
//        inline const TDesC& Text() const {return iText;}
       
        /**
        * Setter method for iText
        * @since 2.8
        * @param aText The descriptor for the text you wish to display
        * @return void
        */
        void SetText( const TDesC& aText );
        
        /**
        * Setter method for iPoint
        * @since 2.8
        * @param aPoint The point at which you want to display the text
        * @return void
        */
        void SetPoint( const TPoint& aPoint );
        
        /**
        * Accessor method iBrCtlInterface
        * @since 2.8
        * @param void
        * @return CBrCtlInterface* A pointer to the browser control interface as a convenience to the observers
        */
        inline CBrCtlInterface* BrCtlInterface() const {return iBrCtlInterface;}

    private: // Functions from base classes

        /**
        * From CoeControl,SizeChanged.
        */
        void SizeChanged();

        /**
        * From CoeControl,CountComponentControls.
        */
        TInt CountComponentControls() const;

        /**
        * From CCoeControl,ComponentControl.
        */
        CCoeControl* ComponentControl(TInt aIndex) const;

        /**
        * From CCoeControl,Draw.
        */
        void Draw(const TRect& aRect) const;

        /**
        * Handle key events.
        */
        TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);
        void SetItems();

        /**
        * From MBrCtlDataLoadSupplier, Cancel an on-going load
        */
        void CancelLoad();

        /**
        * Create a Basic Browser Control that does not have observers with scrolling
        * and HTTP framework capabilities
        */
        //void CreateBasicBrowserControlL();

        /**
        * Create Browser Control with observers with the given capabilities
        */
       // void CreateBrowserControlWithObserversL(TUint aCapabilities);

	    /**
        * Read the file.
        */
        HBufC8* ReadFileLC(const TDesC& aFileName);

        /**
        * Handles an event from an observed control.
        */
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);
        
        /**
        * The following methods are used to demonstrate the functionality of 
        * the browser control API
        */
        void BasicBrowserControlL(TInt x, TInt y);
        void OpenAboutBoxL();
        void Laskut();
        void CheckWeek();
    	void Week1();
    	void Week2();
    	void Week3();
    	void Week4();
    	void Week5();
    	void Week6();
    	void Week7();
    	void Week8();
    	void Week9();
    	void Week10();
    	void Week11();
    	void Week12();
    	void Week13();
    	void Week14();
    	void Week15();
    	void Week16();
    	void Week17();
    	void Week18();
    	void Week19();
    	void Week20();
    	void Week21();
    	void Week22();
    	void Week23();
    	void Week24();
    	void Week25();
    	void Week26();
    	void Week27();
    	void Week28();
    	void Week29();
    	void Week30();
    	void Week31();
    	void Week32();
        void Week33();
        void Week34();
        void Week35();
        void Week36();
        void Week37();
        void Week38();
        void Week39();
        void Week40();
        void Week41();
        void Week42();
        void Week43();
        void Week44();
        void Week45();
        void Week46();
        void Week47();
        void Week48();
        void Week49();
        void Week50();
        void Week51();
        void Week52();
        void Week53();
        void Week54();
        
    private: //data 
        // Pointer to the browser control interface
        CBrCtlInterface* iBrCtlInterface;
        // Desired capabilities of the browser control
        TUint iBrCtlCapabilities;
        // Command Base
        TInt iCommandBase;
        // Informs whether or not CancelLoad has been called
        TBool iCancelInitDataLoad;
        
        
        
    	HBufC*  KK;
    	HBufC*  iGroupText;
    	HBufC*  iMMText;
       
        //Modi
     	// The cursor coordinates
     	TRect cursor;
     	TInt x;
     	TInt y;
     	TRect Maanantailaatikko[7];
     	TRect Tiistailaatikko[7];
     	TRect Keskiviikkolaatikko[7];
     	TRect Torstailaatikko[7];
     	TRect Perjantailaatikko[7];
     	
    	TInt Aloitus_h_maanantai[7];
    	TInt Aloitus_min_maanantai[7];
    	TInt Lopetus_h_maanantai[7];
    	TInt Lopetus_min_maanantai[7];
    	TInt Aloitus_kohta_y_maanantai[7];
    	TInt Aloitus_kohta_x_maanantai;
    	TInt Lopetus_kohta_y_maanantai[7];
    	TInt Lopetus_kohta_x_maanantai;
    	
    	TInt Aloitus_h_tiistai[7];
    	TInt Aloitus_min_tiistai[7];
    	TInt Lopetus_h_tiistai[7];
    	TInt Lopetus_min_tiistai[7];
    	TInt Aloitus_kohta_y_tiistai[7];
    	TInt Aloitus_kohta_x_tiistai;
    	TInt Lopetus_kohta_y_tiistai[7];
    	TInt Lopetus_kohta_x_tiistai;
    	
    	TInt Aloitus_h_keskiviikko[7];
    	TInt Aloitus_min_keskiviikko[7];
    	TInt Lopetus_h_keskiviikko[7];
    	TInt Lopetus_min_keskiviikko[7];
    	TInt Aloitus_kohta_y_keskiviikko[7];
    	TInt Aloitus_kohta_x_keskiviikko;
    	TInt Lopetus_kohta_y_keskiviikko[7];
    	TInt Lopetus_kohta_x_keskiviikko;

    	TInt Aloitus_h_torstai[7];
    	TInt Aloitus_min_torstai[7];
    	TInt Lopetus_h_torstai[7];
    	TInt Lopetus_min_torstai[7];
    	TInt Aloitus_kohta_y_torstai[7];
    	TInt Aloitus_kohta_x_torstai;
    	TInt Lopetus_kohta_y_torstai[7];
    	TInt Lopetus_kohta_x_torstai;
    	
    	TInt Aloitus_h_perjantai[7];
    	TInt Aloitus_min_perjantai[7];
    	TInt Lopetus_h_perjantai[7];
    	TInt Lopetus_min_perjantai[7];
    	TInt Aloitus_kohta_y_perjantai[7];
    	TInt Aloitus_kohta_x_perjantai;
    	TInt Lopetus_kohta_y_perjantai[7];
    	TInt Lopetus_kohta_x_perjantai;

	     TBuf<10> Aloitusaika_maanantai1;
	     TBuf<10> Lopetusaika_maanantai1;
	     TBuf<10> Aloitusaika_maanantai2;
	     TBuf<10> Lopetusaika_maanantai2;
	     TBuf<10> Aloitusaika_maanantai3;
	     TBuf<10> Lopetusaika_maanantai3;
	     TBuf<10> Aloitusaika_maanantai4;
	     TBuf<10> Lopetusaika_maanantai4;
	     TBuf<10> Aloitusaika_maanantai5;
	     TBuf<10> Lopetusaika_maanantai5;
	     TBuf<10> Aloitusaika_maanantai6;
	     TBuf<10> Lopetusaika_maanantai6;

	   	TBuf<256> pitkaKuvaus_maanantai1;
	   	TBuf<256> pitkaKuvaus_maanantai2;
	   	TBuf<256> pitkaKuvaus_maanantai3;
	   	TBuf<256> pitkaKuvaus_maanantai4;
	   	TBuf<256> pitkaKuvaus_maanantai5;
	   	TBuf<256> pitkaKuvaus_maanantai6;
	 	TBuf<256> lyhytKuvaus_maanantai1;
	 	TBuf<256> lyhytKuvaus_maanantai2;
	 	TBuf<256> lyhytKuvaus_maanantai3;
	 	TBuf<256> lyhytKuvaus_maanantai4;
	 	TBuf<256> lyhytKuvaus_maanantai5;
	 	TBuf<256> lyhytKuvaus_maanantai6;
	 	TBuf<256> paikka_maanantai1;
	 	TBuf<256> paikka_maanantai2;
	 	TBuf<256> paikka_maanantai3;
	 	TBuf<256> paikka_maanantai4;
	 	TBuf<256> paikka_maanantai5;
	 	TBuf<256> paikka_maanantai6;
    	TRgb Maanantai_laatikonvari[7];
    	TInt Laatikot_ma;

	     TBuf<100> KAt;
	     
	     TBuf<10> Aloitusaika_tiistai1;
	     TBuf<10> Lopetusaika_tiistai1;
	     TBuf<10> Aloitusaika_tiistai2;
	     TBuf<10> Lopetusaika_tiistai2;
	     TBuf<10> Aloitusaika_tiistai3;
	     TBuf<10> Lopetusaika_tiistai3;
	     TBuf<10> Aloitusaika_tiistai4;
	     TBuf<10> Lopetusaika_tiistai4;
	     TBuf<10> Aloitusaika_tiistai5;
	     TBuf<10> Lopetusaika_tiistai5;
	     TBuf<10> Aloitusaika_tiistai6;
	     TBuf<10> Lopetusaika_tiistai6;

	   	TBuf<256> pitkaKuvaus_tiistai1;
	   	TBuf<256> pitkaKuvaus_tiistai2;
	   	TBuf<256> pitkaKuvaus_tiistai3;
	   	TBuf<256> pitkaKuvaus_tiistai4;
	   	TBuf<256> pitkaKuvaus_tiistai5;
	   	TBuf<256> pitkaKuvaus_tiistai6;
	 	TBuf<256> lyhytKuvaus_tiistai1;
	 	TBuf<256> lyhytKuvaus_tiistai2;
	 	TBuf<256> lyhytKuvaus_tiistai3;
	 	TBuf<256> lyhytKuvaus_tiistai4;
	 	TBuf<256> lyhytKuvaus_tiistai5;
	 	TBuf<256> lyhytKuvaus_tiistai6;
	 	TBuf<256> paikka_tiistai1;
	 	TBuf<256> paikka_tiistai2;
	 	TBuf<256> paikka_tiistai3;
	 	TBuf<256> paikka_tiistai4;
	 	TBuf<256> paikka_tiistai5;
	 	TBuf<256> paikka_tiistai6;
    	TRgb Tiistai_laatikonvari[7];
    	TInt Laatikot_ti;
	 	
	     TBuf<10> Aloitusaika_keskiviikko1;
	     TBuf<10> Lopetusaika_keskiviikko1;
	     TBuf<10> Aloitusaika_keskiviikko2;
	     TBuf<10> Lopetusaika_keskiviikko2;
	     TBuf<10> Aloitusaika_keskiviikko3;
	     TBuf<10> Lopetusaika_keskiviikko3;
	     TBuf<10> Aloitusaika_keskiviikko4;
	     TBuf<10> Lopetusaika_keskiviikko4;
	     TBuf<10> Aloitusaika_keskiviikko5;
	     TBuf<10> Lopetusaika_keskiviikko5;
	     TBuf<10> Aloitusaika_keskiviikko6;
	     TBuf<10> Lopetusaika_keskiviikko6;

	   	TBuf<256> pitkaKuvaus_keskiviikko1;
	   	TBuf<256> pitkaKuvaus_keskiviikko2;
	   	TBuf<256> pitkaKuvaus_keskiviikko3;
	   	TBuf<256> pitkaKuvaus_keskiviikko4;
	   	TBuf<256> pitkaKuvaus_keskiviikko5;
	   	TBuf<256> pitkaKuvaus_keskiviikko6;
	 	TBuf<256> lyhytKuvaus_keskiviikko1;
	 	TBuf<256> lyhytKuvaus_keskiviikko2;
	 	TBuf<256> lyhytKuvaus_keskiviikko3;
	 	TBuf<256> lyhytKuvaus_keskiviikko4;
	 	TBuf<256> lyhytKuvaus_keskiviikko5;
	 	TBuf<256> lyhytKuvaus_keskiviikko6;
	 	TBuf<256> paikka_keskiviikko1;
	 	TBuf<256> paikka_keskiviikko2;
	 	TBuf<256> paikka_keskiviikko3;
	 	TBuf<256> paikka_keskiviikko4;
	 	TBuf<256> paikka_keskiviikko5;
	 	TBuf<256> paikka_keskiviikko6;
   	TRgb Keskiviikko_laatikonvari[7];
   	TInt Laatikot_ke;

    TBuf<10> Aloitusaika_torstai1;
    TBuf<10> Lopetusaika_torstai1;
    TBuf<10> Aloitusaika_torstai2;
    TBuf<10> Lopetusaika_torstai2;
    TBuf<10> Aloitusaika_torstai3;
    TBuf<10> Lopetusaika_torstai3;
    TBuf<10> Aloitusaika_torstai4;
    TBuf<10> Lopetusaika_torstai4;
    TBuf<10> Aloitusaika_torstai5;
    TBuf<10> Lopetusaika_torstai5;
    TBuf<10> Aloitusaika_torstai6;
    TBuf<10> Lopetusaika_torstai6;

  	TBuf<256> pitkaKuvaus_torstai1;
  	TBuf<256> pitkaKuvaus_torstai2;
  	TBuf<256> pitkaKuvaus_torstai3;
  	TBuf<256> pitkaKuvaus_torstai4;
  	TBuf<256> pitkaKuvaus_torstai5;
  	TBuf<256> pitkaKuvaus_torstai6;
	TBuf<256> lyhytKuvaus_torstai1;
	TBuf<256> lyhytKuvaus_torstai2;
	TBuf<256> lyhytKuvaus_torstai3;
	TBuf<256> lyhytKuvaus_torstai4;
	TBuf<256> lyhytKuvaus_torstai5;
	TBuf<256> lyhytKuvaus_torstai6;
	TBuf<256> paikka_torstai1;
	TBuf<256> paikka_torstai2;
	TBuf<256> paikka_torstai3;
	TBuf<256> paikka_torstai4;
	TBuf<256> paikka_torstai5;
	TBuf<256> paikka_torstai6;
	TRgb Torstai_laatikonvari[7];
	TInt Laatikot_to;

    TBuf<10> Aloitusaika_perjantai1;
    TBuf<10> Lopetusaika_perjantai1;
    TBuf<10> Aloitusaika_perjantai2;
    TBuf<10> Lopetusaika_perjantai2;
    TBuf<10> Aloitusaika_perjantai3;
    TBuf<10> Lopetusaika_perjantai3;
    TBuf<10> Aloitusaika_perjantai4;
    TBuf<10> Lopetusaika_perjantai4;
    TBuf<10> Aloitusaika_perjantai5;
    TBuf<10> Lopetusaika_perjantai5;
    TBuf<10> Aloitusaika_perjantai6;
    TBuf<10> Lopetusaika_perjantai6;

  	TBuf<256> pitkaKuvaus_perjantai1;
  	TBuf<256> pitkaKuvaus_perjantai2;
  	TBuf<256> pitkaKuvaus_perjantai3;
  	TBuf<256> pitkaKuvaus_perjantai4;
  	TBuf<256> pitkaKuvaus_perjantai5;
  	TBuf<256> pitkaKuvaus_perjantai6;
	TBuf<256> lyhytKuvaus_perjantai1;
	TBuf<256> lyhytKuvaus_perjantai2;
	TBuf<256> lyhytKuvaus_perjantai3;
	TBuf<256> lyhytKuvaus_perjantai4;
	TBuf<256> lyhytKuvaus_perjantai5;
	TBuf<256> lyhytKuvaus_perjantai6;
	TBuf<256> paikka_perjantai1;
	TBuf<256> paikka_perjantai2;
	TBuf<256> paikka_perjantai3;
	TBuf<256> paikka_perjantai4;
	TBuf<256> paikka_perjantai5;
	TBuf<256> paikka_perjantai6;
	TRgb Perjantai_laatikonvari[7];
	TInt Laatikot_pe;	

	TInt Viikonpvmt[6];
 	TBuf<20> Maanantai;
 	TBuf<20> Tiistai;
 	TBuf<20> Keskiviikko;
 	TBuf<20> Torstai;
 	TBuf<20> Perjantai;
	//Kelloviiva
 	TInt KelloViivaY;
    TInt KelloViivanAloitusX;
    TInt KelloViivanLopetusX;
	TInt Hour;
	TInt Minute;

	 	TBuf<256> alapalkinTeksti1;
	     TInt resourceOffset;
    	
    	TTime aTime;
    	TInt WeekNo;
    	TDay DayNoInWeek;
    	TDateTime aDateTime;
    	TBuf<40> kuukausi;
    	// x = viikonp‰iv‰ (esim. 2 = tiistai)
    	TInt cursorPosx;
    	// y = viikonp‰iv‰n laatikko, esim. 2 on toinen laatikko ylh‰‰lt‰
    	TInt cursorPosy;
    	TInt MinCursorY;
    	TInt MaxWeeks;
    	TInt MinWeeks;
    	TInt LuoViikkoja;
    	TInt AloitusViikko[13];
    	TInt LopetusViikko[13];
    	TInt ValiViikko[13];
    	
    	// Let there be COLORS!
    	TRgb Punainen;
    	TRgb Vihrea;
    	TRgb TummaVihrea;
    	TRgb Sininen;
    	TRgb Oranssi;
    	TRgb TummaOranssi;
    	TRgb Pinkki;
    	TRgb Harmaa;
    	TRgb Violetti;
    	TRgb Turkoosi;
    	TRgb Keltainen;
    	TRgb TummaKeltainen;
    	TRgb Valkoinen;

			
    	
     	// Is it running the first time?
     	TUint8 firstrun;
     	CFbsBitmap* bitmap; 
     	CFbsBitmap* bitmapCursor; 
     	CFbsBitmap* maskBitmap; 
    };

#endif

// End of File

