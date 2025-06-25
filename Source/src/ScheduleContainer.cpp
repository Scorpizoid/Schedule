// INCLUDE FILES
#include "ScheduleContainer.h"
#include <eiklabel.h>  // for example label control
#include <avkon.hrh>
#include <Schedule.rsg>
#include "Schedule.hrh"
#include <BrCtlInterface.h>
#include <CHARCONV.H>
#include <gdi.h>
#include <bitdev.h>
#include <eikenv.h>


// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CScheduleContainer::ConstructL(const TRect& aRect)
// EPOC two phased constructor
// ---------------------------------------------------------
//
void CScheduleContainer::ConstructL(const TRect& aRect)
    {
	
	// Ensimmäinen ja viimeinen kalenteriin luotu viikko
	MinWeeks = 34;
	MaxWeeks = 38;
	
	
	//Joulu-tammi
	ValiViikko[0] = 1;
	//Tammikuu
	AloitusViikko[1] = 2;
	LopetusViikko[1] = 4;
	//Tammi-helmi
	ValiViikko[1] = 5;
	//Helmikuu
	AloitusViikko[2] = 6;
	LopetusViikko[2] = 8;
	ValiViikko[2] = 9;
	AloitusViikko[3] = 10;
	LopetusViikko[3] = 13;
	ValiViikko[3] = 14;
	AloitusViikko[4] = 15;
	LopetusViikko[4] = 17;
	ValiViikko[4] = 18;
	AloitusViikko[5] = 19;
	LopetusViikko[5] = 22;
	ValiViikko[5] = 0;
	AloitusViikko[6] = 23;
	LopetusViikko[6] = 26;
	ValiViikko[6] = 27;
	AloitusViikko[7] = 28;
	LopetusViikko[7] = 30;
	ValiViikko[7] = 31;
	AloitusViikko[8] = 32;
	LopetusViikko[8] = 35;
	ValiViikko[8] = 36;
	AloitusViikko[9] = 37;
	LopetusViikko[9] = 39;
	ValiViikko[9] = 40;
	AloitusViikko[10] = 41;
	LopetusViikko[10] = 43;
	ValiViikko[10] = 44;
	AloitusViikko[11] = 45;
	LopetusViikko[11] = 48;
	ValiViikko[11] = 49;
	AloitusViikko[12] = 50;
	LopetusViikko[12] = 52;
	ValiViikko[12] = 53;
	
	LuoViikkoja = 0;
	
	 Punainen = TRgb(255,0,0,255);
	 Vihrea = TRgb(0,255,0,255);
	 Sininen = TRgb(87,103,255,255);
	 Oranssi = TRgb(255,165,0,255);
	 Pinkki = TRgb(255,105,180,255);
	 Harmaa = TRgb(147,147,147,255);
	 Violetti = TRgb(142,78,142,255);
	 Turkoosi = TRgb(64,224,208,255);
	 Keltainen = TRgb(255,255,0,255);
	 Valkoinen = TRgb(255,255,255,255);
	 TummaOranssi = TRgb(178,74,0,255);
	 TummaVihrea = TRgb(3,106,0,255);
	 TummaKeltainen = TRgb(158,152,0,255);
	
	
    x = 12;
	y = 4;
	MinCursorY = 1;
	firstrun = 1;
	bitmap = new (ELeave) CFbsBitmap(); 

	
	_LIT(KMBMbg,"C:\\private\\2002AA26\\bg.mbm");
	CleanupStack::PushL(bitmap); 
	User::LeaveIfError(bitmap->Load(KMBMbg, 0));
	CleanupStack::Pop(1);

	KK = HBufC::NewL(40);
	_LIT(KHydrogen,""); 
	*KK = KHydrogen;

	SetItems();

	
	CreateWindowL();
    SetRect(aRect);
    ActivateL();

    iCommandBase = TBrCtlDefs::ECommandIdBase;
    }

// Destructor
CScheduleContainer::~CScheduleContainer() 
    {
    if (iBrCtlInterface)
        {
			delete iBrCtlInterface;
        }

	delete bitmap;
/*	delete bitmapCursor;
	delete maskBitmap;*/
    delete KK;
    User::Exit(0);
    }

// ---------------------------------------------------------
// CScheduleContainer::SizeChanged()
// Called by framework when the view size is changed
// ---------------------------------------------------------
//
void CScheduleContainer::SizeChanged()
    {
    if (iBrCtlInterface)
        {
        iBrCtlInterface->SetRect(Rect());
        }
    }

