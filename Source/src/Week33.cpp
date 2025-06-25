#include "ScheduleContainer.h"
#include <Week33.rsg>
#include <COEMAIN.H>


void CScheduleContainer::Week33()
	{
	
	Laatikot_ma = 0;
	
	TInt KloMa1[4] = { 8,15, 9,00 };

	
	//Laatikko 1
	Aloitus_h_maanantai[1] = KloMa1[0]           ;
	Aloitus_min_maanantai[1] = KloMa1[1]         ;
	Lopetus_h_maanantai[1] = KloMa1[2]           ;
	Lopetus_min_maanantai[1] = KloMa1[3]         ;
	Maanantai_laatikonvari[1] = KRgbBlue;
	
	//Laatikko 2
	Aloitus_h_maanantai[2] = 9           ;
	Aloitus_min_maanantai[2] = 15         ;
	Lopetus_h_maanantai[2] = 10          ;
	Lopetus_min_maanantai[2] = 0         ;
	Maanantai_laatikonvari[2] = KRgbGreen;

	//Laatikko 3
	Aloitus_h_maanantai[3] = 10           ;
	Aloitus_min_maanantai[3] = 15         ;
	Lopetus_h_maanantai[3] = 11           ;
	Lopetus_min_maanantai[3] = 0         ;
	Maanantai_laatikonvari[3] = KRgbRed;

	//Laatikko 4
	Aloitus_h_maanantai[4] = 11           ;
	Aloitus_min_maanantai[4] = 15         ;
	Lopetus_h_maanantai[4] = 12           ;
	Lopetus_min_maanantai[4] = 0         ;
	Maanantai_laatikonvari[4] = KRgbYellow;

	//Laatikko 5
	Aloitus_h_maanantai[5] = 12           ;
	Aloitus_min_maanantai[5] = 15         ;
	Lopetus_h_maanantai[5] = 13           ;
	Lopetus_min_maanantai[5] = 0         ;
	Maanantai_laatikonvari[5] = KRgbGray;

	//Laatikko 6
	Aloitus_h_maanantai[6] = 13           ;
	Aloitus_min_maanantai[6] = 15         ;
	Lopetus_h_maanantai[6] = 14           ;
	Lopetus_min_maanantai[6] = 0         ;
	Maanantai_laatikonvari[6] = KRgbGreen;

		Laatikot_ti = 0;
		
		//Laatikko 1
		Aloitus_h_tiistai[1] = 8           ;
		Aloitus_min_tiistai[1] = 15         ;
		Lopetus_h_tiistai[1] = 9           ;
		Lopetus_min_tiistai[1] = 0         ;
		Tiistai_laatikonvari[1] = KRgbBlue;
		
		//Laatikko 2
		Aloitus_h_tiistai[2] = 9           ;
		Aloitus_min_tiistai[2] = 15         ;
		Lopetus_h_tiistai[2] = 10          ;
		Lopetus_min_tiistai[2] = 0         ;
		Tiistai_laatikonvari[2] = KRgbGreen;
	
		//Laatikko 3
		Aloitus_h_tiistai[3] = 10           ;
		Aloitus_min_tiistai[3] = 15         ;
		Lopetus_h_tiistai[3] = 11           ;
		Lopetus_min_tiistai[3] = 0         ;
		Tiistai_laatikonvari[3] = KRgbRed;
	
		//Laatikko 4
		Aloitus_h_tiistai[4] = 11           ;
		Aloitus_min_tiistai[4] = 15         ;
		Lopetus_h_tiistai[4] = 12           ;
		Lopetus_min_tiistai[4] = 0         ;
		Tiistai_laatikonvari[4] = KRgbYellow;
	
		//Laatikko 5
		Aloitus_h_tiistai[5] = 12           ;
		Aloitus_min_tiistai[5] = 15         ;
		Lopetus_h_tiistai[5] = 13           ;
		Lopetus_min_tiistai[5] = 0         ;
		Tiistai_laatikonvari[5] = KRgbGray;
	
		//Laatikko 6
		Aloitus_h_tiistai[6] = 13           ;
		Aloitus_min_tiistai[6] = 15         ;
		Lopetus_h_tiistai[6] = 14           ;
		Lopetus_min_tiistai[6] = 0         ;
		Tiistai_laatikonvari[6] = KRgbGreen;	

			Laatikot_ke = 0;
			
			//Laatikko 1
			Aloitus_h_keskiviikko[1] = 8           ;
			Aloitus_min_keskiviikko[1] = 15         ;
			Lopetus_h_keskiviikko[1] = 9           ;
			Lopetus_min_keskiviikko[1] = 0         ;
			Keskiviikko_laatikonvari[1] = KRgbBlue;
			
			//Laatikko 2
			Aloitus_h_keskiviikko[2] = 9           ;
			Aloitus_min_keskiviikko[2] = 15         ;
			Lopetus_h_keskiviikko[2] = 10          ;
			Lopetus_min_keskiviikko[2] = 0         ;
			Keskiviikko_laatikonvari[2] = KRgbGreen;
		
			//Laatikko 3
			Aloitus_h_keskiviikko[3] = 10           ;
			Aloitus_min_keskiviikko[3] = 15         ;
			Lopetus_h_keskiviikko[3] = 11           ;
			Lopetus_min_keskiviikko[3] = 0         ;
			Keskiviikko_laatikonvari[3] = KRgbRed;
		
			//Laatikko 4
			Aloitus_h_keskiviikko[4] = 11           ;
			Aloitus_min_keskiviikko[4] = 15         ;
			Lopetus_h_keskiviikko[4] = 12           ;
			Lopetus_min_keskiviikko[4] = 0         ;
			Keskiviikko_laatikonvari[4] = KRgbYellow;
		
			//Laatikko 5
			Aloitus_h_keskiviikko[5] = 12           ;
			Aloitus_min_keskiviikko[5] = 15         ;
			Lopetus_h_keskiviikko[5] = 13           ;
			Lopetus_min_keskiviikko[5] = 0         ;
			Keskiviikko_laatikonvari[5] = KRgbGray;
		
			//Laatikko 6
			Aloitus_h_keskiviikko[6] = 13           ;
			Aloitus_min_keskiviikko[6] = 15         ;
			Lopetus_h_keskiviikko[6] = 14           ;
			Lopetus_min_keskiviikko[6] = 0         ;
			Keskiviikko_laatikonvari[6] = KRgbGreen;	
	
				Laatikot_to = 0;
				
				//Laatikko 1
				Aloitus_h_torstai[1] = 8           ;
				Aloitus_min_torstai[1] = 15         ;
				Lopetus_h_torstai[1] = 9           ;
				Lopetus_min_torstai[1] = 0         ;
				Torstai_laatikonvari[1] = KRgbBlue;
				
				//Laatikko 2
				Aloitus_h_torstai[2] = 9           ;
				Aloitus_min_torstai[2] = 15         ;
				Lopetus_h_torstai[2] = 10          ;
				Lopetus_min_torstai[2] = 0         ;
				Torstai_laatikonvari[2] = KRgbGreen;
			
				//Laatikko 3
				Aloitus_h_torstai[3] = 10           ;
				Aloitus_min_torstai[3] = 15         ;
				Lopetus_h_torstai[3] = 11           ;
				Lopetus_min_torstai[3] = 0         ;
				Torstai_laatikonvari[3] = KRgbRed;
			
				//Laatikko 4
				Aloitus_h_torstai[4] = 11           ;
				Aloitus_min_torstai[4] = 15         ;
				Lopetus_h_torstai[4] = 12           ;
				Lopetus_min_torstai[4] = 0         ;
				Torstai_laatikonvari[4] = KRgbYellow;
			
				//Laatikko 5
				Aloitus_h_torstai[5] = 12           ;
				Aloitus_min_torstai[5] = 15         ;
				Lopetus_h_torstai[5] = 13           ;
				Lopetus_min_torstai[5] = 0         ;
				Torstai_laatikonvari[5] = KRgbGray;
			
				//Laatikko 6
				Aloitus_h_torstai[6] = 13           ;
				Aloitus_min_torstai[6] = 15         ;
				Lopetus_h_torstai[6] = 14           ;
				Lopetus_min_torstai[6] = 0         ;
				Torstai_laatikonvari[6] = KRgbGreen;	
	
				Laatikot_pe = 0;
				
				//Laatikko 1
				Aloitus_h_perjantai[1] = 8           ;
				Aloitus_min_perjantai[1] = 15         ;
				Lopetus_h_perjantai[1] = 9           ;
				Lopetus_min_perjantai[1] = 0         ;
				Perjantai_laatikonvari[1] = KRgbBlue;
				
				//Laatikko 2
				Aloitus_h_perjantai[2] = 9           ;
				Aloitus_min_perjantai[2] = 15         ;
				Lopetus_h_perjantai[2] = 10          ;
				Lopetus_min_perjantai[2] = 0         ;
				Perjantai_laatikonvari[2] = KRgbGreen;
			
				//Laatikko 3
				Aloitus_h_perjantai[3] = 10           ;
				Aloitus_min_perjantai[3] = 15         ;
				Lopetus_h_perjantai[3] = 11           ;
				Lopetus_min_perjantai[3] = 0         ;
				Perjantai_laatikonvari[3] = KRgbRed;
			
				//Laatikko 4
				Aloitus_h_perjantai[4] = 11           ;
				Aloitus_min_perjantai[4] = 15         ;
				Lopetus_h_perjantai[4] = 12           ;
				Lopetus_min_perjantai[4] = 0         ;
				Perjantai_laatikonvari[4] = KRgbYellow;
			
				//Laatikko 5
				Aloitus_h_perjantai[5] = 12           ;
				Aloitus_min_perjantai[5] = 15         ;
				Lopetus_h_perjantai[5] = 13           ;
				Lopetus_min_perjantai[5] = 0         ;
				Perjantai_laatikonvari[5] = KRgbGray;
			
				//Laatikko 6
				Aloitus_h_perjantai[6] = 13           ;
				Aloitus_min_perjantai[6] = 15         ;
				Lopetus_h_perjantai[6] = 14           ;
				Lopetus_min_perjantai[6] = 0         ;
				Perjantai_laatikonvari[6] = KRgbGreen;	
Laskut();

_LIT(KAt," @ ");

resourceOffset = iCoeEnv->AddResourceFileL( _L( "C:\\private\\2002AA26\\week33.rsc" ));

 iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai1, R_LYHYT_TEKSTI_MAANANTAI1); 
 iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai2, R_LYHYT_TEKSTI_MAANANTAI1); 
iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai2, R_LYHYT_TEKSTI_MAANANTAI2); 
iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai3, R_LYHYT_TEKSTI_MAANANTAI3); 
iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai4, R_LYHYT_TEKSTI_MAANANTAI4); 
iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai5, R_LYHYT_TEKSTI_MAANANTAI5); 
iCoeEnv->ReadResourceL(lyhytKuvaus_maanantai6, R_LYHYT_TEKSTI_MAANANTAI6); 

iCoeEnv->ReadResourceL(lyhytKuvaus_tiistai1, R_LYHYT_TEKSTI_TIISTAI1);
iCoeEnv->ReadResourceL(lyhytKuvaus_tiistai2, R_LYHYT_TEKSTI_TIISTAI2); 
iCoeEnv->ReadResourceL(lyhytKuvaus_tiistai3, R_LYHYT_TEKSTI_TIISTAI3); 
iCoeEnv->ReadResourceL(lyhytKuvaus_tiistai4, R_LYHYT_TEKSTI_TIISTAI4); 
iCoeEnv->ReadResourceL(lyhytKuvaus_tiistai5, R_LYHYT_TEKSTI_TIISTAI5); 
iCoeEnv->ReadResourceL(lyhytKuvaus_tiistai6, R_LYHYT_TEKSTI_TIISTAI6); 

