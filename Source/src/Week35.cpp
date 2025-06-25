#include "ScheduleContainer.h"
#include <Schedule.rsg>
#include <Week35.rsg>
#include <COEMAIN.H>


void CScheduleContainer::Week35()
	{
	
	resourceOffset = iCoeEnv->AddResourceFileL( _L( "C:\\private\\2002AA26\\week35.rsc" ));
	
	Laatikot_ma = 0;	Laatikot_ti = 0;	Laatikot_ke = 0;	Laatikot_to = 0;	Laatikot_pe = 0;
	
	TInt KloMa1[4] = { 0,0  ,  0,0 };	TInt KloTi1[4] = { 0,0  ,  0,0 };	TInt KloKe1[4] = { 0,0  ,  0,0 };
	TInt KloMa2[4] = { 0,0  ,  0,0 };	TInt KloTi2[4] = { 0,0  ,  0,0 };	TInt KloKe2[4] = { 0,0  ,  0,0 };
	TInt KloMa3[4] = { 0,0  ,  0,0 };	TInt KloTi3[4] = { 0,0  ,  0,0 };	TInt KloKe3[4] = { 0,0  ,  0,0 };
	TInt KloMa4[4] = { 0,0  ,  0,0 };	TInt KloTi4[4] = { 0,0  ,  0,0 };	TInt KloKe4[4] = { 0,0  ,  0,0 };
	TInt KloMa5[4] = { 0,0  ,  0,0 };	TInt KloTi5[4] = { 0,0  ,  0,0 };	TInt KloKe5[4] = { 0,0  ,  0,0 };
	TInt KloMa6[4] = { 0,0  ,  0,0 };	TInt KloTi6[4] = { 0,0  ,  0,0 };	TInt KloKe6[4] = { 0,0  ,  0,0 };
			
	TInt KloTo1[4] = { 0,0  ,  0,0 };	TInt KloPe1[4] = { 0,0  ,  0,0 };	
	TInt KloTo2[4] = { 0,0  ,  0,0 };	TInt KloPe2[4] = { 0,0  ,  0,0 };	
	TInt KloTo3[4] = { 0,0  ,  0,0 };	TInt KloPe3[4] = { 0,0  ,  0,0 };	
	TInt KloTo4[4] = { 0,0  ,  0,0 };	TInt KloPe4[4] = { 0,0  ,  0,0 };	
	TInt KloTo5[4] = { 0,0  ,  0,0 };	TInt KloPe5[4] = { 0,0  ,  0,0 };	
	TInt KloTo6[4] = { 0,0  ,  0,0 };	TInt KloPe6[4] = { 0,0  ,  0,0 };	

	//Laatikko 1
	   Aloitus_h_maanantai[1] =  KloMa1[0]          ;
	 Aloitus_min_maanantai[1] =  KloMa1[1]        ;
	   Lopetus_h_maanantai[1] =  KloMa1[2]          ;
	 Lopetus_min_maanantai[1] =  KloMa1[3]        ;
	Maanantai_laatikonvari[1] = KRgbBlue;
	
	//Laatikko 2
	   Aloitus_h_maanantai[2] =  KloMa2[0]          ;
	 Aloitus_min_maanantai[2] =  KloMa2[1]       ;
	   Lopetus_h_maanantai[2] =  KloMa2[2]         ;
	 Lopetus_min_maanantai[2] =  KloMa2[3]        ;
	Maanantai_laatikonvari[2] = KRgbGreen;

	//Laatikko 3
	   Aloitus_h_maanantai[3] =  KloMa3[0]          ;
	 Aloitus_min_maanantai[3] =  KloMa3[1]        ;
	   Lopetus_h_maanantai[3] =  KloMa3[2]          ;
	 Lopetus_min_maanantai[3] =  KloMa3[3]        ;
	Maanantai_laatikonvari[3] = KRgbRed;

	//Laatikko 4
	   Aloitus_h_maanantai[4] =  KloMa4[0]          ;
	 Aloitus_min_maanantai[4] =  KloMa4[1]        ;
	   Lopetus_h_maanantai[4] =  KloMa4[2]          ;
	 Lopetus_min_maanantai[4] =  KloMa4[3]        ;
	Maanantai_laatikonvari[4] = KRgbYellow;

	//Laatikko 5
	   Aloitus_h_maanantai[5] =  KloMa5[0]          ;
	 Aloitus_min_maanantai[5] =  KloMa5[1]        ;
	   Lopetus_h_maanantai[5] =  KloMa5[2]          ;
	 Lopetus_min_maanantai[5] =  KloMa5[3]        ;
	Maanantai_laatikonvari[5] = KRgbGray;

	//Laatikko 6
	   Aloitus_h_maanantai[6] =  KloMa6[0]          ;
	 Aloitus_min_maanantai[6] =  KloMa6[1]        ;
	   Lopetus_h_maanantai[6] =  KloMa6[2]          ;
	 Lopetus_min_maanantai[6] =  KloMa6[3]        ;
	Maanantai_laatikonvari[6] = KRgbGreen;

		
		//Laatikko 1
	  	   Aloitus_h_tiistai[1] =  KloTi1[0]          ;
		 Aloitus_min_tiistai[1] =  KloTi1[1]        ;
		   Lopetus_h_tiistai[1] =  KloTi1[2]         ;
		 Lopetus_min_tiistai[1] =  KloTi1[3]        ;
		Tiistai_laatikonvari[1] = KRgbBlue;
		
		//Laatikko 2
		   Aloitus_h_tiistai[2] =  KloTi2[0]          ;
		 Aloitus_min_tiistai[2] =  KloTi2[1]        ;
		   Lopetus_h_tiistai[2] =  KloTi2[2]         ;
		 Lopetus_min_tiistai[2] =  KloTi2[3]        ;
		Tiistai_laatikonvari[2] = KRgbGreen;
	
		//Laatikko 3
		   Aloitus_h_tiistai[3] =  KloTi3[0]          ;
		 Aloitus_min_tiistai[3] =  KloTi3[1]        ;
		   Lopetus_h_tiistai[3] =  KloTi3[2]          ;
		 Lopetus_min_tiistai[3] =  KloTi3[3]        ;
		Tiistai_laatikonvari[3] = KRgbRed;
	
		//Laatikko 4
		   Aloitus_h_tiistai[4] =  KloTi4[0]          ;
		 Aloitus_min_tiistai[4] =  KloTi4[1]        ;
		   Lopetus_h_tiistai[4] =  KloTi4[2]          ;
		 Lopetus_min_tiistai[4] =  KloTi4[3]        ;
		Tiistai_laatikonvari[4] = KRgbYellow;
	
		//Laatikko 5
		   Aloitus_h_tiistai[5] =  KloTi5[0]          ;
		 Aloitus_min_tiistai[5] =  KloTi5[1]        ;
		   Lopetus_h_tiistai[5] =  KloTi5[2]          ;
		 Lopetus_min_tiistai[5] =  KloTi5[3]        ;
		Tiistai_laatikonvari[5] = KRgbGray;
	
		//Laatikko 6
		   Aloitus_h_tiistai[6] =  KloTi6[0]          ;
		 Aloitus_min_tiistai[6] =  KloTi6[1]        ;
		   Lopetus_h_tiistai[6] =  KloTi6[2]          ;
		 Lopetus_min_tiistai[6] =  KloTi6[3]        ;
		Tiistai_laatikonvari[6] = KRgbGreen;	

			
			//Laatikko 1
			   Aloitus_h_keskiviikko[1] =  KloKe1[0]           ;
			 Aloitus_min_keskiviikko[1] =  KloKe1[1]         ;
			   Lopetus_h_keskiviikko[1] =  KloKe1[2]           ;
			 Lopetus_min_keskiviikko[1] =  KloKe1[3]         ;
			Keskiviikko_laatikonvari[1] = KRgbBlue;
			
			//Laatikko 2
			   Aloitus_h_keskiviikko[2] =  KloKe2[0]           ;
			 Aloitus_min_keskiviikko[2] =  KloKe2[1]         ;
			   Lopetus_h_keskiviikko[2] =  KloKe2[2]          ;
			 Lopetus_min_keskiviikko[2] =  KloKe2[3]         ;
			Keskiviikko_laatikonvari[2] = KRgbGreen;
		
			//Laatikko 3
			   Aloitus_h_keskiviikko[3] =  KloKe3[0]           ;
			 Aloitus_min_keskiviikko[3] =  KloKe3[1]         ;
			   Lopetus_h_keskiviikko[3] =  KloKe3[2]           ;
			 Lopetus_min_keskiviikko[3] =  KloKe3[3]         ;
			Keskiviikko_laatikonvari[3] = KRgbRed;
		
			//Laatikko 4
			   Aloitus_h_keskiviikko[4] =  KloKe4[0]           ;
			 Aloitus_min_keskiviikko[4] =  KloKe4[1]         ;
			   Lopetus_h_keskiviikko[4] =  KloKe4[2]           ;
			 Lopetus_min_keskiviikko[4] =  KloKe4[3]         ;
			Keskiviikko_laatikonvari[4] = KRgbYellow;
		
			//Laatikko 5
			   Aloitus_h_keskiviikko[5] =  KloKe5[0]           ;
			 Aloitus_min_keskiviikko[5] =  KloKe5[1]         ;
			   Lopetus_h_keskiviikko[5] =  KloKe5[2]           ;
			 Lopetus_min_keskiviikko[5] =  KloKe5[3]         ;
			Keskiviikko_laatikonvari[5] = KRgbGray;
		
			//Laatikko 6
			   Aloitus_h_keskiviikko[6] =  KloKe6[0]           ;
			 Aloitus_min_keskiviikko[6] =  KloKe6[1]         ;
			   Lopetus_h_keskiviikko[6] =  KloKe6[2]           ;
			 Lopetus_min_keskiviikko[6] =  KloKe6[3]         ;
			Keskiviikko_laatikonvari[6] = KRgbGreen;	
	
				
				//Laatikko 1
				   Aloitus_h_torstai[1] =  KloTo1[0]           ;
				 Aloitus_min_torstai[1] =  KloTo1[1]         ;
				   Lopetus_h_torstai[1] =  KloTo1[2]           ;
				 Lopetus_min_torstai[1] =  KloTo1[3]         ;
				Torstai_laatikonvari[1] = KRgbBlue;
				
				//Laatikko 2
				   Aloitus_h_torstai[2] =  KloTo2[0]           ;
				 Aloitus_min_torstai[2] =  KloTo2[1]         ;
				   Lopetus_h_torstai[2] =  KloTo2[2]          ;
				 Lopetus_min_torstai[2] =  KloTo2[3]         ;
				Torstai_laatikonvari[2] = KRgbGreen;
			
				//Laatikko 3
				   Aloitus_h_torstai[3] =  KloTo3[0]           ;
				 Aloitus_min_torstai[3] =  KloTo3[1]         ;
				   Lopetus_h_torstai[3] =  KloTo3[2]           ;
				 Lopetus_min_torstai[3] =  KloTo3[3]         ;
				Torstai_laatikonvari[3] = KRgbRed;
			
				//Laatikko 4
				   Aloitus_h_torstai[4] =  KloTo4[0]           ;
				 Aloitus_min_torstai[4] =  KloTo4[1]         ;
				   Lopetus_h_torstai[4] =  KloTo4[2]           ;
				 Lopetus_min_torstai[4] =  KloTo4[3]         ;
				Torstai_laatikonvari[4] = KRgbYellow;
			
				//Laatikko 5
				   Aloitus_h_torstai[5] =  KloTo5[0]           ;
				 Aloitus_min_torstai[5] =  KloTo5[1]         ;
				   Lopetus_h_torstai[5] =  KloTo5[2]           ;
				 Lopetus_min_torstai[5] =  KloTo5[3]         ;
				Torstai_laatikonvari[5] = KRgbGray;
			
				//Laatikko 6
				   Aloitus_h_torstai[6] =  KloTo6[0]           ;
				 Aloitus_min_torstai[6] =  KloTo6[1]         ;
				   Lopetus_h_torstai[6] =  KloTo6[2]          ;
				 Lopetus_min_torstai[6] =  KloTo6[3]         ;
				Torstai_laatikonvari[6] = KRgbGreen;	
	
				
				//Laatikko 1
				   Aloitus_h_perjantai[1] =  KloPe1[0]           ;
				 Aloitus_min_perjantai[1] =  KloPe1[1]         ;
				   Lopetus_h_perjantai[1] =  KloPe1[2]           ;
				 Lopetus_min_perjantai[1] =  KloPe1[3]         ;
				Perjantai_laatikonvari[1] = KRgbBlue;
				
				//Laatikko 2
				   Aloitus_h_perjantai[2] =  KloPe2[0]           ;
				 Aloitus_min_perjantai[2] =  KloPe2[1]         ;
				   Lopetus_h_perjantai[2] =  KloPe2[2]        ;
				 Lopetus_min_perjantai[2] =  KloPe2[3]         ;
				Perjantai_laatikonvari[2] = KRgbGreen;
			
				//Laatikko 3
				   Aloitus_h_perjantai[3] =  KloPe3[0]           ;
				 Aloitus_min_perjantai[3] =  KloPe3[1]         ;
				   Lopetus_h_perjantai[3] =  KloPe3[2]           ;
				 Lopetus_min_perjantai[3] =  KloPe3[3]         ;
				Perjantai_laatikonvari[3] = KRgbRed;
			
				//Laatikko 4
				   Aloitus_h_perjantai[4] =  KloPe4[0]           ;
				 Aloitus_min_perjantai[4] =  KloPe4[1]         ;
				   Lopetus_h_perjantai[4] =  KloPe4[2]          ;
				 Lopetus_min_perjantai[4] =  KloPe4[3]         ;
				Perjantai_laatikonvari[4] = KRgbYellow;
			
				//Laatikko 5
				   Aloitus_h_perjantai[5] =  KloPe5[0]           ;
				 Aloitus_min_perjantai[5] =  KloPe5[1]         ;
				   Lopetus_h_perjantai[5] =  KloPe5[2]           ;
				 Lopetus_min_perjantai[5] =  KloPe5[3]         ;
				Perjantai_laatikonvari[5] = KRgbGray;
			
				//Laatikko 6
				   Aloitus_h_perjantai[6] =  KloPe6[0]           ;
				 Aloitus_min_perjantai[6] =  KloPe6[1]         ;
				   Lopetus_h_perjantai[6] =  KloPe6[2]           ;
				 Lopetus_min_perjantai[6] =  KloPe6[3]         ;
				Perjantai_laatikonvari[6] = KRgbGreen;	
Laskut();

if (Laatikot_ma == 0 && Laatikot_ti == 0 && Laatikot_ke == 0 && Laatikot_to == 0 && Laatikot_pe == 0)
	{
	iCoeEnv->ReadResourceL(KAt, R_EITEHTAVIA);
	}
else
	{
	KAt.Format(_L("@"));
	}


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