// ---------------------------------------------------------
// CScheduleContainer::CountComponentControls() const
// ---------------------------------------------------------
//
TInt CScheduleContainer::CountComponentControls() const
    {
    if (iBrCtlInterface)
        return 1;
    return 0;
    }

// ---------------------------------------------------------
// CScheduleContainer::ComponentControl(TInt aIndex) const
// ---------------------------------------------------------
//
CCoeControl* CScheduleContainer::ComponentControl(TInt aIndex) const
    {
    switch ( aIndex )
        {
        case 0:
            return iBrCtlInterface; // Could be NULL
        default:
            return NULL;
        }
    }

// ---------------------------------------------------------
// CScheduleContainer::Draw(const TRect& aRect) const
// ---------------------------------------------------------
//
void CScheduleContainer::Draw(const TRect& aRect) const
    {
    
    CWindowGc& gc = SystemGc();
    // Start with a clear screen
	gc.Clear();

	
			// draw the background
	TPoint pos(0,0);//6,15); 
	gc.BitBlt(pos, bitmap);
	
	
	
	
	
	
	
	
	const CFont*     fontUsed;

	if(LuoViikkoja == 1)
		{
		TRect Varoituspalkki(330,1,718,29);
		fontUsed = iEikonEnv->LegendFont();
		gc.UseFont(fontUsed);
		gc.SetPenColor(KRgbRed);  
		TBuf<256> LuoViikkoja;
		LuoViikkoja.Format(_L("Luo uusia viikkoja! Viimeinen viikko %d!"),MaxWeeks);
		
		gc.DrawText(LuoViikkoja,Varoituspalkki,Varoituspalkki.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
		}

	
	
	fontUsed = iEikonEnv->TitleFont();
	gc.UseFont(fontUsed);

	   TChar aChar(97);
	    TInt width = fontUsed->CharWidthInPixels(aChar);

     
	     _LIT(KVko,"Vko %d");
	     TBuf<256> Vko;
	     Vko.Format(KVko,WeekNo);
	     
	     
	     
	 	TRect textRect(0,10,640,88);
	 	TRect alaPalkki(0,312,800,352);


	     
	     



    // *iExampleText.Format(KFormat1,8);
	
	TRect VkoPalkki(2,31,69,52);
	TRect KKPalkki(20,1,344,29);
	


	gc.SetPenColor(KRgbWhite);  
	gc.DrawText(kuukausi,KKPalkki,24,CGraphicsContext::ELeft, 0);

	fontUsed = iEikonEnv->LegendFont();
	gc.UseFont(fontUsed);

	
	gc.SetPenColor(KRgbBlack);  
	gc.SetPenStyle( CGraphicsContext::ENullPen );
    gc.SetBrushColor( KRgbBlack );
    gc.SetBrushStyle( CGraphicsContext::ESolidBrush );

    
	//Kelloviiva
    gc.SetBrushColor( KRgbRed );
    gc.DrawRect(TRect(KelloViivanAloitusX,KelloViivaY-1,KelloViivanLopetusX,KelloViivaY+1));
    gc.SetBrushColor( KRgbBlack );

    
    if (Laatikot_ma == 0 && Laatikot_ti == 0 && Laatikot_ke == 0 && Laatikot_to == 0 && Laatikot_pe == 0)
    	{
    
    	}
    else
    	{
    gc.DrawRect( cursor );
    	}
    
    if (Laatikot_ma >= 1) {
	gc.SetBrushColor( Maanantai_laatikonvari[1] );
	gc.DrawRect( Maanantailaatikko[1] );
	gc.DrawText(lyhytKuvaus_maanantai1,Maanantailaatikko[1],Maanantailaatikko[1].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
  
		if (Laatikot_ma >= 2) {
			gc.SetBrushColor( Maanantai_laatikonvari[2] );
			gc.DrawRect( Maanantailaatikko[2] );
			gc.DrawText(lyhytKuvaus_maanantai2,Maanantailaatikko[2],Maanantailaatikko[2].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
				
			if (Laatikot_ma >= 3) {
				gc.SetBrushColor( Maanantai_laatikonvari[3] );
				gc.DrawRect( Maanantailaatikko[3] );
				gc.DrawText(lyhytKuvaus_maanantai3,Maanantailaatikko[3],Maanantailaatikko[3].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
					
				if (Laatikot_ma >= 4) {
					gc.SetBrushColor( Maanantai_laatikonvari[4] );
					gc.DrawRect( Maanantailaatikko[4] );
					gc.DrawText(lyhytKuvaus_maanantai4,Maanantailaatikko[4],Maanantailaatikko[4].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						
					if (Laatikot_ma >= 5) {
						gc.SetBrushColor( Maanantai_laatikonvari[5] );
						gc.DrawRect( Maanantailaatikko[5] );
						gc.DrawText(lyhytKuvaus_maanantai5,Maanantailaatikko[5],Maanantailaatikko[5].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
							
						if (Laatikot_ma >= 6) {
						gc.SetBrushColor( Maanantai_laatikonvari[6] );
						gc.DrawRect( Maanantailaatikko[6] );
						gc.DrawText(lyhytKuvaus_maanantai6,Maanantailaatikko[6],Maanantailaatikko[6].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						}
					}
				}
			}
		}
    }

    
    if (Laatikot_ti >= 1) {
	gc.SetBrushColor( Tiistai_laatikonvari[1] );
	gc.DrawRect( Tiistailaatikko[1] );
	gc.DrawText(lyhytKuvaus_tiistai1,Tiistailaatikko[1],Tiistailaatikko[1].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
  
		if (Laatikot_ti >= 2) {
			gc.SetBrushColor( Tiistai_laatikonvari[2] );
			gc.DrawRect( Tiistailaatikko[2] );
			gc.DrawText(lyhytKuvaus_tiistai2,Tiistailaatikko[2],Tiistailaatikko[2].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
				
			if (Laatikot_ti >= 3) {
				gc.SetBrushColor( Tiistai_laatikonvari[3] );
				gc.DrawRect( Tiistailaatikko[3] );
				gc.DrawText(lyhytKuvaus_tiistai3,Tiistailaatikko[3],Tiistailaatikko[3].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
					
				if (Laatikot_ti >= 4) {
					gc.SetBrushColor( Tiistai_laatikonvari[4] );
					gc.DrawRect( Tiistailaatikko[4] );
					gc.DrawText(lyhytKuvaus_tiistai4,Tiistailaatikko[4],Tiistailaatikko[4].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						
					if (Laatikot_ti >= 5) {
						gc.SetBrushColor( Tiistai_laatikonvari[5] );
						gc.DrawRect( Tiistailaatikko[5] );
						gc.DrawText(lyhytKuvaus_tiistai5,Tiistailaatikko[5],Tiistailaatikko[5].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
							
						if (Laatikot_ti >= 6) {
						gc.SetBrushColor( Tiistai_laatikonvari[6] );
						gc.DrawRect( Tiistailaatikko[6] );
						gc.DrawText(lyhytKuvaus_tiistai6,Tiistailaatikko[6],Tiistailaatikko[6].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						}
					}
				}
			}
		}
    }
      
    if (Laatikot_ke >= 1) {
	gc.SetBrushColor( Keskiviikko_laatikonvari[1] );
	gc.DrawRect( Keskiviikkolaatikko[1] );
	gc.DrawText(lyhytKuvaus_keskiviikko1,Keskiviikkolaatikko[1],Keskiviikkolaatikko[1].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
  
		if (Laatikot_ke >= 2) {
			gc.SetBrushColor( Keskiviikko_laatikonvari[2] );
			gc.DrawRect( Keskiviikkolaatikko[2] );
			gc.DrawText(lyhytKuvaus_keskiviikko2,Keskiviikkolaatikko[2],Keskiviikkolaatikko[2].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
				
			if (Laatikot_ke >= 3) {
				gc.SetBrushColor( Keskiviikko_laatikonvari[3] );
				gc.DrawRect( Keskiviikkolaatikko[3] );
				gc.DrawText(lyhytKuvaus_keskiviikko3,Keskiviikkolaatikko[3],Keskiviikkolaatikko[3].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
					
				if (Laatikot_ke >= 4) {
					gc.SetBrushColor( Keskiviikko_laatikonvari[4] );
					gc.DrawRect( Keskiviikkolaatikko[4] );
					gc.DrawText(lyhytKuvaus_keskiviikko4,Keskiviikkolaatikko[4],Keskiviikkolaatikko[4].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						
					if (Laatikot_ke >= 5) {
						gc.SetBrushColor( Keskiviikko_laatikonvari[5] );
						gc.DrawRect( Keskiviikkolaatikko[5] );
						gc.DrawText(lyhytKuvaus_keskiviikko5,Keskiviikkolaatikko[5],Keskiviikkolaatikko[5].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
							
						if (Laatikot_ke >= 6) {
						gc.SetBrushColor( Keskiviikko_laatikonvari[6] );
						gc.DrawRect( Keskiviikkolaatikko[6] );
						gc.DrawText(lyhytKuvaus_keskiviikko6,Keskiviikkolaatikko[6],Keskiviikkolaatikko[6].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						}
					}
				}
			}
		}
    }

    if (Laatikot_to >= 1) {
	gc.SetBrushColor( Torstai_laatikonvari[1] );
	gc.DrawRect( Torstailaatikko[1] );
	gc.DrawText(lyhytKuvaus_torstai1,Torstailaatikko[1],Torstailaatikko[1].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
  
		if (Laatikot_to >= 2) {
			gc.SetBrushColor( Torstai_laatikonvari[2] );
			gc.DrawRect( Torstailaatikko[2] );
			gc.DrawText(lyhytKuvaus_torstai2,Torstailaatikko[2],Torstailaatikko[2].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
				
			if (Laatikot_to >= 3) {
				gc.SetBrushColor( Torstai_laatikonvari[3] );
				gc.DrawRect( Torstailaatikko[3] );
				gc.DrawText(lyhytKuvaus_torstai3,Torstailaatikko[3],Torstailaatikko[3].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
					
				if (Laatikot_to >= 4) {
					gc.SetBrushColor( Torstai_laatikonvari[4] );
					gc.DrawRect( Torstailaatikko[4] );
					gc.DrawText(lyhytKuvaus_torstai4,Torstailaatikko[4],Torstailaatikko[4].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						
					if (Laatikot_to >= 5) {
						gc.SetBrushColor( Torstai_laatikonvari[5] );
						gc.DrawRect( Torstailaatikko[5] );
						gc.DrawText(lyhytKuvaus_torstai5,Torstailaatikko[5],Torstailaatikko[5].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
							
						if (Laatikot_to >= 6) {
						gc.SetBrushColor( Torstai_laatikonvari[6] );
						gc.DrawRect( Torstailaatikko[6] );
						gc.DrawText(lyhytKuvaus_torstai6,Torstailaatikko[6],Torstailaatikko[6].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						}
					}
				}
			}
		}
    }
    if (Laatikot_pe >= 1) {
	gc.SetBrushColor( Perjantai_laatikonvari[1] );
	gc.DrawRect( Perjantailaatikko[1] );
	gc.DrawText(lyhytKuvaus_perjantai1,Perjantailaatikko[1],Perjantailaatikko[1].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
  
		if (Laatikot_pe >= 2) {
			gc.SetBrushColor( Perjantai_laatikonvari[2] );
			gc.DrawRect( Perjantailaatikko[2] );
			gc.DrawText(lyhytKuvaus_perjantai2,Perjantailaatikko[2],Perjantailaatikko[2].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
				
			if (Laatikot_pe >= 3) {
				gc.SetBrushColor( Perjantai_laatikonvari[3] );
				gc.DrawRect( Perjantailaatikko[3] );
				gc.DrawText(lyhytKuvaus_perjantai3,Perjantailaatikko[3],Perjantailaatikko[3].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
					
				if (Laatikot_pe >= 4) {
					gc.SetBrushColor( Perjantai_laatikonvari[4] );
					gc.DrawRect( Perjantailaatikko[4] );
					gc.DrawText(lyhytKuvaus_perjantai4,Perjantailaatikko[4],Perjantailaatikko[4].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						
					if (Laatikot_pe >= 5) {
						gc.SetBrushColor( Perjantai_laatikonvari[5] );
						gc.DrawRect( Perjantailaatikko[5] );
						gc.DrawText(lyhytKuvaus_perjantai5,Perjantailaatikko[5],Perjantailaatikko[5].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
							
						if (Laatikot_pe >= 6) {
						gc.SetBrushColor( Perjantai_laatikonvari[6] );
						gc.DrawRect( Perjantailaatikko[6] );
						gc.DrawText(lyhytKuvaus_perjantai6,Perjantailaatikko[6],Perjantailaatikko[6].Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
						}
					}
				}
			}
		}
    }    
    
   
    
    gc.SetBrushColor( KRgbGray );
    gc.DrawRect( VkoPalkki );
    gc.DrawRect( alaPalkki );

	gc.DrawText(Vko,VkoPalkki,VkoPalkki.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);
	gc.DrawText(alapalkinTeksti1,alaPalkki,alaPalkki.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ELeft, 10);
			   // Finished using the font
	
    gc.SetBrushColor( KRgbGray );
	if (aTime.WeekNoInYear() == WeekNo && aTime.DayNoInWeek() == EMonday) { gc.SetBrushColor( KRgbWhite ); }
	TRect MaanantaiRect(71,31,216,52);
	gc.DrawText(Maanantai,MaanantaiRect,MaanantaiRect.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);

    gc.SetBrushColor( KRgbGray );
	if (aTime.WeekNoInYear() == WeekNo && aTime.DayNoInWeek() == ETuesday) { gc.SetBrushColor( KRgbWhite ); }
	TRect TiistaiRect(217,31,362,52);
	gc.DrawText(Tiistai,TiistaiRect,TiistaiRect.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);

    gc.SetBrushColor( KRgbGray );
	if (aTime.WeekNoInYear() == WeekNo && aTime.DayNoInWeek() == EWednesday) { gc.SetBrushColor( KRgbWhite ); }
	TRect KeskiviikkoRect(363,31,508,52);
	gc.DrawText(Keskiviikko,KeskiviikkoRect,KeskiviikkoRect.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);

    gc.SetBrushColor( KRgbGray );
	if (aTime.WeekNoInYear() == WeekNo && aTime.DayNoInWeek() == EThursday) { gc.SetBrushColor( KRgbWhite ); }
	TRect TorstaiRect(509,31,654,52);
	gc.DrawText(Torstai,TorstaiRect,TorstaiRect.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);

    gc.SetBrushColor( KRgbGray );
	if (aTime.WeekNoInYear() == WeekNo && aTime.DayNoInWeek() == EFriday) { gc.SetBrushColor( KRgbWhite ); }
	TRect PerjantaiRect(655,31,798,52);
	gc.DrawText(Perjantai,PerjantaiRect,PerjantaiRect.Height()/2+(fontUsed->HeightInPixels())/2,CGraphicsContext::ECenter, 0);

	// Finished using the font
	gc.DiscardFont();



	
	
	
    }

// ---------------------------------------------------------
// CScheduleContainer::HandleControlEventL(
//     CCoeControl* aControl,TCoeEvent aEventType)
// ---------------------------------------------------------
//
void CScheduleContainer::HandleControlEventL(
    CCoeControl* /*aControl*/,TCoeEvent /*aEventType*/)
    {
    // TODO: Add your control event handler code here
    }

// ----------------------------------------------------
// CScheduleContainer::HandleKeyEventL(
//     const TKeyEvent& aKeyEvent,TEventCode /*aType*/)
// ----------------------------------------------------
//
TKeyResponse CScheduleContainer::HandleKeyEventL(
    const TKeyEvent& /*aKeyEvent*/,TEventCode /*aType*/)
    {
    return EKeyWasNotConsumed;
    }

// ----------------------------------------------------
// CScheduleContainer::CancelLoad()
// ----------------------------------------------------
//
void CScheduleContainer::CancelLoad()
    {
    iCancelInitDataLoad = ETrue;
    }

// ----------------------------------------------------
// CScheduleContainer::HandleCommandL(TInt aCommand)
// ----------------------------------------------------
//
void CScheduleContainer::HandleCommandL(TInt aCommand)
{
    switch ( aCommand )
    {
/*    	case EAknSoftkeyBack:
        {
            if (iBrCtlInterface != NULL)
            {
            iBrCtlInterface = NULL;
                 DrawNow();
            }
            break;
        }
        case EScheduleCmdAppOpen:
        {
            if (iBrCtlInterface == NULL)
            {
				BasicBrowserControlL(x, y);
            }
			break;
        }
        case EScheduleCmdAppAbout:
        {
            if (iBrCtlInterface != NULL)
            {
				iBrCtlInterface = NULL;
				DrawNow();
            }
			OpenAboutBoxL();
 			break;
       }*/
   }
}

// ----------------------------------------------------
// CScheduleContainer::DynInitMenuPaneL(
//           TInt aResourceId, CEikMenuPane* aMenuPane)
// ----------------------------------------------------
//
void 
CScheduleContainer::DynInitMenuPaneL(TInt aResourceId, CEikMenuPane* aMenuPane)
    {
    if (iBrCtlInterface && aResourceId == R_SCHEDULE_MENU )
        {
        iBrCtlInterface->AddOptionMenuItemsL(*aMenuPane, aResourceId);
        RPointerArray<TBrCtlWmlServiceOption>* options;
        options = iBrCtlInterface->WMLOptionMenuItemsL();
        TInt i;
        TInt count = options->Count();
        for (i = 0; i < count; i++)
            {
            TBrCtlWmlServiceOption* option = (*options)[i];
            if (option != NULL)
                {
                CEikMenuPaneItem::SData item;
                item.iText.Copy(option->Text());
                item.iCommandId = option->ElemID();
                item.iFlags = 0;
                item.iCascadeId = 0;
                aMenuPane->InsertMenuItemL(item, 0);
                }
            }
        }
    }


// ----------------------------------------------------
// CScheduleContainer::ReadFileLC(const TDesC& aFileName)
// ----------------------------------------------------
//
HBufC8* 
CScheduleContainer::ReadFileLC(const TDesC& aFileName)
    {
    RFs rfs;
    RFile file;
    User::LeaveIfError(rfs.Connect());
    CleanupClosePushL(rfs);
    User::LeaveIfError(file.Open(rfs, aFileName, EFileRead));
    CleanupClosePushL(file);
    TInt size;
    User::LeaveIfError(file.Size(size));
    HBufC8* buf = HBufC8::NewLC(size);
    TPtr8 bufPtr(buf->Des());
    User::LeaveIfError(file.Read(bufPtr));
    CleanupStack::Pop(); // buf
    CleanupStack::PopAndDestroy(2); // file, rfs
    CleanupStack::PushL(buf);
    return buf;
    }

// ----------------------------------------------------
// CScheduleContainer::BasicBrowserControlL()
// ----------------------------------------------------
//
void 
CScheduleContainer::BasicBrowserControlL(TInt x, TInt y)
    {
   }


void 
CScheduleContainer::OpenAboutBoxL()
    {
    if (iBrCtlInterface == NULL) {
    
    
				TRect rect(120,10, 640,264);//Position(), Size());
				iBrCtlInterface = CreateBrowserControlL( this, 
				rect, 
				TBrCtlDefs::ECapabilityDisplayScrollBar,
				iCommandBase, 
				NULL, 
				NULL,
				NULL, 
				NULL,
				NULL);
				
				_LIT(KUrl, "file:///C:\\private\\2002AA26\\about.html");
				iBrCtlInterface->LoadUrlL(KUrl);
	
		}
   }

void CScheduleContainer::Week1() {}
void CScheduleContainer::Week2() {}
void CScheduleContainer::Week3() {}
void CScheduleContainer::Week4() {}
void CScheduleContainer::Week5() {}
void CScheduleContainer::Week6() {}
void CScheduleContainer::Week7() {}
void CScheduleContainer::Week8() {}
void CScheduleContainer::Week9() {}
void CScheduleContainer::Week10() {}
void CScheduleContainer::Week11() {}
void CScheduleContainer::Week12() {}
void CScheduleContainer::Week13() {}
void CScheduleContainer::Week14() {}
void CScheduleContainer::Week15() {}
void CScheduleContainer::Week16() {}
void CScheduleContainer::Week17() {}
void CScheduleContainer::Week18() {}
void CScheduleContainer::Week19() {}
void CScheduleContainer::Week20() {}
void CScheduleContainer::Week21() {}
void CScheduleContainer::Week22() {}
void CScheduleContainer::Week23() {}
void CScheduleContainer::Week24() {}
void CScheduleContainer::Week25() {}
void CScheduleContainer::Week26() {}
void CScheduleContainer::Week27() {}
void CScheduleContainer::Week28() {}
void CScheduleContainer::Week29() {}
void CScheduleContainer::Week30() {}
void CScheduleContainer::Week31() {}
void CScheduleContainer::Week32() {}


void CScheduleContainer::Week39() {}
void CScheduleContainer::Week40() {}
void CScheduleContainer::Week41() {}
void CScheduleContainer::Week42() {}
void CScheduleContainer::Week43() {}
void CScheduleContainer::Week44() {}
void CScheduleContainer::Week45() {}
void CScheduleContainer::Week46() {}
void CScheduleContainer::Week47() {}
void CScheduleContainer::Week48() {}
void CScheduleContainer::Week49() {}
void CScheduleContainer::Week50() {}
void CScheduleContainer::Week51() {}
void CScheduleContainer::Week52() {}
void CScheduleContainer::Week53() {}
void CScheduleContainer::Week54() {}

// End of File  