iCoeEnv->ReadResourceL(lyhytKuvaus_keskiviikko1, R_LYHYT_TEKSTI_KESKIVIIKKO1);
iCoeEnv->ReadResourceL(lyhytKuvaus_keskiviikko2, R_LYHYT_TEKSTI_KESKIVIIKKO2); 
iCoeEnv->ReadResourceL(lyhytKuvaus_keskiviikko3, R_LYHYT_TEKSTI_KESKIVIIKKO3); 
iCoeEnv->ReadResourceL(lyhytKuvaus_keskiviikko4, R_LYHYT_TEKSTI_KESKIVIIKKO4); 
iCoeEnv->ReadResourceL(lyhytKuvaus_keskiviikko5, R_LYHYT_TEKSTI_KESKIVIIKKO5); 
iCoeEnv->ReadResourceL(lyhytKuvaus_keskiviikko6, R_LYHYT_TEKSTI_KESKIVIIKKO6); 

iCoeEnv->ReadResourceL(lyhytKuvaus_torstai1, R_LYHYT_TEKSTI_TORSTAI1);
iCoeEnv->ReadResourceL(lyhytKuvaus_torstai2, R_LYHYT_TEKSTI_TORSTAI2); 
iCoeEnv->ReadResourceL(lyhytKuvaus_torstai3, R_LYHYT_TEKSTI_TORSTAI3); 
iCoeEnv->ReadResourceL(lyhytKuvaus_torstai4, R_LYHYT_TEKSTI_TORSTAI4); 
iCoeEnv->ReadResourceL(lyhytKuvaus_torstai5, R_LYHYT_TEKSTI_TORSTAI5); 
iCoeEnv->ReadResourceL(lyhytKuvaus_torstai6, R_LYHYT_TEKSTI_TORSTAI6); 
	
iCoeEnv->ReadResourceL(lyhytKuvaus_perjantai1, R_LYHYT_TEKSTI_PERJANTAI1);
iCoeEnv->ReadResourceL(lyhytKuvaus_perjantai2, R_LYHYT_TEKSTI_PERJANTAI2); 
iCoeEnv->ReadResourceL(lyhytKuvaus_perjantai3, R_LYHYT_TEKSTI_PERJANTAI3); 
iCoeEnv->ReadResourceL(lyhytKuvaus_perjantai4, R_LYHYT_TEKSTI_PERJANTAI4); 
iCoeEnv->ReadResourceL(lyhytKuvaus_perjantai5, R_LYHYT_TEKSTI_PERJANTAI5); 
iCoeEnv->ReadResourceL(lyhytKuvaus_perjantai6, R_LYHYT_TEKSTI_PERJANTAI6); 


alapalkinTeksti1.Zero();


if(cursorPosx == 1 && cursorPosy == 1)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_maanantai1, R_PITKA_TEKSTI_MAANANTAI1);
	iCoeEnv->ReadResourceL(paikka_maanantai1, R_PAIKKA_MAANANTAI1);
	alapalkinTeksti1.Append(Aloitusaika_maanantai1);
	alapalkinTeksti1.Append(Lopetusaika_maanantai1);
	alapalkinTeksti1.Append(pitkaKuvaus_maanantai1);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_maanantai1);
	}

if (cursorPosx == 1 && cursorPosy == 2)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_maanantai2, R_PITKA_TEKSTI_MAANANTAI2);
	iCoeEnv->ReadResourceL(paikka_maanantai2, R_PAIKKA_MAANANTAI2);
	alapalkinTeksti1.Append(Aloitusaika_maanantai2);
	alapalkinTeksti1.Append(Lopetusaika_maanantai2);
	alapalkinTeksti1.Append(pitkaKuvaus_maanantai2);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_maanantai2);
	}

if (cursorPosx == 1 && cursorPosy == 3)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_maanantai3, R_PITKA_TEKSTI_MAANANTAI3);
	iCoeEnv->ReadResourceL(paikka_maanantai3, R_PAIKKA_MAANANTAI3);
	alapalkinTeksti1.Append(Aloitusaika_maanantai3);
	alapalkinTeksti1.Append(Lopetusaika_maanantai3);
	alapalkinTeksti1.Append(pitkaKuvaus_maanantai3);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_maanantai3);
	}

if (cursorPosx == 1 && cursorPosy == 4)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_maanantai4, R_PITKA_TEKSTI_MAANANTAI4);
	iCoeEnv->ReadResourceL(paikka_maanantai4, R_PAIKKA_MAANANTAI4);
	alapalkinTeksti1.Append(Aloitusaika_maanantai4);
	alapalkinTeksti1.Append(Lopetusaika_maanantai4);
	alapalkinTeksti1.Append(pitkaKuvaus_maanantai4);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_maanantai4);
	}

if (cursorPosx == 1 && cursorPosy == 5)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_maanantai5, R_PITKA_TEKSTI_MAANANTAI5);
	iCoeEnv->ReadResourceL(paikka_maanantai5, R_PAIKKA_MAANANTAI5);
	alapalkinTeksti1.Append(Aloitusaika_maanantai5);
	alapalkinTeksti1.Append(Lopetusaika_maanantai5);
	alapalkinTeksti1.Append(pitkaKuvaus_maanantai5);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_maanantai5);
	}

if (cursorPosx == 1 && cursorPosy == 6)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_maanantai6, R_PITKA_TEKSTI_MAANANTAI6);
	iCoeEnv->ReadResourceL(paikka_maanantai6, R_PAIKKA_MAANANTAI6);
	alapalkinTeksti1.Append(Aloitusaika_maanantai6);
	alapalkinTeksti1.Append(Lopetusaika_maanantai6);
	alapalkinTeksti1.Append(pitkaKuvaus_maanantai6);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_maanantai6);
}






if(cursorPosx == 2 && cursorPosy == 1)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_tiistai1, R_PITKA_TEKSTI_TIISTAI1);
	iCoeEnv->ReadResourceL(paikka_tiistai1, R_PAIKKA_TIISTAI1);
	alapalkinTeksti1.Append(Aloitusaika_tiistai1);
	alapalkinTeksti1.Append(Lopetusaika_tiistai1);
	alapalkinTeksti1.Append(pitkaKuvaus_tiistai1);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_tiistai1);
	}

if (cursorPosx == 2 && cursorPosy == 2)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_tiistai2, R_PITKA_TEKSTI_TIISTAI2);
	iCoeEnv->ReadResourceL(paikka_tiistai2, R_PAIKKA_TIISTAI2);
	alapalkinTeksti1.Append(Aloitusaika_tiistai2);
	alapalkinTeksti1.Append(Lopetusaika_tiistai2);
	alapalkinTeksti1.Append(pitkaKuvaus_tiistai2);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_tiistai2);
	}

if (cursorPosx == 2 && cursorPosy == 3)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_tiistai3, R_PITKA_TEKSTI_TIISTAI3);
	iCoeEnv->ReadResourceL(paikka_tiistai3, R_PAIKKA_TIISTAI3);
	alapalkinTeksti1.Append(Aloitusaika_tiistai3);
	alapalkinTeksti1.Append(Lopetusaika_tiistai3);
	alapalkinTeksti1.Append(pitkaKuvaus_tiistai3);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_tiistai3);
	}

if (cursorPosx == 2 && cursorPosy == 4)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_tiistai4, R_PITKA_TEKSTI_TIISTAI4);
	iCoeEnv->ReadResourceL(paikka_tiistai4, R_PAIKKA_TIISTAI4);
	alapalkinTeksti1.Append(Aloitusaika_tiistai4);
	alapalkinTeksti1.Append(Lopetusaika_tiistai4);
	alapalkinTeksti1.Append(pitkaKuvaus_tiistai4);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_tiistai4);
	}

if (cursorPosx == 2 && cursorPosy == 5)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_tiistai5, R_PITKA_TEKSTI_TIISTAI5);
	iCoeEnv->ReadResourceL(paikka_tiistai5, R_PAIKKA_TIISTAI5);
	alapalkinTeksti1.Append(Aloitusaika_tiistai5);
	alapalkinTeksti1.Append(Lopetusaika_tiistai5);
	alapalkinTeksti1.Append(pitkaKuvaus_tiistai5);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_tiistai5);
	}

if (cursorPosx == 2 && cursorPosy == 6)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_tiistai6, R_PITKA_TEKSTI_TIISTAI6);
	iCoeEnv->ReadResourceL(paikka_tiistai6, R_PAIKKA_TIISTAI6);
	alapalkinTeksti1.Append(Aloitusaika_tiistai6);
	alapalkinTeksti1.Append(Lopetusaika_tiistai6);
	alapalkinTeksti1.Append(pitkaKuvaus_tiistai6);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_tiistai6);
}    


//Keskiviikko
if(cursorPosx == 3 && cursorPosy == 1)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_keskiviikko1, R_PITKA_TEKSTI_KESKIVIIKKO1);
	iCoeEnv->ReadResourceL(paikka_keskiviikko1, R_PAIKKA_KESKIVIIKKO1);
	alapalkinTeksti1.Append(Aloitusaika_keskiviikko1);
	alapalkinTeksti1.Append(Lopetusaika_keskiviikko1);
	alapalkinTeksti1.Append(pitkaKuvaus_keskiviikko1);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_keskiviikko1);
	}

if (cursorPosx == 3 && cursorPosy == 2)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_keskiviikko2, R_PITKA_TEKSTI_KESKIVIIKKO2);
	iCoeEnv->ReadResourceL(paikka_keskiviikko2, R_PAIKKA_KESKIVIIKKO2);
	alapalkinTeksti1.Append(Aloitusaika_keskiviikko2);
	alapalkinTeksti1.Append(Lopetusaika_keskiviikko2);
	alapalkinTeksti1.Append(pitkaKuvaus_keskiviikko2);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_keskiviikko2);
	}

if (cursorPosx == 3 && cursorPosy == 3)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_keskiviikko3, R_PITKA_TEKSTI_KESKIVIIKKO3);
	iCoeEnv->ReadResourceL(paikka_keskiviikko3, R_PAIKKA_KESKIVIIKKO3);
	alapalkinTeksti1.Append(Aloitusaika_keskiviikko3);
	alapalkinTeksti1.Append(Lopetusaika_keskiviikko3);
	alapalkinTeksti1.Append(pitkaKuvaus_keskiviikko3);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_keskiviikko3);
	}

if (cursorPosx == 3 && cursorPosy == 4)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_keskiviikko4, R_PITKA_TEKSTI_KESKIVIIKKO4);
	iCoeEnv->ReadResourceL(paikka_keskiviikko4, R_PAIKKA_KESKIVIIKKO4);
	alapalkinTeksti1.Append(Aloitusaika_keskiviikko4);
	alapalkinTeksti1.Append(Lopetusaika_keskiviikko4);
	alapalkinTeksti1.Append(pitkaKuvaus_keskiviikko4);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_keskiviikko4);
	}

if (cursorPosx == 3 && cursorPosy == 5)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_keskiviikko5, R_PITKA_TEKSTI_KESKIVIIKKO5);
	iCoeEnv->ReadResourceL(paikka_keskiviikko5, R_PAIKKA_KESKIVIIKKO5);
	alapalkinTeksti1.Append(Aloitusaika_keskiviikko5);
	alapalkinTeksti1.Append(Lopetusaika_keskiviikko5);
	alapalkinTeksti1.Append(pitkaKuvaus_keskiviikko5);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_keskiviikko5);
	}

if (cursorPosx == 3 && cursorPosy == 6)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_keskiviikko6, R_PITKA_TEKSTI_KESKIVIIKKO6);
	iCoeEnv->ReadResourceL(paikka_keskiviikko6, R_PAIKKA_KESKIVIIKKO6);
	alapalkinTeksti1.Append(Aloitusaika_keskiviikko6);
	alapalkinTeksti1.Append(Lopetusaika_keskiviikko6);
	alapalkinTeksti1.Append(pitkaKuvaus_keskiviikko6);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_keskiviikko6);
}    

//Torstai
if(cursorPosx == 4 && cursorPosy == 1)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_torstai1, R_PITKA_TEKSTI_TORSTAI1);
	iCoeEnv->ReadResourceL(paikka_torstai1, R_PAIKKA_TORSTAI1);
	alapalkinTeksti1.Append(Aloitusaika_torstai1);
	alapalkinTeksti1.Append(Lopetusaika_torstai1);
	alapalkinTeksti1.Append(pitkaKuvaus_torstai1);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_torstai1);
	}

if (cursorPosx == 4 && cursorPosy == 2)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_torstai2, R_PITKA_TEKSTI_TORSTAI2);
	iCoeEnv->ReadResourceL(paikka_torstai2, R_PAIKKA_TORSTAI2);
	alapalkinTeksti1.Append(Aloitusaika_torstai2);
	alapalkinTeksti1.Append(Lopetusaika_torstai2);
	alapalkinTeksti1.Append(pitkaKuvaus_torstai2);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_torstai2);
	}

if (cursorPosx == 4 && cursorPosy == 3)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_torstai3, R_PITKA_TEKSTI_TORSTAI3);
	iCoeEnv->ReadResourceL(paikka_torstai3, R_PAIKKA_TORSTAI3);
	alapalkinTeksti1.Append(Aloitusaika_torstai3);
	alapalkinTeksti1.Append(Lopetusaika_torstai3);
	alapalkinTeksti1.Append(pitkaKuvaus_torstai3);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_torstai3);
	}

if (cursorPosx == 4 && cursorPosy == 4)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_torstai4, R_PITKA_TEKSTI_TORSTAI4);
	iCoeEnv->ReadResourceL(paikka_torstai4, R_PAIKKA_TORSTAI4);
	alapalkinTeksti1.Append(Aloitusaika_torstai4);
	alapalkinTeksti1.Append(Lopetusaika_torstai4);
	alapalkinTeksti1.Append(pitkaKuvaus_torstai4);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_torstai4);
	}

if (cursorPosx == 4 && cursorPosy == 5)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_torstai5, R_PITKA_TEKSTI_TORSTAI5);
	iCoeEnv->ReadResourceL(paikka_torstai5, R_PAIKKA_TORSTAI5);
	alapalkinTeksti1.Append(Aloitusaika_torstai5);
	alapalkinTeksti1.Append(Lopetusaika_torstai5);
	alapalkinTeksti1.Append(pitkaKuvaus_torstai5);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_torstai5);
	}

if (cursorPosx == 4 && cursorPosy == 6)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_torstai6, R_PITKA_TEKSTI_TORSTAI6);
	iCoeEnv->ReadResourceL(paikka_torstai6, R_PAIKKA_TORSTAI6);
	alapalkinTeksti1.Append(Aloitusaika_torstai6);
	alapalkinTeksti1.Append(Lopetusaika_torstai6);
	alapalkinTeksti1.Append(pitkaKuvaus_torstai6);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_torstai6);
}    


//Perjantai
if(cursorPosx == 5 && cursorPosy == 1)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_perjantai1, R_PITKA_TEKSTI_PERJANTAI1);
	iCoeEnv->ReadResourceL(paikka_perjantai1, R_PAIKKA_PERJANTAI1);
	alapalkinTeksti1.Append(Aloitusaika_perjantai1);
	alapalkinTeksti1.Append(Lopetusaika_perjantai1);
	alapalkinTeksti1.Append(pitkaKuvaus_perjantai1);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_perjantai1);
	}

if (cursorPosx == 5 && cursorPosy == 2)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_perjantai2, R_PITKA_TEKSTI_PERJANTAI2);
	iCoeEnv->ReadResourceL(paikka_perjantai2, R_PAIKKA_PERJANTAI2);
	alapalkinTeksti1.Append(Aloitusaika_perjantai2);
	alapalkinTeksti1.Append(Lopetusaika_perjantai2);
	alapalkinTeksti1.Append(pitkaKuvaus_perjantai2);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_perjantai2);
	}

if (cursorPosx == 5 && cursorPosy == 3)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_perjantai3, R_PITKA_TEKSTI_PERJANTAI3);
	iCoeEnv->ReadResourceL(paikka_perjantai3, R_PAIKKA_PERJANTAI3);
	alapalkinTeksti1.Append(Aloitusaika_perjantai3);
	alapalkinTeksti1.Append(Lopetusaika_perjantai3);
	alapalkinTeksti1.Append(pitkaKuvaus_perjantai3);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_perjantai3);
	}

if (cursorPosx == 5 && cursorPosy == 4)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_perjantai4, R_PITKA_TEKSTI_PERJANTAI4);
	iCoeEnv->ReadResourceL(paikka_perjantai4, R_PAIKKA_PERJANTAI4);
	alapalkinTeksti1.Append(Aloitusaika_perjantai4);
	alapalkinTeksti1.Append(Lopetusaika_perjantai4);
	alapalkinTeksti1.Append(pitkaKuvaus_perjantai4);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_perjantai4);
	}

if (cursorPosx == 5 && cursorPosy == 5)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_perjantai5, R_PITKA_TEKSTI_PERJANTAI5);
	iCoeEnv->ReadResourceL(paikka_perjantai5, R_PAIKKA_PERJANTAI5);
	alapalkinTeksti1.Append(Aloitusaika_perjantai5);
	alapalkinTeksti1.Append(Lopetusaika_perjantai5);
	alapalkinTeksti1.Append(pitkaKuvaus_perjantai5);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_perjantai5);
	}

if (cursorPosx == 5 && cursorPosy == 6)
	{
	iCoeEnv->ReadResourceL(pitkaKuvaus_perjantai6, R_PITKA_TEKSTI_PERJANTAI6);
	iCoeEnv->ReadResourceL(paikka_perjantai6, R_PAIKKA_PERJANTAI6);
	alapalkinTeksti1.Append(Aloitusaika_perjantai6);
	alapalkinTeksti1.Append(Lopetusaika_perjantai6);
	alapalkinTeksti1.Append(pitkaKuvaus_perjantai6);
	alapalkinTeksti1.Append(KAt);
	alapalkinTeksti1.Append(paikka_perjantai6);
}        
iCoeEnv->DeleteResourceFile(resourceOffset);
DrawNow();
	}


