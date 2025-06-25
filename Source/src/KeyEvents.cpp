#include "ScheduleContainer.h"
#include <Schedule.rsg>
#include "Schedule.hrh"

void CScheduleContainer::SetItems()
	{


	aTime.HomeTime();
	WeekNo = aTime.WeekNoInYear();
	aDateTime = aTime.DateTime();
	//Kelloviiva
	Hour = aDateTime.Hour();
	Minute = aDateTime.Minute();
	
    KelloViivanAloitusX = 71;
    KelloViivanLopetusX = 798;
	KelloViivaY = 54 + (((Minute * 100 / 60) * (20)) / 100) + (Hour - 8) * 20;
	if (KelloViivaY < 54) { KelloViivaY = 0; KelloViivanAloitusX = 0; KelloViivanLopetusX = 0;}
	if (KelloViivaY > 309) { KelloViivaY = 0; KelloViivanAloitusX = 0; KelloViivanLopetusX = 0;}

    if (MaxWeeks-WeekNo <= 2)
		{
		LuoViikkoja = 1;
		}
	
		Aloitus_kohta_x_maanantai = 75;
		Lopetus_kohta_x_maanantai = 210;
		Aloitus_kohta_x_tiistai = 75 + 146;
		Lopetus_kohta_x_tiistai = 210 + 146;
		Aloitus_kohta_x_keskiviikko = 75 + 146*2;
		Lopetus_kohta_x_keskiviikko = 210 + 146*2;
		Lopetus_kohta_x_keskiviikko = 210 + 146*2;
		Aloitus_kohta_x_torstai = 75 + 146*3;
		Lopetus_kohta_x_torstai = 210 + 146*3;
		Lopetus_kohta_x_torstai = 210 + 146*3;
		Aloitus_kohta_x_perjantai = 75 + 146*4;
		Lopetus_kohta_x_perjantai = 210 + 146*4;
		Lopetus_kohta_x_perjantai = 210 + 146*4;

	
	DayNoInWeek = aTime.DayNoInWeek();
	 
	
	CheckWeek();
	
	switch (DayNoInWeek)
		{
		case EMonday:
			{
			cursorPosx = 1;
			cursorPosy = 1;
			CheckWeek();
			cursor = Maanantailaatikko[1];
			cursor.Grow(2,2);
					if (Laatikot_ma == 0)
						{
						cursorPosx=2;
						cursorPosy=1;
						CheckWeek();
						cursor = Tiistailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ti == 0)
							{
							cursorPosx=3;
							cursorPosy=1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ke == 0)
								{
								cursorPosx=4;
								cursorPosy=1;
								CheckWeek();
								cursor = Torstailaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_to == 0)
									{
									cursorPosx=5;
									cursorPosy=1;
									CheckWeek();
									cursor = Perjantailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_pe == 0)
										{
									WeekNo = WeekNo + 1;
									cursorPosx = 1;
									cursorPosy = 1;
									CheckWeek();
									cursor = Maanantailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_ma == 0)
									{
										cursorPosx = 2;
										cursorPosy = 1;
										CheckWeek();
										cursor = Tiistailaatikko[1];
										cursor.Grow(2,2);
										if (Laatikot_ti == 0)
											{
											cursorPosx = 3;
											cursorPosy = 1;
											CheckWeek();
											cursor = Keskiviikkolaatikko[1];
											cursor.Grow(2,2);
											if (Laatikot_ke == 0)
												{
												cursorPosx = 4;
												cursorPosy = 1;
												CheckWeek();
												cursor = Torstailaatikko[1];
												cursor.Grow(2,2);
												if (Laatikot_to == 0)
													{
													cursorPosx = 5;
													cursorPosy = 1;
													CheckWeek();
													cursor = Perjantailaatikko[1];
													cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}										
										}
									}
								}
							}
						}
					break;
			}
		case ETuesday:
			{
			cursorPosx = 2;
			cursorPosy = 1;
			CheckWeek();
			cursor = Tiistailaatikko[1];
			cursor.Grow(2,2);
					if (Laatikot_ti == 0)
						{
						if (Laatikot_ma != 0)
							{
							cursorPosx=1;
							cursorPosy=1;
							CheckWeek();
							cursor = Maanantailaatikko[1];
							cursor.Grow(2,2);
							break;
							}
						cursorPosx=3;
						cursorPosy=1;
						CheckWeek();
						cursor = Keskiviikkolaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ke == 0)
							{
							cursorPosx=4;
							cursorPosy=1;
							CheckWeek();
							cursor = Torstailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_to == 0)
								{
								cursorPosx=5;
								cursorPosy=1;
								CheckWeek();
								cursor = Perjantailaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_pe == 0)
									{
								WeekNo = WeekNo + 1;
								cursorPosx = 1;
								cursorPosy = 1;
								CheckWeek();
								cursor = Maanantailaatikko[1];
								cursor.Grow(2,2);
									if (Laatikot_pe == 0)
										{
									cursorPosx = 2;
									cursorPosy = 1;
									CheckWeek();
									cursor = Tiistailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_ti == 0)
									{
									cursorPosx = 3;
									cursorPosy = 1;
									CheckWeek();
									cursor = Keskiviikkolaatikko[1];
									cursor.Grow(2,2);
										if (Laatikot_ke == 0)
											{
											cursorPosx = 4;
											cursorPosy = 1;
											CheckWeek();
											cursor = Torstailaatikko[1];
											cursor.Grow(2,2);
											if (Laatikot_to == 0)
												{
												cursorPosx = 5;
												cursorPosy = 1;
												CheckWeek();
												cursor = Perjantailaatikko[1];
												cursor.Grow(2,2);
												if (Laatikot_pe == 0)
													{
												WeekNo = WeekNo + 1;
												cursorPosx = 1;
												cursorPosy = 1;
												CheckWeek();
												cursor = Maanantailaatikko[1];
												cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}										
										}
									}
								}
							}
						}
					break;
			}
		case EWednesday:
			{
			cursorPosx=3;
			cursorPosy=1;
			CheckWeek();
			cursor = Keskiviikkolaatikko[1];
			cursor.Grow(2,2);
					if (Laatikot_ke == 0)
						{
						if (Laatikot_ma != 0)
							{
							cursorPosx=1;
							cursorPosy=1;
							CheckWeek();
							cursor = Maanantailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ti != 0)
								{
								cursorPosx=2;
								cursorPosy=1;
								CheckWeek();
								cursor = Tiistailaatikko[1];
								cursor.Grow(2,2);
								}
							break;
							}
					cursorPosx=4;
					cursorPosy=1;
					CheckWeek();
					cursor = Torstailaatikko[1];
					cursor.Grow(2,2);
						if (Laatikot_to == 0)
							{
						cursorPosx=5;
						cursorPosy=1;
						CheckWeek();
						cursor = Perjantailaatikko[1];
						cursor.Grow(2,2);
							if (Laatikot_pe == 0)
								{
							WeekNo = WeekNo + 1;
							cursorPosx = 1;
							cursorPosy = 1;
							CheckWeek();
							cursor = Maanantailaatikko[1];
							cursor.Grow(2,2);
								if (Laatikot_ma == 0)
									{
								cursorPosx = 2;
								cursorPosy = 1;
								CheckWeek();
								cursor = Tiistailaatikko[1];
								cursor.Grow(2,2);
									if (Laatikot_ti == 0)
										{
									cursorPosx = 3;
									cursorPosy = 1;
									CheckWeek();
									cursor = Keskiviikkolaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_ke == 0)
									{
									cursorPosx = 4;
									cursorPosy = 1;
									CheckWeek();
									cursor = Torstailaatikko[1];
									cursor.Grow(2,2);
										if (Laatikot_to == 0)
											{
										cursorPosx = 5;
										cursorPosy = 1;
										CheckWeek();
										cursor = Perjantailaatikko[1];
										cursor.Grow(2,2);
											if (Laatikot_pe == 0)
												{
											WeekNo = WeekNo + 1;
											cursorPosx = 1;
											cursorPosy = 1;
											CheckWeek();
											cursor = Maanantailaatikko[1];
											cursor.Grow(2,2);
												if (Laatikot_ma == 0)
													{
												cursorPosx = 2;
												cursorPosy = 1;
												CheckWeek();
												cursor = Tiistailaatikko[1];
												cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}										
										}
									}
								}
							}
						}
					break;
			}
		case EThursday:
			{
			cursorPosx=4;
			cursorPosy=1;
			CheckWeek();
			cursor = Torstailaatikko[1];
			cursor.Grow(2,2);
					if (Laatikot_to == 0)
						{
						if (Laatikot_ma != 0)
							{
							cursorPosx=1;
							cursorPosy=1;
							CheckWeek();
							cursor = Maanantailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ti != 0)
								{
								cursorPosx=2;
								cursorPosy=1;
								CheckWeek();
								cursor = Tiistailaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_ke != 0)
									{
									cursorPosx=3;
									cursorPosy=1;
									CheckWeek();
									cursor = Keskiviikkolaatikko[1];
									cursor.Grow(2,2);
									}
								}
							break;
							}
					cursorPosx=5;
					cursorPosy=1;
					CheckWeek();
					cursor = Perjantailaatikko[1];
					cursor.Grow(2,2);
						if (Laatikot_pe == 0)
							{
						WeekNo = WeekNo + 1;
						cursorPosx = 1;
						cursorPosy = 1;
						CheckWeek();
						cursor = Maanantailaatikko[1];
						cursor.Grow(2,2);
							if (Laatikot_ma == 0)
								{
							cursorPosx = 2;
							cursorPosy = 1;
							CheckWeek();
							cursor = Tiistailaatikko[1];
							cursor.Grow(2,2);
								if (Laatikot_ti == 0)
									{
								cursorPosx = 3;
								cursorPosy = 1;
								CheckWeek();
								cursor = Keskiviikkolaatikko[1];
								cursor.Grow(2,2);
									if (Laatikot_ke == 0)
										{
									cursorPosx = 4;
									cursorPosy = 1;
									CheckWeek();
									cursor = Torstailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_to == 0)
									{
									cursorPosx = 5;
									cursorPosy = 1;
									CheckWeek();
									cursor = Perjantailaatikko[1];
									cursor.Grow(2,2);
										if (Laatikot_pe == 0)
											{
										WeekNo = WeekNo + 1;
										cursorPosx = 1;
										cursorPosy = 1;
										CheckWeek();
										cursor = Maanantailaatikko[1];
										cursor.Grow(2,2);
											if (Laatikot_ma == 0)
												{
											cursorPosx = 2;
											cursorPosy = 1;
											CheckWeek();
											cursor = Tiistailaatikko[1];
											cursor.Grow(2,2);
												if (Laatikot_ti == 0)
													{
												cursorPosx = 3;
												cursorPosy = 1;
												CheckWeek();
												cursor = Keskiviikkolaatikko[1];
												cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}										
										}
									}
								}
							}
						}
					break;
			}
		case EFriday:
			{
			cursorPosx=5;
			cursorPosy=1;
			CheckWeek();
			cursor = Perjantailaatikko[1];
			cursor.Grow(2,2);
					if (Laatikot_pe == 0)
						{
					if (Laatikot_ma != 0)
						{
						cursorPosx=1;
						cursorPosy=1;
						CheckWeek();
						cursor = Maanantailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ti != 0)
							{
							cursorPosx=2;
							cursorPosy=1;
							CheckWeek();
							cursor = Tiistailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ke != 0)
								{
								cursorPosx=3;
								cursorPosy=1;
								CheckWeek();
								cursor = Keskiviikkolaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_to != 0)
									{
									cursorPosx=4;
									cursorPosy=1;
									CheckWeek();
									cursor = Torstailaatikko[1];
									cursor.Grow(2,2);
									}
								}
							}
						break;
						}
					WeekNo = WeekNo + 1;
					cursorPosx = 1;
					cursorPosy = 1;
					CheckWeek();
					cursor = Maanantailaatikko[1];
					cursor.Grow(2,2);
						if (Laatikot_ma == 0)
							{
						cursorPosx = 2;
						cursorPosy = 1;
						CheckWeek();
						cursor = Tiistailaatikko[1];
						cursor.Grow(2,2);
							if (Laatikot_ti == 0)
								{
							cursorPosx = 3;
							cursorPosy = 1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
								if (Laatikot_ke == 0)
									{
								cursorPosx = 4;
								cursorPosy = 1;
								CheckWeek();
								cursor = Torstailaatikko[1];
								cursor.Grow(2,2);
									if (Laatikot_to == 0)
										{
									cursorPosx = 5;
									cursorPosy = 1;
									CheckWeek();
									cursor = Perjantailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_pe == 0)
									{
									WeekNo = WeekNo + 1;
									cursorPosx = 1;
									cursorPosy = 1;
									CheckWeek();
									cursor = Maanantailaatikko[1];
									cursor.Grow(2,2);
										if (Laatikot_ma == 0)
											{
										cursorPosx = 2;
										cursorPosy = 1;
										CheckWeek();
										cursor = Tiistailaatikko[1];
										cursor.Grow(2,2);
											if (Laatikot_ti == 0)
												{
											cursorPosx = 3;
											cursorPosy = 1;
											CheckWeek();
											cursor = Keskiviikkolaatikko[1];
											cursor.Grow(2,2);
												if (Laatikot_ke == 0)
													{
												cursorPosx = 4;
												cursorPosy = 1;
												CheckWeek();
												cursor = Torstailaatikko[1];
												cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}										
										}
									}
								}
							}
						}
					break;
			}
		case ESaturday:
		case ESunday:
			{
			cursorPosx = 1;
			cursorPosy = 1;
			CheckWeek();
			cursor = Maanantailaatikko[1];
			cursor.Grow(2,2);
					if (Laatikot_ma == 0)
						{
						cursorPosx=2;
						cursorPosy=1;
						CheckWeek();
						cursor = Tiistailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ti == 0)
							{
							cursorPosx=3;
							cursorPosy=1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ke == 0)
								{
								cursorPosx=4;
								cursorPosy=1;
								CheckWeek();
								cursor = Torstailaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_to == 0)
									{
									cursorPosx=5;
									cursorPosy=1;
									CheckWeek();
									cursor = Perjantailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_pe == 0)
										{
										WeekNo = WeekNo + 1;
										cursorPosx = 1;
										cursorPosy = 1;
										CheckWeek();
										cursor = Maanantailaatikko[1];
										cursor.Grow(2,2);
										if (Laatikot_ma == 0)
										{
											cursorPosx = 2;
											cursorPosy = 1;
											CheckWeek();
											cursor = Tiistailaatikko[1];
											cursor.Grow(2,2);
											if (Laatikot_ti == 0)
												{
												cursorPosx = 3;
												cursorPosy = 1;
												CheckWeek();
												cursor = Keskiviikkolaatikko[1];
												cursor.Grow(2,2);
												if (Laatikot_ke == 0)
													{
													cursorPosx = 4;
													cursorPosy = 1;
													CheckWeek();
													cursor = Torstailaatikko[1];
													cursor.Grow(2,2);
													if (Laatikot_to == 0)
														{
														cursorPosx = 5;
														cursorPosy = 1;
														CheckWeek();
														cursor = Perjantailaatikko[1];
														cursor.Grow(2,2);
														
														}
													
													}
												
												}
										
					
											}										
										}
									}
								}
							}
						}
					break;
			}
		}

	
	CheckWeek();
	}
	





// ----------------------------------------------------
// CScheduleContainer::OfferKeyEventL(const 
//               TKeyEvent& aKeyEvent,TEventCode aType)
// ----------------------------------------------------
//
TKeyResponse CScheduleContainer::OfferKeyEventL(const TKeyEvent& aKeyEvent,
		TEventCode aType)
	{
	TInt code = aKeyEvent.iCode;
	_LIT(Ka, "a");
	_LIT(Kb, "a");

	// five-way navigation middle button handler
	if (aKeyEvent.iScanCode == EStdKeyDevice3)
		{
		BasicBrowserControlL(x, y);
		return EKeyWasConsumed;
		}

	switch (code)
		{
		case EKeyDownArrow:
			{
			if (cursorPosx == 1)
				{
				if (cursorPosy==Laatikot_ma)
					{
						break;
					}
				else
					{
							cursor = Maanantailaatikko[cursorPosy+1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy+1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 2)
				{
				if (cursorPosy==Laatikot_ti)
					{
						break;
					}
				else
					{
							cursor = Tiistailaatikko[cursorPosy+1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy+1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 3)
				{
				if (cursorPosy==Laatikot_ke)
					{
						break;
					}
				else
					{
							cursor = Keskiviikkolaatikko[cursorPosy+1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy+1;
							CheckWeek();
							break;
					}
				}
			
			if (cursorPosx == 4)
				{
				if (cursorPosy==Laatikot_to)
					{
						break;
					}
				else
					{
							cursor = Torstailaatikko[cursorPosy+1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy+1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 5)
				{
				if (cursorPosy==Laatikot_pe)
					{
						break;
					}
				else
					{
							cursor = Perjantailaatikko[cursorPosy+1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy+1;
							CheckWeek();
							break;
					}
				}
			}
			
		case EKeyUpArrow:
			{
			// Jos ollaan ykköslaatikossa
			if (cursorPosx == 1)
				{
				if (cursorPosy==MinCursorY)
					{
						break;
					}
				else
					{
							cursor = Maanantailaatikko[cursorPosy-1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy-1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 2)
				{
				if (cursorPosy==MinCursorY)
					{
						break;
					}
				else
					{
							cursor = Tiistailaatikko[cursorPosy-1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy-1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 3)
				{
				if (cursorPosy==MinCursorY)
					{
						break;
					}
				else
					{
							cursor = Keskiviikkolaatikko[cursorPosy-1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy-1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 4)
				{
				if (cursorPosy==MinCursorY)
					{
						break;
					}
				else
					{
							cursor = Torstailaatikko[cursorPosy-1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy-1;
							CheckWeek();
							break;
					}
				}
			if (cursorPosx == 5)
				{
				if (cursorPosy==MinCursorY)
					{
						break;
					}
				else
					{
							cursor = Perjantailaatikko[cursorPosy-1];
							cursor.Grow(2,2);
							cursorPosy=cursorPosy-1;
							CheckWeek();
							break;
					}
				}
			}
			
		case EKeyLeftArrow:
			{
			// Jos ollaan maanantaissa
			if (cursorPosx == 1)
				{
			if (WeekNo == MinWeeks)
				{
			break;
				}
				WeekNo = WeekNo - 1;
				cursorPosx = 5;
				cursorPosy = 1;
				CheckWeek();
				cursor = Perjantailaatikko[1];
				cursor.Grow(2,2);
				if (Laatikot_pe == 0)
					{
					cursorPosx = 4;
					cursorPosy = 1;
					CheckWeek();
					cursor = Torstailaatikko[1];
					cursor.Grow(2,2);
					if (Laatikot_to == 0)
						{
						cursorPosx = 3;
						cursorPosy = 1;
						CheckWeek();
						cursor = Keskiviikkolaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ke == 0)
							{
							cursorPosx = 2;
							cursorPosy = 1;
							CheckWeek();
							cursor = Tiistailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ti == 0)
								{
								cursorPosx = 1;
								cursorPosy = 1;
								CheckWeek();
								cursor = Maanantailaatikko[1];
								cursor.Grow(2,2);
								
								}
							
							}
						
						}
					
					}
				DrawNow();
				break;
				}

			if (cursorPosx == 2)
				{
				cursor = Maanantailaatikko[1];
				cursorPosx=1;
				cursorPosy=1;
				cursor.Grow(2,2);
				CheckWeek();
				if (Laatikot_ma == 0)
					{
				if (WeekNo == MinWeeks)
					{
				break;
					}
					WeekNo = WeekNo - 1;
					cursorPosx = 5;
					cursorPosy = 1;
					CheckWeek();
					cursor = Perjantailaatikko[1];
					cursor.Grow(2,2);
					if (Laatikot_pe == 0)
					{
						cursorPosx = 4;
						cursorPosy = 1;
						CheckWeek();
						cursor = Torstailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_to == 0)
							{
							cursorPosx = 3;
							cursorPosy = 1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ke == 0)
								{
								cursorPosx = 2;
								cursorPosy = 1;
								CheckWeek();
								cursor = Tiistailaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_ti == 0)
									{
									cursorPosx = 1;
									cursorPosy = 1;
									CheckWeek();
									cursor = Maanantailaatikko[1];
									cursor.Grow(2,2);
									
									}
								
								}
							
							}
					

						}
					}
				DrawNow();
				break;
				}
			
			if (cursorPosx == 3)
				{
				cursor = Tiistailaatikko[1];
				cursorPosx=2;
				cursorPosy=1;
				cursor.Grow(2,2);
				CheckWeek();
				if (Laatikot_ti == 0)
					{
					cursorPosx = 1;
					cursorPosy = 1;
					CheckWeek();
					cursor = Maanantailaatikko[1];
					cursor.Grow(2,2);
				
					if (Laatikot_ma == 0)
						{
					if (WeekNo == MinWeeks)
						{//HUOM
					cursor = Keskiviikkolaatikko[1];
					cursorPosx=3;
					cursorPosy=1;
					cursor.Grow(2,2);
					CheckWeek();
					break;
						}
						WeekNo = WeekNo - 1;
						cursorPosx = 5;
						cursorPosy = 1;
						CheckWeek();
						cursor = Perjantailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_pe == 0)
						{
							cursorPosx = 4;
							cursorPosy = 1;
							CheckWeek();
							cursor = Torstailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_to == 0)
								{
								cursorPosx = 3;
								cursorPosy = 1;
								CheckWeek();
								cursor = Keskiviikkolaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_ke == 0)
									{
									cursorPosx = 2;
									cursorPosy = 1;
									CheckWeek();
									cursor = Tiistailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_ti == 0)
										{
										cursorPosx = 1;
										cursorPosy = 1;
										CheckWeek();
										cursor = Maanantailaatikko[1];
										cursor.Grow(2,2);
										
										}
									
									}
								
								}
						
	
							}
						}
					}
				DrawNow();
				break;
					}


			if (cursorPosx == 4)
				{
				cursor = Keskiviikkolaatikko[1];
				cursorPosx=3;
				cursorPosy=1;
				cursor.Grow(2,2);
				CheckWeek();
				if (Laatikot_ke == 0)
					{
					cursorPosx = 2;
					cursorPosy = 1;
					CheckWeek();
					cursor = Tiistailaatikko[1];
					cursor.Grow(2,2);
					
				if (Laatikot_ti == 0)
					{
					cursorPosx = 1;
					cursorPosy = 1;
					CheckWeek();
					cursor = Maanantailaatikko[1];
					cursor.Grow(2,2);
				
					if (Laatikot_ma == 0)
						{
					if (WeekNo == MinWeeks)
						{
					break;
						}
						WeekNo = WeekNo - 1;
						cursorPosx = 1;
						cursorPosy = 1;
						CheckWeek();
						cursor = Perjantailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_pe == 0)
						{
							cursorPosx = 4;
							cursorPosy = 1;
							CheckWeek();
							cursor = Torstailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_to == 0)
								{
								cursorPosx = 3;
								cursorPosy = 1;
								CheckWeek();
								cursor = Keskiviikkolaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_ke == 0)
									{
									cursorPosx = 2;
									cursorPosy = 1;
									CheckWeek();
									cursor = Tiistailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_ti == 0)
										{
										cursorPosx = 1;
										cursorPosy = 1;
										CheckWeek();
										cursor = Maanantailaatikko[1];
										cursor.Grow(2,2);
										
										}
									
									}
								
								}
						
	
							}
						}
					}	
				}
				DrawNow();
				break;
				}


			if (cursorPosx == 5)
				{
						cursor = Torstailaatikko[1];
						cursorPosx=4;							
						cursorPosy=1;							
						cursor.Grow(2,2);
						CheckWeek();
						
						if (Laatikot_to == 0)
							{
							cursorPosx = 3;
							cursorPosy = 1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
							
							if (Laatikot_ke == 0)
								{
								cursorPosx = 2;
								cursorPosy = 1;
								CheckWeek();
								cursor = Tiistailaatikko[1];
								cursor.Grow(2,2);
								
							if (Laatikot_ti == 0)
								{
								cursorPosx = 1;
								cursorPosy = 1;
								CheckWeek();
								cursor = Maanantailaatikko[1];
								cursor.Grow(2,2);
							
								if (Laatikot_ma == 0)
									{
								if (WeekNo == MinWeeks)
									{
								break;
									}
									WeekNo = WeekNo - 1;
									cursorPosx = 1;
									cursorPosy = 1;
									CheckWeek();
									cursor = Perjantailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_pe == 0)
									{
										cursorPosx = 4;
										cursorPosy = 1;
										CheckWeek();
										cursor = Torstailaatikko[1];
										cursor.Grow(2,2);
										if (Laatikot_to == 0)
											{
											cursorPosx = 3;
											cursorPosy = 1;
											CheckWeek();
											cursor = Keskiviikkolaatikko[1];
											cursor.Grow(2,2);
											if (Laatikot_ke == 0)
												{
												cursorPosx = 2;
												cursorPosy = 1;
												CheckWeek();
												cursor = Tiistailaatikko[1];
												cursor.Grow(2,2);
												if (Laatikot_ti == 0)
													{
													cursorPosx = 1;
													cursorPosy = 1;
													CheckWeek();
													cursor = Maanantailaatikko[1];
													cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}
									}
								}	
							}
						}
					DrawNow();
					break;
				}
			}

		case EKeyRightArrow:
			{
			// Jos ollaan perjantaissa
			if (cursorPosx == 5)
				{
			if (WeekNo == MaxWeeks)
				{
			break;
				}
				WeekNo = WeekNo + 1;
				cursorPosx = 1;
				cursorPosy = 1;
				CheckWeek();
				cursor = Maanantailaatikko[1];
				cursor.Grow(2,2);
				if (Laatikot_ma == 0)
					{
					cursorPosx = 2;
					cursorPosy = 1;
					CheckWeek();
					cursor = Tiistailaatikko[1];
					cursor.Grow(2,2);
					if (Laatikot_ti == 0)
						{
						cursorPosx = 3;
						cursorPosy = 1;
						CheckWeek();
						cursor = Keskiviikkolaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ke == 0)
							{
							cursorPosx = 4;
							cursorPosy = 1;
							CheckWeek();
							cursor = Torstailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_to == 0)
								{
								cursorPosx = 5;
								cursorPosy = 1;
								CheckWeek();
								cursor = Perjantailaatikko[1];
								cursor.Grow(2,2);
								
								}
							
							}
						
						}
					
					}
				DrawNow();
				break;
				}
			if (cursorPosx == 4)
				{
				cursor = Perjantailaatikko[1];
				cursorPosx=5;
				cursorPosy=1;
				cursor.Grow(2,2);
				CheckWeek();
				if (Laatikot_pe == 0)
					{
				if (WeekNo == MaxWeeks)
					{
				break;
					}
					WeekNo = WeekNo + 1;
					cursorPosx = 1;
					cursorPosy = 1;
					CheckWeek();
					cursor = Maanantailaatikko[1];
					cursor.Grow(2,2);
					if (Laatikot_ma == 0)
					{
						cursorPosx = 2;
						cursorPosy = 1;
						CheckWeek();
						cursor = Tiistailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ti == 0)
							{
							cursorPosx = 3;
							cursorPosy = 1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ke == 0)
								{
								cursorPosx = 4;
								cursorPosy = 1;
								CheckWeek();
								cursor = Torstailaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_to == 0)
									{
									cursorPosx = 5;
									cursorPosy = 1;
									CheckWeek();
									cursor = Perjantailaatikko[1];
									cursor.Grow(2,2);
									
									}
								
								}
							
							}
					

						}
					}
				DrawNow();
				break;
				}
			if (cursorPosx == 3)
				{
				cursor = Torstailaatikko[1];
				cursorPosx=4;
				cursorPosy=1;
				cursor.Grow(2,2);
				CheckWeek();
				if (Laatikot_to == 0)
					{
					cursorPosx = 5;
					cursorPosy = 1;
					CheckWeek();
					cursor = Perjantailaatikko[1];
					cursor.Grow(2,2);
				
					if (Laatikot_pe == 0)
						{
					if (WeekNo == MaxWeeks)
						{
					break;
						}
						WeekNo = WeekNo + 1;
						cursorPosx = 1;
						cursorPosy = 1;
						CheckWeek();
						cursor = Maanantailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ma == 0)
						{
							cursorPosx = 2;
							cursorPosy = 1;
							CheckWeek();
							cursor = Tiistailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ti == 0)
								{
								cursorPosx = 3;
								cursorPosy = 1;
								CheckWeek();
								cursor = Keskiviikkolaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_ke == 0)
									{
									cursorPosx = 4;
									cursorPosy = 1;
									CheckWeek();
									cursor = Torstailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_to == 0)
										{
										cursorPosx = 5;
										cursorPosy = 1;
										CheckWeek();
										cursor = Perjantailaatikko[1];
										cursor.Grow(2,2);
										
										}
									
									}
								
								}
						
	
							}
						}
					}
				DrawNow();
				break;
					}
			if (cursorPosx == 2)
				{
				cursor = Keskiviikkolaatikko[1];
				cursorPosx=3;
				cursorPosy=1;
				cursor.Grow(2,2);
				CheckWeek();
				if (Laatikot_ke == 0)
					{
					cursorPosx = 4;
					cursorPosy = 1;
					CheckWeek();
					cursor = Torstailaatikko[1];
					cursor.Grow(2,2);
					
				if (Laatikot_to == 0)
					{
					cursorPosx = 5;
					cursorPosy = 1;
					CheckWeek();
					cursor = Perjantailaatikko[1];
					cursor.Grow(2,2);
				
					if (Laatikot_pe == 0)
						{
					if (WeekNo == MaxWeeks)
						{
					break;
						}
						WeekNo = WeekNo + 1;
						cursorPosx = 1;
						cursorPosy = 1;
						CheckWeek();
						cursor = Maanantailaatikko[1];
						cursor.Grow(2,2);
						if (Laatikot_ma == 0)
						{
							cursorPosx = 2;
							cursorPosy = 1;
							CheckWeek();
							cursor = Tiistailaatikko[1];
							cursor.Grow(2,2);
							if (Laatikot_ti == 0)
								{
								cursorPosx = 3;
								cursorPosy = 1;
								CheckWeek();
								cursor = Keskiviikkolaatikko[1];
								cursor.Grow(2,2);
								if (Laatikot_ke == 0)
									{
									cursorPosx = 4;
									cursorPosy = 1;
									CheckWeek();
									cursor = Torstailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_to == 0)
										{
										cursorPosx = 5;
										cursorPosy = 1;
										CheckWeek();
										cursor = Perjantailaatikko[1];
										cursor.Grow(2,2);
										
										}
									
									}
								
								}
						
	
							}
						}
					}	
				}
				DrawNow();
				break;
				}
			if (cursorPosx == 1)
				{
						cursor = Tiistailaatikko[1];
						cursorPosx=2;							
						cursorPosy=1;							
						cursor.Grow(2,2);
						CheckWeek();
						
						if (Laatikot_ti == 0)
							{
							cursorPosx = 3;
							cursorPosy = 1;
							CheckWeek();
							cursor = Keskiviikkolaatikko[1];
							cursor.Grow(2,2);
							
							if (Laatikot_ke == 0)
								{
								cursorPosx = 4;
								cursorPosy = 1;
								CheckWeek();
								cursor = Torstailaatikko[1];
								cursor.Grow(2,2);
								
							if (Laatikot_to == 0)
								{
								cursorPosx = 5;
								cursorPosy = 1;
								CheckWeek();
								cursor = Perjantailaatikko[1];
								cursor.Grow(2,2);
							
								if (Laatikot_pe == 0)
									{
								if (WeekNo == MaxWeeks)
									{
								break;
									}
									WeekNo = WeekNo + 1;
									cursorPosx = 1;
									cursorPosy = 1;
									CheckWeek();
									cursor = Maanantailaatikko[1];
									cursor.Grow(2,2);
									if (Laatikot_ma == 0)
									{
										cursorPosx = 2;
										cursorPosy = 1;
										CheckWeek();
										cursor = Tiistailaatikko[1];
										cursor.Grow(2,2);
										if (Laatikot_ti == 0)
											{
											cursorPosx = 3;
											cursorPosy = 1;
											CheckWeek();
											cursor = Keskiviikkolaatikko[1];
											cursor.Grow(2,2);
											if (Laatikot_ke == 0)
												{
												cursorPosx = 4;
												cursorPosy = 1;
												CheckWeek();
												cursor = Torstailaatikko[1];
												cursor.Grow(2,2);
												if (Laatikot_to == 0)
													{
													cursorPosx = 5;
													cursorPosy = 1;
													CheckWeek();
													cursor = Perjantailaatikko[1];
													cursor.Grow(2,2);
													
													}
												
												}
											
											}
									
				
										}
									}
								}	
							}
						}
					DrawNow();
					break;
				}
			}

		case EKeyBackspace:
			{
			break;
			}
		}
	//Kelloviiva
	
	Hour = aDateTime.Hour();
	Minute = aDateTime.Minute();
	
    KelloViivanAloitusX = 71;
    KelloViivanLopetusX = 798;
	KelloViivaY = 54 + (((Minute * 100 / 60) * (20)) / 100) + (Hour - 8) * 20;
	if (KelloViivaY < 54) { KelloViivaY = 0; KelloViivanAloitusX = 0; KelloViivanLopetusX = 0;}
	if (KelloViivaY > 309) { KelloViivaY = 0; KelloViivanAloitusX = 0; KelloViivanLopetusX = 0;}

	return EKeyWasConsumed;
	}

void CScheduleContainer::Laskut()
	{


	
	
	
	

	
// 8:00 = 54 y-pikseliï¿½
// 1 h = 20 pikseliï¿½
// Muunnetaan minuutit pikseleiksi. Esim 45 -> kerrotaan sadalla, saadaan 4500,
// jaetaan 60:llÃ¤ -> saadaan 75 -> kerrotaan 20 pikseliï¿½/tunnilla ja jaetaan vielï¿½ sadalla
// -> saadaan 15 pikseliï¿½
Aloitus_kohta_y_maanantai[1] = 54 + (((Aloitus_min_maanantai[1] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_maanantai[1] - 8) * 20;

Lopetus_kohta_y_maanantai[1] = 54 + (((Lopetus_min_maanantai[1] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_maanantai[1] - 8) * 20;

Maanantailaatikko[1].SetRect(Aloitus_kohta_x_maanantai, Aloitus_kohta_y_maanantai[1], Lopetus_kohta_x_maanantai,
		Lopetus_kohta_y_maanantai[1]);		



Aloitus_kohta_y_maanantai[2] = 54 + (((Aloitus_min_maanantai[2] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_maanantai[2] - 8) * 20;

Lopetus_kohta_y_maanantai[2] = 54 + (((Lopetus_min_maanantai[2] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_maanantai[2] - 8) * 20;

Maanantailaatikko[2].SetRect(Aloitus_kohta_x_maanantai, Aloitus_kohta_y_maanantai[2], Lopetus_kohta_x_maanantai,
		Lopetus_kohta_y_maanantai[2]);		



Aloitus_kohta_y_maanantai[3] = 54 + (((Aloitus_min_maanantai[3] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_maanantai[3] - 8) * 20;

Lopetus_kohta_y_maanantai[3] = 54 + (((Lopetus_min_maanantai[3] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_maanantai[3] - 8) * 20;

Maanantailaatikko[3].SetRect(Aloitus_kohta_x_maanantai, Aloitus_kohta_y_maanantai[3], Lopetus_kohta_x_maanantai,
		Lopetus_kohta_y_maanantai[3]);		



Aloitus_kohta_y_maanantai[4] = 54 + (((Aloitus_min_maanantai[4] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_maanantai[4] - 8) * 20;

Lopetus_kohta_y_maanantai[4] = 54 + (((Lopetus_min_maanantai[4] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_maanantai[4] - 8) * 20;

Maanantailaatikko[4].SetRect(Aloitus_kohta_x_maanantai, Aloitus_kohta_y_maanantai[4], Lopetus_kohta_x_maanantai,
		Lopetus_kohta_y_maanantai[4]);		



Aloitus_kohta_y_maanantai[5] = 54 + (((Aloitus_min_maanantai[5] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_maanantai[5] - 8) * 20;

Lopetus_kohta_y_maanantai[5] = 54 + (((Lopetus_min_maanantai[5] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_maanantai[5] - 8) * 20;

Maanantailaatikko[5].SetRect(Aloitus_kohta_x_maanantai, Aloitus_kohta_y_maanantai[5], Lopetus_kohta_x_maanantai,
		Lopetus_kohta_y_maanantai[5]);		



Aloitus_kohta_y_maanantai[6] = 54 + (((Aloitus_min_maanantai[6] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_maanantai[6] - 8) * 20;

Lopetus_kohta_y_maanantai[6] = 54 + (((Lopetus_min_maanantai[6] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_maanantai[6] - 8) * 20;

Maanantailaatikko[6].SetRect(Aloitus_kohta_x_maanantai, Aloitus_kohta_y_maanantai[6], Lopetus_kohta_x_maanantai,
		Lopetus_kohta_y_maanantai[6]);		


Aloitus_kohta_y_tiistai[1] = 54 + (((Aloitus_min_tiistai[1] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_tiistai[1] - 8) * 20;
Lopetus_kohta_y_tiistai[1] = 54 + (((Lopetus_min_tiistai[1] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_tiistai[1] - 8) * 20;
Tiistailaatikko[1].SetRect(Aloitus_kohta_x_tiistai, Aloitus_kohta_y_tiistai[1], Lopetus_kohta_x_tiistai,
		Lopetus_kohta_y_tiistai[1]);		

Aloitus_kohta_y_tiistai[2] = 54 + (((Aloitus_min_tiistai[2] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_tiistai[2] - 8) * 20;
Lopetus_kohta_y_tiistai[2] = 54 + (((Lopetus_min_tiistai[2] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_tiistai[2] - 8) * 20;
Tiistailaatikko[2].SetRect(Aloitus_kohta_x_tiistai, Aloitus_kohta_y_tiistai[2], Lopetus_kohta_x_tiistai,
		Lopetus_kohta_y_tiistai[2]);		

Aloitus_kohta_y_tiistai[3] = 54 + (((Aloitus_min_tiistai[3] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_tiistai[3] - 8) * 20;
Lopetus_kohta_y_tiistai[3] = 54 + (((Lopetus_min_tiistai[3] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_tiistai[3] - 8) * 20;
Tiistailaatikko[3].SetRect(Aloitus_kohta_x_tiistai, Aloitus_kohta_y_tiistai[3], Lopetus_kohta_x_tiistai,
		Lopetus_kohta_y_tiistai[3]);		

Aloitus_kohta_y_tiistai[4] = 54 + (((Aloitus_min_tiistai[4] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_tiistai[4] - 8) * 20;
Lopetus_kohta_y_tiistai[4] = 54 + (((Lopetus_min_tiistai[4] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_tiistai[4] - 8) * 20;
Tiistailaatikko[4].SetRect(Aloitus_kohta_x_tiistai, Aloitus_kohta_y_tiistai[4], Lopetus_kohta_x_tiistai,
		Lopetus_kohta_y_tiistai[4]);		

Aloitus_kohta_y_tiistai[5] = 54 + (((Aloitus_min_tiistai[5] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_tiistai[5] - 8) * 20;
Lopetus_kohta_y_tiistai[5] = 54 + (((Lopetus_min_tiistai[5] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_tiistai[5] - 8) * 20;
Tiistailaatikko[5].SetRect(Aloitus_kohta_x_tiistai, Aloitus_kohta_y_tiistai[5], Lopetus_kohta_x_tiistai,
		Lopetus_kohta_y_tiistai[5]);		

Aloitus_kohta_y_tiistai[6] = 54 + (((Aloitus_min_tiistai[6] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_tiistai[6] - 8) * 20;
Lopetus_kohta_y_tiistai[6] = 54 + (((Lopetus_min_tiistai[6] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_tiistai[6] - 8) * 20;
Tiistailaatikko[6].SetRect(Aloitus_kohta_x_tiistai, Aloitus_kohta_y_tiistai[6], Lopetus_kohta_x_tiistai,
		Lopetus_kohta_y_tiistai[6]);		



Aloitus_kohta_y_keskiviikko[1] = 54 + (((Aloitus_min_keskiviikko[1] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_keskiviikko[1] - 8) * 20;
Lopetus_kohta_y_keskiviikko[1] = 54 + (((Lopetus_min_keskiviikko[1] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_keskiviikko[1] - 8) * 20;
Keskiviikkolaatikko[1].SetRect(Aloitus_kohta_x_keskiviikko, Aloitus_kohta_y_keskiviikko[1], Lopetus_kohta_x_keskiviikko,
		Lopetus_kohta_y_keskiviikko[1]);		

Aloitus_kohta_y_keskiviikko[2] = 54 + (((Aloitus_min_keskiviikko[2] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_keskiviikko[2] - 8) * 20;
Lopetus_kohta_y_keskiviikko[2] = 54 + (((Lopetus_min_keskiviikko[2] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_keskiviikko[2] - 8) * 20;
Keskiviikkolaatikko[2].SetRect(Aloitus_kohta_x_keskiviikko, Aloitus_kohta_y_keskiviikko[2], Lopetus_kohta_x_keskiviikko,
		Lopetus_kohta_y_keskiviikko[2]);		

Aloitus_kohta_y_keskiviikko[3] = 54 + (((Aloitus_min_keskiviikko[3] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_keskiviikko[3] - 8) * 20;
Lopetus_kohta_y_keskiviikko[3] = 54 + (((Lopetus_min_keskiviikko[3] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_keskiviikko[3] - 8) * 20;
Keskiviikkolaatikko[3].SetRect(Aloitus_kohta_x_keskiviikko, Aloitus_kohta_y_keskiviikko[3], Lopetus_kohta_x_keskiviikko,
		Lopetus_kohta_y_keskiviikko[3]);		

Aloitus_kohta_y_keskiviikko[4] = 54 + (((Aloitus_min_keskiviikko[4] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_keskiviikko[4] - 8) * 20;
Lopetus_kohta_y_keskiviikko[4] = 54 + (((Lopetus_min_keskiviikko[4] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_keskiviikko[4] - 8) * 20;
Keskiviikkolaatikko[4].SetRect(Aloitus_kohta_x_keskiviikko, Aloitus_kohta_y_keskiviikko[4], Lopetus_kohta_x_keskiviikko,
		Lopetus_kohta_y_keskiviikko[4]);		

Aloitus_kohta_y_keskiviikko[5] = 54 + (((Aloitus_min_keskiviikko[5] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_keskiviikko[5] - 8) * 20;
Lopetus_kohta_y_keskiviikko[5] = 54 + (((Lopetus_min_keskiviikko[5] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_keskiviikko[5] - 8) * 20;
Keskiviikkolaatikko[5].SetRect(Aloitus_kohta_x_keskiviikko, Aloitus_kohta_y_keskiviikko[5], Lopetus_kohta_x_keskiviikko,
		Lopetus_kohta_y_keskiviikko[5]);		

Aloitus_kohta_y_keskiviikko[6] = 54 + (((Aloitus_min_keskiviikko[6] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_keskiviikko[6] - 8) * 20;
Lopetus_kohta_y_keskiviikko[6] = 54 + (((Lopetus_min_keskiviikko[6] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_keskiviikko[6] - 8) * 20;
Keskiviikkolaatikko[6].SetRect(Aloitus_kohta_x_keskiviikko, Aloitus_kohta_y_keskiviikko[6], Lopetus_kohta_x_keskiviikko,
		Lopetus_kohta_y_keskiviikko[6]);		

Aloitus_kohta_y_torstai[1] = 54 + (((Aloitus_min_torstai[1] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_torstai[1] - 8) * 20;
Lopetus_kohta_y_torstai[1] = 54 + (((Lopetus_min_torstai[1] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_torstai[1] - 8) * 20;
Torstailaatikko[1].SetRect(Aloitus_kohta_x_torstai, Aloitus_kohta_y_torstai[1], Lopetus_kohta_x_torstai,
		Lopetus_kohta_y_torstai[1]);		

Aloitus_kohta_y_torstai[2] = 54 + (((Aloitus_min_torstai[2] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_torstai[2] - 8) * 20;
Lopetus_kohta_y_torstai[2] = 54 + (((Lopetus_min_torstai[2] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_torstai[2] - 8) * 20;
Torstailaatikko[2].SetRect(Aloitus_kohta_x_torstai, Aloitus_kohta_y_torstai[2], Lopetus_kohta_x_torstai,
		Lopetus_kohta_y_torstai[2]);		

Aloitus_kohta_y_torstai[3] = 54 + (((Aloitus_min_torstai[3] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_torstai[3] - 8) * 20;
Lopetus_kohta_y_torstai[3] = 54 + (((Lopetus_min_torstai[3] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_torstai[3] - 8) * 20;
Torstailaatikko[3].SetRect(Aloitus_kohta_x_torstai, Aloitus_kohta_y_torstai[3], Lopetus_kohta_x_torstai,
		Lopetus_kohta_y_torstai[3]);		

Aloitus_kohta_y_torstai[4] = 54 + (((Aloitus_min_torstai[4] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_torstai[4] - 8) * 20;
Lopetus_kohta_y_torstai[4] = 54 + (((Lopetus_min_torstai[4] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_torstai[4] - 8) * 20;
Torstailaatikko[4].SetRect(Aloitus_kohta_x_torstai, Aloitus_kohta_y_torstai[4], Lopetus_kohta_x_torstai,
		Lopetus_kohta_y_torstai[4]);		

Aloitus_kohta_y_torstai[5] = 54 + (((Aloitus_min_torstai[5] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_torstai[5] - 8) * 20;
Lopetus_kohta_y_torstai[5] = 54 + (((Lopetus_min_torstai[5] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_torstai[5] - 8) * 20;
Torstailaatikko[5].SetRect(Aloitus_kohta_x_torstai, Aloitus_kohta_y_torstai[5], Lopetus_kohta_x_torstai,
		Lopetus_kohta_y_torstai[5]);		

Aloitus_kohta_y_torstai[6] = 54 + (((Aloitus_min_torstai[6] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_torstai[6] - 8) * 20;
Lopetus_kohta_y_torstai[6] = 54 + (((Lopetus_min_torstai[6] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_torstai[6] - 8) * 20;
Torstailaatikko[6].SetRect(Aloitus_kohta_x_torstai, Aloitus_kohta_y_torstai[6], Lopetus_kohta_x_torstai,
		Lopetus_kohta_y_torstai[6]);			

Aloitus_kohta_y_perjantai[1] = 54 + (((Aloitus_min_perjantai[1] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_perjantai[1] - 8) * 20;
Lopetus_kohta_y_perjantai[1] = 54 + (((Lopetus_min_perjantai[1] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_perjantai[1] - 8) * 20;
Perjantailaatikko[1].SetRect(Aloitus_kohta_x_perjantai, Aloitus_kohta_y_perjantai[1], Lopetus_kohta_x_perjantai,
		Lopetus_kohta_y_perjantai[1]);		

Aloitus_kohta_y_perjantai[2] = 54 + (((Aloitus_min_perjantai[2] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_perjantai[2] - 8) * 20;
Lopetus_kohta_y_perjantai[2] = 54 + (((Lopetus_min_perjantai[2] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_perjantai[2] - 8) * 20;
Perjantailaatikko[2].SetRect(Aloitus_kohta_x_perjantai, Aloitus_kohta_y_perjantai[2], Lopetus_kohta_x_perjantai,
		Lopetus_kohta_y_perjantai[2]);		

Aloitus_kohta_y_perjantai[3] = 54 + (((Aloitus_min_perjantai[3] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_perjantai[3] - 8) * 20;
Lopetus_kohta_y_perjantai[3] = 54 + (((Lopetus_min_perjantai[3] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_perjantai[3] - 8) * 20;
Perjantailaatikko[3].SetRect(Aloitus_kohta_x_perjantai, Aloitus_kohta_y_perjantai[3], Lopetus_kohta_x_perjantai,
		Lopetus_kohta_y_perjantai[3]);		

Aloitus_kohta_y_perjantai[4] = 54 + (((Aloitus_min_perjantai[4] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_perjantai[4] - 8) * 20;
Lopetus_kohta_y_perjantai[4] = 54 + (((Lopetus_min_perjantai[4] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_perjantai[4] - 8) * 20;
Perjantailaatikko[4].SetRect(Aloitus_kohta_x_perjantai, Aloitus_kohta_y_perjantai[4], Lopetus_kohta_x_perjantai,
		Lopetus_kohta_y_perjantai[4]);		

Aloitus_kohta_y_perjantai[5] = 54 + (((Aloitus_min_perjantai[5] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_perjantai[5] - 8) * 20;
Lopetus_kohta_y_perjantai[5] = 54 + (((Lopetus_min_perjantai[5] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_perjantai[5] - 8) * 20;
Perjantailaatikko[5].SetRect(Aloitus_kohta_x_perjantai, Aloitus_kohta_y_perjantai[5], Lopetus_kohta_x_perjantai,
		Lopetus_kohta_y_perjantai[5]);		

Aloitus_kohta_y_perjantai[6] = 54 + (((Aloitus_min_perjantai[6] * 100 / 60) * (20)) / 100)
		+ (Aloitus_h_perjantai[6] - 8) * 20;
Lopetus_kohta_y_perjantai[6] = 54 + (((Lopetus_min_perjantai[6] * 100 / 60) * (20)) / 100)
		+ (Lopetus_h_perjantai[6] - 8) * 20;
Perjantailaatikko[6].SetRect(Aloitus_kohta_x_perjantai, Aloitus_kohta_y_perjantai[6], Lopetus_kohta_x_perjantai,
		Lopetus_kohta_y_perjantai[6]);	


	// Ekstralogiikkaa: jos minuuteissa on "08" tai "00" tms., niin kone näyttää luvun
	// alapalkissa muodossa esim. 8:8 eikä 8:08, korjataan se alempana siis
 if (Aloitus_h_maanantai[1] < 8) {
 _LIT(KAloitusaika_maanantai1,"");
 Aloitusaika_maanantai1.Format(KAloitusaika_maanantai1); }
 else
	 {
	 if (Aloitus_min_maanantai[1] < 10) { 
	 _LIT(KAloitusaika_maanantai1,"%d:0%d - "); 
	 Aloitusaika_maanantai1.Format(KAloitusaika_maanantai1,Aloitus_h_maanantai[1],Aloitus_min_maanantai[1]); }
	 else { 
	 _LIT(KAloitusaika_maanantai1,"%d:%d - "); 
	 Aloitusaika_maanantai1.Format(KAloitusaika_maanantai1,Aloitus_h_maanantai[1],Aloitus_min_maanantai[1]); }
	 }
 
 
 
 if (Lopetus_h_maanantai[1] < 8) {
 _LIT(KLopetusaika_maanantai1,"");
 Lopetusaika_maanantai1.Format(KLopetusaika_maanantai1);
	 }
 else { if (Lopetus_min_maanantai[1] < 10) {
		 _LIT(KLopetusaika_maanantai1,"%d:0%d - ");			 
		 Lopetusaika_maanantai1.Format(KLopetusaika_maanantai1,Lopetus_h_maanantai[1],Lopetus_min_maanantai[1]);
		 }
	 else {
		 _LIT(KLopetusaika_maanantai1,"%d:%d - ");			 
		 Lopetusaika_maanantai1.Format(KLopetusaika_maanantai1,Lopetus_h_maanantai[1],Lopetus_min_maanantai[1]);
		 }
	 }
 
 
 
 
 
 
 if (Aloitus_h_maanantai[2] < 8) {
 _LIT(KAloitusaika_maanantai2,"");
 Aloitusaika_maanantai2.Format(KAloitusaika_maanantai2); }
 else
	 {
	 if (Aloitus_min_maanantai[2] < 10) { 
	 _LIT(KAloitusaika_maanantai2,"%d:0%d - "); 
	 Aloitusaika_maanantai2.Format(KAloitusaika_maanantai2,Aloitus_h_maanantai[2],Aloitus_min_maanantai[2]); }
	 else { 
	 _LIT(KAloitusaika_maanantai2,"%d:%d - "); 
	 Aloitusaika_maanantai2.Format(KAloitusaika_maanantai2,Aloitus_h_maanantai[2],Aloitus_min_maanantai[2]); }
	 }
 
 
 
 if (Lopetus_h_maanantai[2] < 8) {
 _LIT(KLopetusaika_maanantai2,"");
 Lopetusaika_maanantai2.Format(KLopetusaika_maanantai2);
	 }
 else { if (Lopetus_min_maanantai[2] < 10) {
		 _LIT(KLopetusaika_maanantai2,"%d:0%d - ");			 
		 Lopetusaika_maanantai2.Format(KLopetusaika_maanantai2,Lopetus_h_maanantai[2],Lopetus_min_maanantai[2]);
		 }
	 else {
		 _LIT(KLopetusaika_maanantai2,"%d:%d - ");			 
		 Lopetusaika_maanantai2.Format(KLopetusaika_maanantai2,Lopetus_h_maanantai[2],Lopetus_min_maanantai[2]);
		 }
	 }
 
 if (Aloitus_h_maanantai[3] < 8) {
 _LIT(KAloitusaika_maanantai3,"");
 Aloitusaika_maanantai3.Format(KAloitusaika_maanantai3); }
 else
	 {
	 if (Aloitus_min_maanantai[3] < 10) { 
	 _LIT(KAloitusaika_maanantai3,"%d:0%d - "); 
	 Aloitusaika_maanantai3.Format(KAloitusaika_maanantai3,Aloitus_h_maanantai[3],Aloitus_min_maanantai[3]); }
	 else { 
	 _LIT(KAloitusaika_maanantai3,"%d:%d - "); 
	 Aloitusaika_maanantai3.Format(KAloitusaika_maanantai3,Aloitus_h_maanantai[3],Aloitus_min_maanantai[3]); }
	 }
 
 
 
 if (Lopetus_h_maanantai[3] < 8) {
 _LIT(KLopetusaika_maanantai3,"");
 Lopetusaika_maanantai3.Format(KLopetusaika_maanantai3);
	 }
 else { if (Lopetus_min_maanantai[3] < 10) {
		 _LIT(KLopetusaika_maanantai3,"%d:0%d - ");			 
		 Lopetusaika_maanantai3.Format(KLopetusaika_maanantai3,Lopetus_h_maanantai[3],Lopetus_min_maanantai[3]);
		 }
	 else {
		 _LIT(KLopetusaika_maanantai3,"%d:%d - ");			 
		 Lopetusaika_maanantai3.Format(KLopetusaika_maanantai3,Lopetus_h_maanantai[3],Lopetus_min_maanantai[3]);
		 }
	 }
 
 if (Aloitus_h_maanantai[4] < 8) {
 _LIT(KAloitusaika_maanantai4,"");
 Aloitusaika_maanantai4.Format(KAloitusaika_maanantai4); }
 else
	 {
	 if (Aloitus_min_maanantai[4] < 10) { 
	 _LIT(KAloitusaika_maanantai4,"%d:0%d - "); 
	 Aloitusaika_maanantai4.Format(KAloitusaika_maanantai4,Aloitus_h_maanantai[4],Aloitus_min_maanantai[4]); }
	 else { 
	 _LIT(KAloitusaika_maanantai4,"%d:%d - "); 
	 Aloitusaika_maanantai4.Format(KAloitusaika_maanantai4,Aloitus_h_maanantai[4],Aloitus_min_maanantai[4]); }
	 }
 
 
 
 if (Lopetus_h_maanantai[4] < 8) {
 _LIT(KLopetusaika_maanantai4,"");
 Lopetusaika_maanantai4.Format(KLopetusaika_maanantai4);
	 }
 else { if (Lopetus_min_maanantai[4] < 10) {
		 _LIT(KLopetusaika_maanantai4,"%d:0%d - ");			 
		 Lopetusaika_maanantai4.Format(KLopetusaika_maanantai4,Lopetus_h_maanantai[4],Lopetus_min_maanantai[4]);
		 }
	 else {
		 _LIT(KLopetusaika_maanantai4,"%d:%d - ");			 
		 Lopetusaika_maanantai4.Format(KLopetusaika_maanantai4,Lopetus_h_maanantai[4],Lopetus_min_maanantai[4]);
		 }
	 }
 

 if (Aloitus_h_maanantai[5] < 8) {
 _LIT(KAloitusaika_maanantai5,"");
 Aloitusaika_maanantai5.Format(KAloitusaika_maanantai5); }
 else
	 {
	 if (Aloitus_min_maanantai[5] < 10) { 
	 _LIT(KAloitusaika_maanantai5,"%d:0%d - "); 
	 Aloitusaika_maanantai5.Format(KAloitusaika_maanantai5,Aloitus_h_maanantai[5],Aloitus_min_maanantai[5]); }
	 else { 
	 _LIT(KAloitusaika_maanantai5,"%d:%d - "); 
	 Aloitusaika_maanantai5.Format(KAloitusaika_maanantai5,Aloitus_h_maanantai[5],Aloitus_min_maanantai[5]); }
	 }
 
 
 
 if (Lopetus_h_maanantai[5] < 8) {
 _LIT(KLopetusaika_maanantai5,"");
 Lopetusaika_maanantai5.Format(KLopetusaika_maanantai5);
	 }
 else { if (Lopetus_min_maanantai[5] < 10) {
		 _LIT(KLopetusaika_maanantai5,"%d:0%d - ");			 
		 Lopetusaika_maanantai5.Format(KLopetusaika_maanantai5,Lopetus_h_maanantai[5],Lopetus_min_maanantai[5]);
		 }
	 else {
		 _LIT(KLopetusaika_maanantai5,"%d:%d - ");			 
		 Lopetusaika_maanantai5.Format(KLopetusaika_maanantai5,Lopetus_h_maanantai[5],Lopetus_min_maanantai[5]);
		 }
	 }
 

 if (Aloitus_h_maanantai[6] < 8) {
 _LIT(KAloitusaika_maanantai6,"");
 Aloitusaika_maanantai6.Format(KAloitusaika_maanantai6); }
 else
	 {
	 if (Aloitus_min_maanantai[6] < 10) { 
	 _LIT(KAloitusaika_maanantai6,"%d:0%d - "); 
	 Aloitusaika_maanantai6.Format(KAloitusaika_maanantai6,Aloitus_h_maanantai[6],Aloitus_min_maanantai[6]); }
	 else { 
	 _LIT(KAloitusaika_maanantai6,"%d:%d - "); 
	 Aloitusaika_maanantai6.Format(KAloitusaika_maanantai6,Aloitus_h_maanantai[6],Aloitus_min_maanantai[6]); }
	 }
 
 
 
 if (Lopetus_h_maanantai[6] < 8) {
 _LIT(KLopetusaika_maanantai6,"");
 Lopetusaika_maanantai6.Format(KLopetusaika_maanantai6);
	 }
 else { if (Lopetus_min_maanantai[6] < 10) {
		 _LIT(KLopetusaika_maanantai6,"%d:0%d - ");			 
		 Lopetusaika_maanantai6.Format(KLopetusaika_maanantai6,Lopetus_h_maanantai[6],Lopetus_min_maanantai[6]);
		 }
	 else {
		 _LIT(KLopetusaika_maanantai6,"%d:%d - ");			 
		 Lopetusaika_maanantai6.Format(KLopetusaika_maanantai6,Lopetus_h_maanantai[6],Lopetus_min_maanantai[6]);
		 }
	 }

	// Ekstralogiikkaa: jos minuuteissa on "08" tai "00" tms., niin kone näyttää luvun
	// alapalkissa muodossa esim. 8:8 eikä 8:08, korjataan se alempana siis
if (Aloitus_h_tiistai[1] < 8) {
_LIT(KAloitusaika_tiistai1,"");
Aloitusaika_tiistai1.Format(KAloitusaika_tiistai1); }
else
	 {
	 if (Aloitus_min_tiistai[1] < 10) { 
	 _LIT(KAloitusaika_tiistai1,"%d:0%d - "); 
	 Aloitusaika_tiistai1.Format(KAloitusaika_tiistai1,Aloitus_h_tiistai[1],Aloitus_min_tiistai[1]); }
	 else { 
	 _LIT(KAloitusaika_tiistai1,"%d:%d - "); 
	 Aloitusaika_tiistai1.Format(KAloitusaika_tiistai1,Aloitus_h_tiistai[1],Aloitus_min_tiistai[1]); }
	 }



if (Lopetus_h_tiistai[1] < 8) {
_LIT(KLopetusaika_tiistai1,"");
Lopetusaika_tiistai1.Format(KLopetusaika_tiistai1);
	 }
else { if (Lopetus_min_tiistai[1] < 10) {
		 _LIT(KLopetusaika_tiistai1,"%d:0%d - ");			 
		 Lopetusaika_tiistai1.Format(KLopetusaika_tiistai1,Lopetus_h_tiistai[1],Lopetus_min_tiistai[1]);
		 }
	 else {
		 _LIT(KLopetusaika_tiistai1,"%d:%d - ");			 
		 Lopetusaika_tiistai1.Format(KLopetusaika_tiistai1,Lopetus_h_tiistai[1],Lopetus_min_tiistai[1]);
		 }
	 }






if (Aloitus_h_tiistai[2] < 8) {
_LIT(KAloitusaika_tiistai2,"");
Aloitusaika_tiistai2.Format(KAloitusaika_tiistai2); }
else
	 {
	 if (Aloitus_min_tiistai[2] < 10) { 
	 _LIT(KAloitusaika_tiistai2,"%d:0%d - "); 
	 Aloitusaika_tiistai2.Format(KAloitusaika_tiistai2,Aloitus_h_tiistai[2],Aloitus_min_tiistai[2]); }
	 else { 
	 _LIT(KAloitusaika_tiistai2,"%d:%d - "); 
	 Aloitusaika_tiistai2.Format(KAloitusaika_tiistai2,Aloitus_h_tiistai[2],Aloitus_min_tiistai[2]); }
	 }



if (Lopetus_h_tiistai[2] < 8) {
_LIT(KLopetusaika_tiistai2,"");
Lopetusaika_tiistai2.Format(KLopetusaika_tiistai2);
	 }
else { if (Lopetus_min_tiistai[2] < 10) {
		 _LIT(KLopetusaika_tiistai2,"%d:0%d - ");			 
		 Lopetusaika_tiistai2.Format(KLopetusaika_tiistai2,Lopetus_h_tiistai[2],Lopetus_min_tiistai[2]);
		 }
	 else {
		 _LIT(KLopetusaika_tiistai2,"%d:%d - ");			 
		 Lopetusaika_tiistai2.Format(KLopetusaika_tiistai2,Lopetus_h_tiistai[2],Lopetus_min_tiistai[2]);
		 }
	 }

if (Aloitus_h_tiistai[3] < 8) {
_LIT(KAloitusaika_tiistai3,"");
Aloitusaika_tiistai3.Format(KAloitusaika_tiistai3); }
else
	 {
	 if (Aloitus_min_tiistai[3] < 10) { 
	 _LIT(KAloitusaika_tiistai3,"%d:0%d - "); 
	 Aloitusaika_tiistai3.Format(KAloitusaika_tiistai3,Aloitus_h_tiistai[3],Aloitus_min_tiistai[3]); }
	 else { 
	 _LIT(KAloitusaika_tiistai3,"%d:%d - "); 
	 Aloitusaika_tiistai3.Format(KAloitusaika_tiistai3,Aloitus_h_tiistai[3],Aloitus_min_tiistai[3]); }
	 }



if (Lopetus_h_tiistai[3] < 8) {
_LIT(KLopetusaika_tiistai3,"");
Lopetusaika_tiistai3.Format(KLopetusaika_tiistai3);
	 }
else { if (Lopetus_min_tiistai[3] < 10) {
		 _LIT(KLopetusaika_tiistai3,"%d:0%d - ");			 
		 Lopetusaika_tiistai3.Format(KLopetusaika_tiistai3,Lopetus_h_tiistai[3],Lopetus_min_tiistai[3]);
		 }
	 else {
		 _LIT(KLopetusaika_tiistai3,"%d:%d - ");			 
		 Lopetusaika_tiistai3.Format(KLopetusaika_tiistai3,Lopetus_h_tiistai[3],Lopetus_min_tiistai[3]);
		 }
	 }

if (Aloitus_h_tiistai[4] < 8) {
_LIT(KAloitusaika_tiistai4,"");
Aloitusaika_tiistai4.Format(KAloitusaika_tiistai4); }
else
	 {
	 if (Aloitus_min_tiistai[4] < 10) { 
	 _LIT(KAloitusaika_tiistai4,"%d:0%d - "); 
	 Aloitusaika_tiistai4.Format(KAloitusaika_tiistai4,Aloitus_h_tiistai[4],Aloitus_min_tiistai[4]); }
	 else { 
	 _LIT(KAloitusaika_tiistai4,"%d:%d - "); 
	 Aloitusaika_tiistai4.Format(KAloitusaika_tiistai4,Aloitus_h_tiistai[4],Aloitus_min_tiistai[4]); }
	 }



if (Lopetus_h_tiistai[4] < 8) {
_LIT(KLopetusaika_tiistai4,"");
Lopetusaika_tiistai4.Format(KLopetusaika_tiistai4);
	 }
else { if (Lopetus_min_tiistai[4] < 10) {
		 _LIT(KLopetusaika_tiistai4,"%d:0%d - ");			 
		 Lopetusaika_tiistai4.Format(KLopetusaika_tiistai4,Lopetus_h_tiistai[4],Lopetus_min_tiistai[4]);
		 }
	 else {
		 _LIT(KLopetusaika_tiistai4,"%d:%d - ");			 
		 Lopetusaika_tiistai4.Format(KLopetusaika_tiistai4,Lopetus_h_tiistai[4],Lopetus_min_tiistai[4]);
		 }
	 }


if (Aloitus_h_tiistai[5] < 8) {
_LIT(KAloitusaika_tiistai5,"");
Aloitusaika_tiistai5.Format(KAloitusaika_tiistai5); }
else
	 {
	 if (Aloitus_min_tiistai[5] < 10) { 
	 _LIT(KAloitusaika_tiistai5,"%d:0%d - "); 
	 Aloitusaika_tiistai5.Format(KAloitusaika_tiistai5,Aloitus_h_tiistai[5],Aloitus_min_tiistai[5]); }
	 else { 
	 _LIT(KAloitusaika_tiistai5,"%d:%d - "); 
	 Aloitusaika_tiistai5.Format(KAloitusaika_tiistai5,Aloitus_h_tiistai[5],Aloitus_min_tiistai[5]); }
	 }



if (Lopetus_h_tiistai[5] < 8) {
_LIT(KLopetusaika_tiistai5,"");
Lopetusaika_tiistai5.Format(KLopetusaika_tiistai5);
	 }
else { if (Lopetus_min_tiistai[5] < 10) {
		 _LIT(KLopetusaika_tiistai5,"%d:0%d - ");			 
		 Lopetusaika_tiistai5.Format(KLopetusaika_tiistai5,Lopetus_h_tiistai[5],Lopetus_min_tiistai[5]);
		 }
	 else {
		 _LIT(KLopetusaika_tiistai5,"%d:%d - ");			 
		 Lopetusaika_tiistai5.Format(KLopetusaika_tiistai5,Lopetus_h_tiistai[5],Lopetus_min_tiistai[5]);
		 }
	 }


if (Aloitus_h_tiistai[6] < 8) {
_LIT(KAloitusaika_tiistai6,"");
Aloitusaika_tiistai6.Format(KAloitusaika_tiistai6); }
else
	 {
	 if (Aloitus_min_tiistai[6] < 10) { 
	 _LIT(KAloitusaika_tiistai6,"%d:0%d - "); 
	 Aloitusaika_tiistai6.Format(KAloitusaika_tiistai6,Aloitus_h_tiistai[6],Aloitus_min_tiistai[6]); }
	 else { 
	 _LIT(KAloitusaika_tiistai6,"%d:%d - "); 
	 Aloitusaika_tiistai6.Format(KAloitusaika_tiistai6,Aloitus_h_tiistai[6],Aloitus_min_tiistai[6]); }
	 }



if (Lopetus_h_tiistai[6] < 8) {
_LIT(KLopetusaika_tiistai6,"");
Lopetusaika_tiistai6.Format(KLopetusaika_tiistai6);
	 }
else { if (Lopetus_min_tiistai[6] < 10) {
		 _LIT(KLopetusaika_tiistai6,"%d:0%d - ");			 
		 Lopetusaika_tiistai6.Format(KLopetusaika_tiistai6,Lopetus_h_tiistai[6],Lopetus_min_tiistai[6]);
		 }
	 else {
		 _LIT(KLopetusaika_tiistai6,"%d:%d - ");			 
		 Lopetusaika_tiistai6.Format(KLopetusaika_tiistai6,Lopetus_h_tiistai[6],Lopetus_min_tiistai[6]);
		 }
	 }

// Ekstralogiikkaa: jos minuuteissa on "08" tai "00" tms., niin kone näyttää luvun
// alapalkissa muodossa esim. 8:8 eikä 8:08, korjataan se alempana siis
if (Aloitus_h_keskiviikko[1] < 8) {
_LIT(KAloitusaika_keskiviikko1,"");
Aloitusaika_keskiviikko1.Format(KAloitusaika_keskiviikko1); }
else
 {
 if (Aloitus_min_keskiviikko[1] < 10) { 
 _LIT(KAloitusaika_keskiviikko1,"%d:0%d - "); 
 Aloitusaika_keskiviikko1.Format(KAloitusaika_keskiviikko1,Aloitus_h_keskiviikko[1],Aloitus_min_keskiviikko[1]); }
 else { 
 _LIT(KAloitusaika_keskiviikko1,"%d:%d - "); 
 Aloitusaika_keskiviikko1.Format(KAloitusaika_keskiviikko1,Aloitus_h_keskiviikko[1],Aloitus_min_keskiviikko[1]); }
 }



if (Lopetus_h_keskiviikko[1] < 8) {
_LIT(KLopetusaika_keskiviikko1,"");
Lopetusaika_keskiviikko1.Format(KLopetusaika_keskiviikko1);
 }
else { if (Lopetus_min_keskiviikko[1] < 10) {
	 _LIT(KLopetusaika_keskiviikko1,"%d:0%d - ");			 
	 Lopetusaika_keskiviikko1.Format(KLopetusaika_keskiviikko1,Lopetus_h_keskiviikko[1],Lopetus_min_keskiviikko[1]);
	 }
 else {
	 _LIT(KLopetusaika_keskiviikko1,"%d:%d - ");			 
	 Lopetusaika_keskiviikko1.Format(KLopetusaika_keskiviikko1,Lopetus_h_keskiviikko[1],Lopetus_min_keskiviikko[1]);
	 }
 }






if (Aloitus_h_keskiviikko[2] < 8) {
_LIT(KAloitusaika_keskiviikko2,"");
Aloitusaika_keskiviikko2.Format(KAloitusaika_keskiviikko2); }
else
 {
 if (Aloitus_min_keskiviikko[2] < 10) { 
 _LIT(KAloitusaika_keskiviikko2,"%d:0%d - "); 
 Aloitusaika_keskiviikko2.Format(KAloitusaika_keskiviikko2,Aloitus_h_keskiviikko[2],Aloitus_min_keskiviikko[2]); }
 else { 
 _LIT(KAloitusaika_keskiviikko2,"%d:%d - "); 
 Aloitusaika_keskiviikko2.Format(KAloitusaika_keskiviikko2,Aloitus_h_keskiviikko[2],Aloitus_min_keskiviikko[2]); }
 }



if (Lopetus_h_keskiviikko[2] < 8) {
_LIT(KLopetusaika_keskiviikko2,"");
Lopetusaika_keskiviikko2.Format(KLopetusaika_keskiviikko2);
 }
else { if (Lopetus_min_keskiviikko[2] < 10) {
	 _LIT(KLopetusaika_keskiviikko2,"%d:0%d - ");			 
	 Lopetusaika_keskiviikko2.Format(KLopetusaika_keskiviikko2,Lopetus_h_keskiviikko[2],Lopetus_min_keskiviikko[2]);
	 }
 else {
	 _LIT(KLopetusaika_keskiviikko2,"%d:%d - ");			 
	 Lopetusaika_keskiviikko2.Format(KLopetusaika_keskiviikko2,Lopetus_h_keskiviikko[2],Lopetus_min_keskiviikko[2]);
	 }
 }

if (Aloitus_h_keskiviikko[3] < 8) {
_LIT(KAloitusaika_keskiviikko3,"");
Aloitusaika_keskiviikko3.Format(KAloitusaika_keskiviikko3); }
else
 {
 if (Aloitus_min_keskiviikko[3] < 10) { 
 _LIT(KAloitusaika_keskiviikko3,"%d:0%d - "); 
 Aloitusaika_keskiviikko3.Format(KAloitusaika_keskiviikko3,Aloitus_h_keskiviikko[3],Aloitus_min_keskiviikko[3]); }
 else { 
 _LIT(KAloitusaika_keskiviikko3,"%d:%d - "); 
 Aloitusaika_keskiviikko3.Format(KAloitusaika_keskiviikko3,Aloitus_h_keskiviikko[3],Aloitus_min_keskiviikko[3]); }
 }



if (Lopetus_h_keskiviikko[3] < 8) {
_LIT(KLopetusaika_keskiviikko3,"");
Lopetusaika_keskiviikko3.Format(KLopetusaika_keskiviikko3);
 }
else { if (Lopetus_min_keskiviikko[3] < 10) {
	 _LIT(KLopetusaika_keskiviikko3,"%d:0%d - ");			 
	 Lopetusaika_keskiviikko3.Format(KLopetusaika_keskiviikko3,Lopetus_h_keskiviikko[3],Lopetus_min_keskiviikko[3]);
	 }
 else {
	 _LIT(KLopetusaika_keskiviikko3,"%d:%d - ");			 
	 Lopetusaika_keskiviikko3.Format(KLopetusaika_keskiviikko3,Lopetus_h_keskiviikko[3],Lopetus_min_keskiviikko[3]);
	 }
 }

if (Aloitus_h_keskiviikko[4] < 8) {
_LIT(KAloitusaika_keskiviikko4,"");
Aloitusaika_keskiviikko4.Format(KAloitusaika_keskiviikko4); }
else
 {
 if (Aloitus_min_keskiviikko[4] < 10) { 
 _LIT(KAloitusaika_keskiviikko4,"%d:0%d - "); 
 Aloitusaika_keskiviikko4.Format(KAloitusaika_keskiviikko4,Aloitus_h_keskiviikko[4],Aloitus_min_keskiviikko[4]); }
 else { 
 _LIT(KAloitusaika_keskiviikko4,"%d:%d - "); 
 Aloitusaika_keskiviikko4.Format(KAloitusaika_keskiviikko4,Aloitus_h_keskiviikko[4],Aloitus_min_keskiviikko[4]); }
 }



if (Lopetus_h_keskiviikko[4] < 8) {
_LIT(KLopetusaika_keskiviikko4,"");
Lopetusaika_keskiviikko4.Format(KLopetusaika_keskiviikko4);
 }
else { if (Lopetus_min_keskiviikko[4] < 10) {
	 _LIT(KLopetusaika_keskiviikko4,"%d:0%d - ");			 
	 Lopetusaika_keskiviikko4.Format(KLopetusaika_keskiviikko4,Lopetus_h_keskiviikko[4],Lopetus_min_keskiviikko[4]);
	 }
 else {
	 _LIT(KLopetusaika_keskiviikko4,"%d:%d - ");			 
	 Lopetusaika_keskiviikko4.Format(KLopetusaika_keskiviikko4,Lopetus_h_keskiviikko[4],Lopetus_min_keskiviikko[4]);
	 }
 }


if (Aloitus_h_keskiviikko[5] < 8) {
_LIT(KAloitusaika_keskiviikko5,"");
Aloitusaika_keskiviikko5.Format(KAloitusaika_keskiviikko5); }
else
 {
 if (Aloitus_min_keskiviikko[5] < 10) { 
 _LIT(KAloitusaika_keskiviikko5,"%d:0%d - "); 
 Aloitusaika_keskiviikko5.Format(KAloitusaika_keskiviikko5,Aloitus_h_keskiviikko[5],Aloitus_min_keskiviikko[5]); }
 else { 
 _LIT(KAloitusaika_keskiviikko5,"%d:%d - "); 
 Aloitusaika_keskiviikko5.Format(KAloitusaika_keskiviikko5,Aloitus_h_keskiviikko[5],Aloitus_min_keskiviikko[5]); }
 }



if (Lopetus_h_keskiviikko[5] < 8) {
_LIT(KLopetusaika_keskiviikko5,"");
Lopetusaika_keskiviikko5.Format(KLopetusaika_keskiviikko5);
 }
else { if (Lopetus_min_keskiviikko[5] < 10) {
	 _LIT(KLopetusaika_keskiviikko5,"%d:0%d - ");			 
	 Lopetusaika_keskiviikko5.Format(KLopetusaika_keskiviikko5,Lopetus_h_keskiviikko[5],Lopetus_min_keskiviikko[5]);
	 }
 else {
	 _LIT(KLopetusaika_keskiviikko5,"%d:%d - ");			 
	 Lopetusaika_keskiviikko5.Format(KLopetusaika_keskiviikko5,Lopetus_h_keskiviikko[5],Lopetus_min_keskiviikko[5]);
	 }
 }


if (Aloitus_h_keskiviikko[6] < 8) {
_LIT(KAloitusaika_keskiviikko6,"");
Aloitusaika_keskiviikko6.Format(KAloitusaika_keskiviikko6); }
else
 {
 if (Aloitus_min_keskiviikko[6] < 10) { 
 _LIT(KAloitusaika_keskiviikko6,"%d:0%d - "); 
 Aloitusaika_keskiviikko6.Format(KAloitusaika_keskiviikko6,Aloitus_h_keskiviikko[6],Aloitus_min_keskiviikko[6]); }
 else { 
 _LIT(KAloitusaika_keskiviikko6,"%d:%d - "); 
 Aloitusaika_keskiviikko6.Format(KAloitusaika_keskiviikko6,Aloitus_h_keskiviikko[6],Aloitus_min_keskiviikko[6]); }
 }



if (Lopetus_h_keskiviikko[6] < 8) {
_LIT(KLopetusaika_keskiviikko6,"");
Lopetusaika_keskiviikko6.Format(KLopetusaika_keskiviikko6);
 }
else { if (Lopetus_min_keskiviikko[6] < 10) {
	 _LIT(KLopetusaika_keskiviikko6,"%d:0%d - ");			 
	 Lopetusaika_keskiviikko6.Format(KLopetusaika_keskiviikko6,Lopetus_h_keskiviikko[6],Lopetus_min_keskiviikko[6]);
	 }
 else {
	 _LIT(KLopetusaika_keskiviikko6,"%d:%d - ");			 
	 Lopetusaika_keskiviikko6.Format(KLopetusaika_keskiviikko6,Lopetus_h_keskiviikko[6],Lopetus_min_keskiviikko[6]);
	 }
 }
// Ekstralogiikkaa: jos minuuteissa on "08" tai "00" tms., niin kone näyttää luvun
// alapalkissa muodossa esim. 8:8 eikä 8:08, korjataan se alempana siis
if (Aloitus_h_torstai[1] < 8) {
_LIT(KAloitusaika_torstai1,"");
Aloitusaika_torstai1.Format(KAloitusaika_torstai1); }
else
 {
 if (Aloitus_min_torstai[1] < 10) { 
 _LIT(KAloitusaika_torstai1,"%d:0%d - "); 
 Aloitusaika_torstai1.Format(KAloitusaika_torstai1,Aloitus_h_torstai[1],Aloitus_min_torstai[1]); }
 else { 
 _LIT(KAloitusaika_torstai1,"%d:%d - "); 
 Aloitusaika_torstai1.Format(KAloitusaika_torstai1,Aloitus_h_torstai[1],Aloitus_min_torstai[1]); }
 }



if (Lopetus_h_torstai[1] < 8) {
_LIT(KLopetusaika_torstai1,"");
Lopetusaika_torstai1.Format(KLopetusaika_torstai1);
 }
else { if (Lopetus_min_torstai[1] < 10) {
	 _LIT(KLopetusaika_torstai1,"%d:0%d - ");			 
	 Lopetusaika_torstai1.Format(KLopetusaika_torstai1,Lopetus_h_torstai[1],Lopetus_min_torstai[1]);
	 }
 else {
	 _LIT(KLopetusaika_torstai1,"%d:%d - ");			 
	 Lopetusaika_torstai1.Format(KLopetusaika_torstai1,Lopetus_h_torstai[1],Lopetus_min_torstai[1]);
	 }
 }






if (Aloitus_h_torstai[2] < 8) {
_LIT(KAloitusaika_torstai2,"");
Aloitusaika_torstai2.Format(KAloitusaika_torstai2); }
else
 {
 if (Aloitus_min_torstai[2] < 10) { 
 _LIT(KAloitusaika_torstai2,"%d:0%d - "); 
 Aloitusaika_torstai2.Format(KAloitusaika_torstai2,Aloitus_h_torstai[2],Aloitus_min_torstai[2]); }
 else { 
 _LIT(KAloitusaika_torstai2,"%d:%d - "); 
 Aloitusaika_torstai2.Format(KAloitusaika_torstai2,Aloitus_h_torstai[2],Aloitus_min_torstai[2]); }
 }



if (Lopetus_h_torstai[2] < 8) {
_LIT(KLopetusaika_torstai2,"");
Lopetusaika_torstai2.Format(KLopetusaika_torstai2);
 }
else { if (Lopetus_min_torstai[2] < 10) {
	 _LIT(KLopetusaika_torstai2,"%d:0%d - ");			 
	 Lopetusaika_torstai2.Format(KLopetusaika_torstai2,Lopetus_h_torstai[2],Lopetus_min_torstai[2]);
	 }
 else {
	 _LIT(KLopetusaika_torstai2,"%d:%d - ");			 
	 Lopetusaika_torstai2.Format(KLopetusaika_torstai2,Lopetus_h_torstai[2],Lopetus_min_torstai[2]);
	 }
 }

if (Aloitus_h_torstai[3] < 8) {
_LIT(KAloitusaika_torstai3,"");
Aloitusaika_torstai3.Format(KAloitusaika_torstai3); }
else
 {
 if (Aloitus_min_torstai[3] < 10) { 
 _LIT(KAloitusaika_torstai3,"%d:0%d - "); 
 Aloitusaika_torstai3.Format(KAloitusaika_torstai3,Aloitus_h_torstai[3],Aloitus_min_torstai[3]); }
 else { 
 _LIT(KAloitusaika_torstai3,"%d:%d - "); 
 Aloitusaika_torstai3.Format(KAloitusaika_torstai3,Aloitus_h_torstai[3],Aloitus_min_torstai[3]); }
 }



if (Lopetus_h_torstai[3] < 8) {
_LIT(KLopetusaika_torstai3,"");
Lopetusaika_torstai3.Format(KLopetusaika_torstai3);
 }
else { if (Lopetus_min_torstai[3] < 10) {
	 _LIT(KLopetusaika_torstai3,"%d:0%d - ");			 
	 Lopetusaika_torstai3.Format(KLopetusaika_torstai3,Lopetus_h_torstai[3],Lopetus_min_torstai[3]);
	 }
 else {
	 _LIT(KLopetusaika_torstai3,"%d:%d - ");			 
	 Lopetusaika_torstai3.Format(KLopetusaika_torstai3,Lopetus_h_torstai[3],Lopetus_min_torstai[3]);
	 }
 }

if (Aloitus_h_torstai[4] < 8) {
_LIT(KAloitusaika_torstai4,"");
Aloitusaika_torstai4.Format(KAloitusaika_torstai4); }
else
 {
 if (Aloitus_min_torstai[4] < 10) { 
 _LIT(KAloitusaika_torstai4,"%d:0%d - "); 
 Aloitusaika_torstai4.Format(KAloitusaika_torstai4,Aloitus_h_torstai[4],Aloitus_min_torstai[4]); }
 else { 
 _LIT(KAloitusaika_torstai4,"%d:%d - "); 
 Aloitusaika_torstai4.Format(KAloitusaika_torstai4,Aloitus_h_torstai[4],Aloitus_min_torstai[4]); }
 }



if (Lopetus_h_torstai[4] < 8) {
_LIT(KLopetusaika_torstai4,"");
Lopetusaika_torstai4.Format(KLopetusaika_torstai4);
 }
else { if (Lopetus_min_torstai[4] < 10) {
	 _LIT(KLopetusaika_torstai4,"%d:0%d - ");			 
	 Lopetusaika_torstai4.Format(KLopetusaika_torstai4,Lopetus_h_torstai[4],Lopetus_min_torstai[4]);
	 }
 else {
	 _LIT(KLopetusaika_torstai4,"%d:%d - ");			 
	 Lopetusaika_torstai4.Format(KLopetusaika_torstai4,Lopetus_h_torstai[4],Lopetus_min_torstai[4]);
	 }
 }


if (Aloitus_h_torstai[5] < 8) {
_LIT(KAloitusaika_torstai5,"");
Aloitusaika_torstai5.Format(KAloitusaika_torstai5); }
else
 {
 if (Aloitus_min_torstai[5] < 10) { 
 _LIT(KAloitusaika_torstai5,"%d:0%d - "); 
 Aloitusaika_torstai5.Format(KAloitusaika_torstai5,Aloitus_h_torstai[5],Aloitus_min_torstai[5]); }
 else { 
 _LIT(KAloitusaika_torstai5,"%d:%d - "); 
 Aloitusaika_torstai5.Format(KAloitusaika_torstai5,Aloitus_h_torstai[5],Aloitus_min_torstai[5]); }
 }



if (Lopetus_h_torstai[5] < 8) {
_LIT(KLopetusaika_torstai5,"");
Lopetusaika_torstai5.Format(KLopetusaika_torstai5);
 }
else { if (Lopetus_min_torstai[5] < 10) {
	 _LIT(KLopetusaika_torstai5,"%d:0%d - ");			 
	 Lopetusaika_torstai5.Format(KLopetusaika_torstai5,Lopetus_h_torstai[5],Lopetus_min_torstai[5]);
	 }
 else {
	 _LIT(KLopetusaika_torstai5,"%d:%d - ");			 
	 Lopetusaika_torstai5.Format(KLopetusaika_torstai5,Lopetus_h_torstai[5],Lopetus_min_torstai[5]);
	 }
 }


if (Aloitus_h_torstai[6] < 8) {
_LIT(KAloitusaika_torstai6,"");
Aloitusaika_torstai6.Format(KAloitusaika_torstai6); }
else
 {
 if (Aloitus_min_torstai[6] < 10) { 
 _LIT(KAloitusaika_torstai6,"%d:0%d - "); 
 Aloitusaika_torstai6.Format(KAloitusaika_torstai6,Aloitus_h_torstai[6],Aloitus_min_torstai[6]); }
 else { 
 _LIT(KAloitusaika_torstai6,"%d:%d - "); 
 Aloitusaika_torstai6.Format(KAloitusaika_torstai6,Aloitus_h_torstai[6],Aloitus_min_torstai[6]); }
 }



if (Lopetus_h_torstai[6] < 8) {
_LIT(KLopetusaika_torstai6,"");
Lopetusaika_torstai6.Format(KLopetusaika_torstai6);
 }
else { if (Lopetus_min_torstai[6] < 10) {
	 _LIT(KLopetusaika_torstai6,"%d:0%d - ");			 
	 Lopetusaika_torstai6.Format(KLopetusaika_torstai6,Lopetus_h_torstai[6],Lopetus_min_torstai[6]);
	 }
 else {
	 _LIT(KLopetusaika_torstai6,"%d:%d - ");			 
	 Lopetusaika_torstai6.Format(KLopetusaika_torstai6,Lopetus_h_torstai[6],Lopetus_min_torstai[6]);
	 }
 }


// Ekstralogiikkaa: jos minuuteissa on "08" tai "00" tms., niin kone näyttää luvun
// alapalkissa muodossa esim. 8:8 eikä 8:08, korjataan se alempana siis
if (Aloitus_h_perjantai[1] < 8) {
_LIT(KAloitusaika_perjantai1,"");
Aloitusaika_perjantai1.Format(KAloitusaika_perjantai1); }
else
 {
 if (Aloitus_min_perjantai[1] < 10) { 
 _LIT(KAloitusaika_perjantai1,"%d:0%d - "); 
 Aloitusaika_perjantai1.Format(KAloitusaika_perjantai1,Aloitus_h_perjantai[1],Aloitus_min_perjantai[1]); }
 else { 
 _LIT(KAloitusaika_perjantai1,"%d:%d - "); 
 Aloitusaika_perjantai1.Format(KAloitusaika_perjantai1,Aloitus_h_perjantai[1],Aloitus_min_perjantai[1]); }
 }



if (Lopetus_h_perjantai[1] < 8) {
_LIT(KLopetusaika_perjantai1,"");
Lopetusaika_perjantai1.Format(KLopetusaika_perjantai1);
 }
else { if (Lopetus_min_perjantai[1] < 10) {
	 _LIT(KLopetusaika_perjantai1,"%d:0%d - ");			 
	 Lopetusaika_perjantai1.Format(KLopetusaika_perjantai1,Lopetus_h_perjantai[1],Lopetus_min_perjantai[1]);
	 }
 else {
	 _LIT(KLopetusaika_perjantai1,"%d:%d - ");			 
	 Lopetusaika_perjantai1.Format(KLopetusaika_perjantai1,Lopetus_h_perjantai[1],Lopetus_min_perjantai[1]);
	 }
 }






if (Aloitus_h_perjantai[2] < 8) {
_LIT(KAloitusaika_perjantai2,"");
Aloitusaika_perjantai2.Format(KAloitusaika_perjantai2); }
else
 {
 if (Aloitus_min_perjantai[2] < 10) { 
 _LIT(KAloitusaika_perjantai2,"%d:0%d - "); 
 Aloitusaika_perjantai2.Format(KAloitusaika_perjantai2,Aloitus_h_perjantai[2],Aloitus_min_perjantai[2]); }
 else { 
 _LIT(KAloitusaika_perjantai2,"%d:%d - "); 
 Aloitusaika_perjantai2.Format(KAloitusaika_perjantai2,Aloitus_h_perjantai[2],Aloitus_min_perjantai[2]); }
 }



if (Lopetus_h_perjantai[2] < 8) {
_LIT(KLopetusaika_perjantai2,"");
Lopetusaika_perjantai2.Format(KLopetusaika_perjantai2);
 }
else { if (Lopetus_min_perjantai[2] < 10) {
	 _LIT(KLopetusaika_perjantai2,"%d:0%d - ");			 
	 Lopetusaika_perjantai2.Format(KLopetusaika_perjantai2,Lopetus_h_perjantai[2],Lopetus_min_perjantai[2]);
	 }
 else {
	 _LIT(KLopetusaika_perjantai2,"%d:%d - ");			 
	 Lopetusaika_perjantai2.Format(KLopetusaika_perjantai2,Lopetus_h_perjantai[2],Lopetus_min_perjantai[2]);
	 }
 }

if (Aloitus_h_perjantai[3] < 8) {
_LIT(KAloitusaika_perjantai3,"");
Aloitusaika_perjantai3.Format(KAloitusaika_perjantai3); }
else
 {
 if (Aloitus_min_perjantai[3] < 10) { 
 _LIT(KAloitusaika_perjantai3,"%d:0%d - "); 
 Aloitusaika_perjantai3.Format(KAloitusaika_perjantai3,Aloitus_h_perjantai[3],Aloitus_min_perjantai[3]); }
 else { 
 _LIT(KAloitusaika_perjantai3,"%d:%d - "); 
 Aloitusaika_perjantai3.Format(KAloitusaika_perjantai3,Aloitus_h_perjantai[3],Aloitus_min_perjantai[3]); }
 }



if (Lopetus_h_perjantai[3] < 8) {
_LIT(KLopetusaika_perjantai3,"");
Lopetusaika_perjantai3.Format(KLopetusaika_perjantai3);
 }
else { if (Lopetus_min_perjantai[3] < 10) {
	 _LIT(KLopetusaika_perjantai3,"%d:0%d - ");			 
	 Lopetusaika_perjantai3.Format(KLopetusaika_perjantai3,Lopetus_h_perjantai[3],Lopetus_min_perjantai[3]);
	 }
 else {
	 _LIT(KLopetusaika_perjantai3,"%d:%d - ");			 
	 Lopetusaika_perjantai3.Format(KLopetusaika_perjantai3,Lopetus_h_perjantai[3],Lopetus_min_perjantai[3]);
	 }
 }

if (Aloitus_h_perjantai[4] < 8) {
_LIT(KAloitusaika_perjantai4,"");
Aloitusaika_perjantai4.Format(KAloitusaika_perjantai4); }
else
 {
 if (Aloitus_min_perjantai[4] < 10) { 
 _LIT(KAloitusaika_perjantai4,"%d:0%d - "); 
 Aloitusaika_perjantai4.Format(KAloitusaika_perjantai4,Aloitus_h_perjantai[4],Aloitus_min_perjantai[4]); }
 else { 
 _LIT(KAloitusaika_perjantai4,"%d:%d - "); 
 Aloitusaika_perjantai4.Format(KAloitusaika_perjantai4,Aloitus_h_perjantai[4],Aloitus_min_perjantai[4]); }
 }



if (Lopetus_h_perjantai[4] < 8) {
_LIT(KLopetusaika_perjantai4,"");
Lopetusaika_perjantai4.Format(KLopetusaika_perjantai4);
 }
else { if (Lopetus_min_perjantai[4] < 10) {
	 _LIT(KLopetusaika_perjantai4,"%d:0%d - ");			 
	 Lopetusaika_perjantai4.Format(KLopetusaika_perjantai4,Lopetus_h_perjantai[4],Lopetus_min_perjantai[4]);
	 }
 else {
	 _LIT(KLopetusaika_perjantai4,"%d:%d - ");			 
	 Lopetusaika_perjantai4.Format(KLopetusaika_perjantai4,Lopetus_h_perjantai[4],Lopetus_min_perjantai[4]);
	 }
 }


if (Aloitus_h_perjantai[5] < 8) {
_LIT(KAloitusaika_perjantai5,"");
Aloitusaika_perjantai5.Format(KAloitusaika_perjantai5); }
else
 {
 if (Aloitus_min_perjantai[5] < 10) { 
 _LIT(KAloitusaika_perjantai5,"%d:0%d - "); 
 Aloitusaika_perjantai5.Format(KAloitusaika_perjantai5,Aloitus_h_perjantai[5],Aloitus_min_perjantai[5]); }
 else { 
 _LIT(KAloitusaika_perjantai5,"%d:%d - "); 
 Aloitusaika_perjantai5.Format(KAloitusaika_perjantai5,Aloitus_h_perjantai[5],Aloitus_min_perjantai[5]); }
 }



if (Lopetus_h_perjantai[5] < 8) {
_LIT(KLopetusaika_perjantai5,"");
Lopetusaika_perjantai5.Format(KLopetusaika_perjantai5);
 }
else { if (Lopetus_min_perjantai[5] < 10) {
	 _LIT(KLopetusaika_perjantai5,"%d:0%d - ");			 
	 Lopetusaika_perjantai5.Format(KLopetusaika_perjantai5,Lopetus_h_perjantai[5],Lopetus_min_perjantai[5]);
	 }
 else {
	 _LIT(KLopetusaika_perjantai5,"%d:%d - ");			 
	 Lopetusaika_perjantai5.Format(KLopetusaika_perjantai5,Lopetus_h_perjantai[5],Lopetus_min_perjantai[5]);
	 }
 }


if (Aloitus_h_perjantai[6] < 8) {
_LIT(KAloitusaika_perjantai6,"");
Aloitusaika_perjantai6.Format(KAloitusaika_perjantai6); }
else
 {
 if (Aloitus_min_perjantai[6] < 10) { 
 _LIT(KAloitusaika_perjantai6,"%d:0%d - "); 
 Aloitusaika_perjantai6.Format(KAloitusaika_perjantai6,Aloitus_h_perjantai[6],Aloitus_min_perjantai[6]); }
 else { 
 _LIT(KAloitusaika_perjantai6,"%d:%d - "); 
 Aloitusaika_perjantai6.Format(KAloitusaika_perjantai6,Aloitus_h_perjantai[6],Aloitus_min_perjantai[6]); }
 }



if (Lopetus_h_perjantai[6] < 8) {
_LIT(KLopetusaika_perjantai6,"");
Lopetusaika_perjantai6.Format(KLopetusaika_perjantai6);
 }
else { if (Lopetus_min_perjantai[6] < 10) {
	 _LIT(KLopetusaika_perjantai6,"%d:0%d - ");			 
	 Lopetusaika_perjantai6.Format(KLopetusaika_perjantai6,Lopetus_h_perjantai[6],Lopetus_min_perjantai[6]);
	 }
 else {
	 _LIT(KLopetusaika_perjantai6,"%d:%d - ");			 
	 Lopetusaika_perjantai6.Format(KLopetusaika_perjantai6,Lopetus_h_perjantai[6],Lopetus_min_perjantai[6]);
	 }
 }

	}

void CScheduleContainer::CheckWeek()
{
	
	kuukausi.Zero();
 	
 	TBuf<20> Tammikuu; iCoeEnv->ReadResourceL(Tammikuu, R_TAMMIKUU);
	TBuf<20>Helmikuu; iCoeEnv->ReadResourceL(Helmikuu, R_HELMIKUU);
	TBuf<20>Maaliskuu; iCoeEnv->ReadResourceL(Maaliskuu, R_MAALISKUU);
	TBuf<20>Huhtikuu; iCoeEnv->ReadResourceL(Huhtikuu, R_HUHTIKUU);
	TBuf<20>Toukokuu; iCoeEnv->ReadResourceL(Toukokuu, R_TOUKOKUU);
	TBuf<20>Kesakuu; iCoeEnv->ReadResourceL(Kesakuu, R_KESAKUU);
	TBuf<20>Heinakuu; iCoeEnv->ReadResourceL(Heinakuu, R_HEINAKUU);
	TBuf<20>Elokuu; iCoeEnv->ReadResourceL(Elokuu, R_ELOKUU);
	TBuf<20>Syyskuu; iCoeEnv->ReadResourceL(Syyskuu, R_SYYSKUU);
	TBuf<20>Lokakuu; iCoeEnv->ReadResourceL(Lokakuu, R_LOKAKUU);
	TBuf<20>Marraskuu; iCoeEnv->ReadResourceL(Marraskuu, R_MARRASKUU);
	TBuf<20>Joulukuu; iCoeEnv->ReadResourceL(Joulukuu, R_JOULUKUU);

	
	
	
 	
 	if (WeekNo == ValiViikko[0]) { iCoeEnv->ReadResourceL(kuukausi, R_JOULUKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Tammikuu);}
 	if (WeekNo >= AloitusViikko[1] && WeekNo <= LopetusViikko[1]) { iCoeEnv->ReadResourceL(kuukausi, R_TAMMIKUU); }
 	if (WeekNo == ValiViikko[1]) { iCoeEnv->ReadResourceL(kuukausi, R_TAMMIKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Helmikuu);}
 	if (WeekNo >= AloitusViikko[2] && WeekNo <= LopetusViikko[2]) { iCoeEnv->ReadResourceL(kuukausi, R_HELMIKUU); }
 	if (WeekNo == ValiViikko[2]) { iCoeEnv->ReadResourceL(kuukausi, R_HELMIKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Maaliskuu);}
 	if (WeekNo >= AloitusViikko[3] && WeekNo <= LopetusViikko[3]) { iCoeEnv->ReadResourceL(kuukausi, R_MAALISKUU); }
 	if (WeekNo == ValiViikko[3]) { iCoeEnv->ReadResourceL(kuukausi, R_MAALISKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Huhtikuu);}
 	if (WeekNo >= AloitusViikko[4] && WeekNo <= LopetusViikko[4]) { iCoeEnv->ReadResourceL(kuukausi, R_HUHTIKUU); }
 	if (WeekNo == ValiViikko[4]) { iCoeEnv->ReadResourceL(kuukausi, R_HUHTIKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Toukokuu);}
 	if (WeekNo >= AloitusViikko[5] && WeekNo <= LopetusViikko[5]) { iCoeEnv->ReadResourceL(kuukausi, R_TOUKOKUU); }
 	if (WeekNo >= AloitusViikko[6] && WeekNo <= LopetusViikko[6]) { iCoeEnv->ReadResourceL(kuukausi, R_KESAKUU); }
 	if (WeekNo == ValiViikko[6]) { iCoeEnv->ReadResourceL(kuukausi, R_KESAKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Heinakuu);}
 	if (WeekNo >= AloitusViikko[7] && WeekNo <= LopetusViikko[7]) { iCoeEnv->ReadResourceL(kuukausi, R_HEINAKUU); }
 	if (WeekNo == ValiViikko[7]) { iCoeEnv->ReadResourceL(kuukausi, R_HEINAKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Elokuu);}
 	if (WeekNo >= AloitusViikko[8] && WeekNo <= LopetusViikko[8]) { iCoeEnv->ReadResourceL(kuukausi, R_ELOKUU); }
 	if (WeekNo == ValiViikko[8]) { iCoeEnv->ReadResourceL(kuukausi, R_ELOKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Syyskuu);}
 	if (WeekNo >= AloitusViikko[9] && WeekNo <= LopetusViikko[9]) { iCoeEnv->ReadResourceL(kuukausi, R_SYYSKUU); }
 	if (WeekNo == ValiViikko[9]) { iCoeEnv->ReadResourceL(kuukausi, R_SYYSKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Lokakuu);}
 	if (WeekNo >= AloitusViikko[10] && WeekNo <= LopetusViikko[10]) { iCoeEnv->ReadResourceL(kuukausi, R_LOKAKUU); }
 	if (WeekNo == ValiViikko[10]) { iCoeEnv->ReadResourceL(kuukausi, R_LOKAKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Marraskuu);}
 	if (WeekNo >= AloitusViikko[11] && WeekNo <= LopetusViikko[11]) { iCoeEnv->ReadResourceL(kuukausi, R_MARRASKUU); }
 	if (WeekNo == ValiViikko[11]) { iCoeEnv->ReadResourceL(kuukausi, R_MARRASKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Joulukuu);}
 	if (WeekNo >= AloitusViikko[12] && WeekNo <= LopetusViikko[12]) { iCoeEnv->ReadResourceL(kuukausi, R_JOULUKUU); }
 	if (WeekNo == ValiViikko[12]) { iCoeEnv->ReadResourceL(kuukausi, R_JOULUKUU); kuukausi.Append(_L(" - ")); kuukausi.Append(Tammikuu);}
 	
 	if (WeekNo == 1) { Week1(); Torstai.Format(_L("Torstai %d."),1); Perjantai.Format(_L("Perjantai %d."),2);  }
 	if (WeekNo == 2) { Week2(); Maanantai.Format(_L("Maanantai %d."),5); Tiistai.Format(_L("Tiistai %d."),6); Keskiviikko.Format(_L("Keskiviikko %d."),7); Torstai.Format(_L("Torstai %d."),8); Perjantai.Format(_L("Perjantai %d."),9);  }
 	if (WeekNo == 3) { Week3(); Maanantai.Format(_L("Maanantai %d."),12); Tiistai.Format(_L("Tiistai %d."),13); Keskiviikko.Format(_L("Keskiviikko %d."),14); Torstai.Format(_L("Torstai %d."),15); Perjantai.Format(_L("Perjantai %d."),16);  }
 	if (WeekNo == 4) { Week4(); Maanantai.Format(_L("Maanantai %d."),19); Tiistai.Format(_L("Tiistai %d."),20); Keskiviikko.Format(_L("Keskiviikko %d."),21); Torstai.Format(_L("Torstai %d."),22); Perjantai.Format(_L("Perjantai %d."),23);  }
 	if (WeekNo == 5) { Week5(); Maanantai.Format(_L("Maanantai %d."),26); Tiistai.Format(_L("Tiistai %d."),27); Keskiviikko.Format(_L("Keskiviikko %d."),28); Torstai.Format(_L("Torstai %d."),29); Perjantai.Format(_L("Perjantai %d."),30);  }
 	if (WeekNo == 6) { Week6(); Maanantai.Format(_L("Maanantai %d."),2); Tiistai.Format(_L("Tiistai %d."),3); Keskiviikko.Format(_L("Keskiviikko %d."),4); Torstai.Format(_L("Torstai %d."),5); Perjantai.Format(_L("Perjantai %d."),6);  }
 	if (WeekNo == 7) { Week7(); Maanantai.Format(_L("Maanantai %d."),9); Tiistai.Format(_L("Tiistai %d."),10); Keskiviikko.Format(_L("Keskiviikko %d."),11); Torstai.Format(_L("Torstai %d."),12); Perjantai.Format(_L("Perjantai %d."),13);  }
 	if (WeekNo == 8) { Week8(); Maanantai.Format(_L("Maanantai %d."),16); Tiistai.Format(_L("Tiistai %d."),17); Keskiviikko.Format(_L("Keskiviikko %d."),18); Torstai.Format(_L("Torstai %d."),19); Perjantai.Format(_L("Perjantai %d."),20);  }
 	if (WeekNo == 9) { Week9(); Maanantai.Format(_L("Maanantai %d."),23); Tiistai.Format(_L("Tiistai %d."),24); Keskiviikko.Format(_L("Keskiviikko %d."),25); Torstai.Format(_L("Torstai %d."),26); Perjantai.Format(_L("Perjantai %d."),27);  }
 	if (WeekNo == 10) { Week10(); Maanantai.Format(_L("Maanantai %d."),2); Tiistai.Format(_L("Tiistai %d."),3); Keskiviikko.Format(_L("Keskiviikko %d."),4); Torstai.Format(_L("Torstai %d."),5); Perjantai.Format(_L("Perjantai %d."),6);  }
 	if (WeekNo == 11) { Week11(); Maanantai.Format(_L("Maanantai %d."),9); Tiistai.Format(_L("Tiistai %d."),10); Keskiviikko.Format(_L("Keskiviikko %d."),11); Torstai.Format(_L("Torstai %d."),12); Perjantai.Format(_L("Perjantai %d."),13);  }
 	if (WeekNo == 12) { Week12(); Maanantai.Format(_L("Maanantai %d."),16); Tiistai.Format(_L("Tiistai %d."),17); Keskiviikko.Format(_L("Keskiviikko %d."),18); Torstai.Format(_L("Torstai %d."),19); Perjantai.Format(_L("Perjantai %d."),20);  }
 	if (WeekNo == 13) { Week13(); Maanantai.Format(_L("Maanantai %d."),23); Tiistai.Format(_L("Tiistai %d."),24); Keskiviikko.Format(_L("Keskiviikko %d."),25); Torstai.Format(_L("Torstai %d."),26); Perjantai.Format(_L("Perjantai %d."),27);  }
 	if (WeekNo == 14) { Week14(); Maanantai.Format(_L("Maanantai %d."),30); Tiistai.Format(_L("Tiistai %d."),31); Keskiviikko.Format(_L("Keskiviikko %d."),1); Torstai.Format(_L("Torstai %d."),2); Perjantai.Format(_L("Perjantai %d."),3);  }
 	if (WeekNo == 15) { Week15(); Maanantai.Format(_L("Maanantai %d."),6); Tiistai.Format(_L("Tiistai %d."),7); Keskiviikko.Format(_L("Keskiviikko %d."),8); Torstai.Format(_L("Torstai %d."),9); Perjantai.Format(_L("Perjantai %d."),10);  }
 	if (WeekNo == 16) { Week16(); Maanantai.Format(_L("Maanantai %d."),13); Tiistai.Format(_L("Tiistai %d."),14); Keskiviikko.Format(_L("Keskiviikko %d."),15); Torstai.Format(_L("Torstai %d."),16); Perjantai.Format(_L("Perjantai %d."),17);  }
 	if (WeekNo == 17) { Week17(); Maanantai.Format(_L("Maanantai %d."),20); Tiistai.Format(_L("Tiistai %d."),21); Keskiviikko.Format(_L("Keskiviikko %d."),22); Torstai.Format(_L("Torstai %d."),23); Perjantai.Format(_L("Perjantai %d."),24);  }
 	if (WeekNo == 18) { Week18(); Maanantai.Format(_L("Maanantai %d."),27); Tiistai.Format(_L("Tiistai %d."),28); Keskiviikko.Format(_L("Keskiviikko %d."),29); Torstai.Format(_L("Torstai %d."),30); Perjantai.Format(_L("Perjantai %d."),1);  }
 	if (WeekNo == 19) { Week19(); Maanantai.Format(_L("Maanantai %d."),4); Tiistai.Format(_L("Tiistai %d."),5); Keskiviikko.Format(_L("Keskiviikko %d."),6); Torstai.Format(_L("Torstai %d."),7); Perjantai.Format(_L("Perjantai %d."),8);  }
 	if (WeekNo == 20) { Week20(); Maanantai.Format(_L("Maanantai %d."),11); Tiistai.Format(_L("Tiistai %d."),12); Keskiviikko.Format(_L("Keskiviikko %d."),13); Torstai.Format(_L("Torstai %d."),14); Perjantai.Format(_L("Perjantai %d."),15);  }
 	if (WeekNo == 21) { Week21(); Maanantai.Format(_L("Maanantai %d."),18); Tiistai.Format(_L("Tiistai %d."),19); Keskiviikko.Format(_L("Keskiviikko %d."),20); Torstai.Format(_L("Torstai %d."),21); Perjantai.Format(_L("Perjantai %d."),22);  }
 	if (WeekNo == 22) { Week22(); Maanantai.Format(_L("Maanantai %d."),25); Tiistai.Format(_L("Tiistai %d."),26); Keskiviikko.Format(_L("Keskiviikko %d."),27); Torstai.Format(_L("Torstai %d."),28); Perjantai.Format(_L("Perjantai %d."),29);  }
 	if (WeekNo == 23) { Week23(); Maanantai.Format(_L("Maanantai %d."),1); Tiistai.Format(_L("Tiistai %d."),2); Keskiviikko.Format(_L("Keskiviikko %d."),3); Torstai.Format(_L("Torstai %d."),4); Perjantai.Format(_L("Perjantai %d."),5);  }
 	if (WeekNo == 24) { Week24(); Maanantai.Format(_L("Maanantai %d."),8); Tiistai.Format(_L("Tiistai %d."),9); Keskiviikko.Format(_L("Keskiviikko %d."),10); Torstai.Format(_L("Torstai %d."),11); Perjantai.Format(_L("Perjantai %d."),12);  }
 	if (WeekNo == 25) { Week25(); Maanantai.Format(_L("Maanantai %d."),15); Tiistai.Format(_L("Tiistai %d."),16); Keskiviikko.Format(_L("Keskiviikko %d."),17); Torstai.Format(_L("Torstai %d."),18); Perjantai.Format(_L("Perjantai %d."),19);  }
 	if (WeekNo == 26) { Week26(); Maanantai.Format(_L("Maanantai %d."),22); Tiistai.Format(_L("Tiistai %d."),23); Keskiviikko.Format(_L("Keskiviikko %d."),24); Torstai.Format(_L("Torstai %d."),25); Perjantai.Format(_L("Perjantai %d."),26);  }
 	if (WeekNo == 27) { Week27(); Maanantai.Format(_L("Maanantai %d."),29); Tiistai.Format(_L("Tiistai %d."),30); Keskiviikko.Format(_L("Keskiviikko %d."),1); Torstai.Format(_L("Torstai %d."),2); Perjantai.Format(_L("Perjantai %d."),3);  }
 	if (WeekNo == 28) { Week28(); Maanantai.Format(_L("Maanantai %d."),6); Tiistai.Format(_L("Tiistai %d."),7); Keskiviikko.Format(_L("Keskiviikko %d."),8); Torstai.Format(_L("Torstai %d."),9); Perjantai.Format(_L("Perjantai %d."),10);  }
 	if (WeekNo == 29) { Week29(); Maanantai.Format(_L("Maanantai %d."),13); Tiistai.Format(_L("Tiistai %d."),14); Keskiviikko.Format(_L("Keskiviikko %d."),15); Torstai.Format(_L("Torstai %d."),16); Perjantai.Format(_L("Perjantai %d."),17);  }
 	if (WeekNo == 30) { Week30(); Maanantai.Format(_L("Maanantai %d."),20); Tiistai.Format(_L("Tiistai %d."),21); Keskiviikko.Format(_L("Keskiviikko %d."),22); Torstai.Format(_L("Torstai %d."),23); Perjantai.Format(_L("Perjantai %d."),24);  }
 	if (WeekNo == 31) { Week31(); Maanantai.Format(_L("Maanantai %d."),27); Tiistai.Format(_L("Tiistai %d."),28); Keskiviikko.Format(_L("Keskiviikko %d."),29); Torstai.Format(_L("Torstai %d."),30); Perjantai.Format(_L("Perjantai %d."),31);  }
 	if (WeekNo == 32) { Week32(); Maanantai.Format(_L("Maanantai %d."),3); Tiistai.Format(_L("Tiistai %d."),4); Keskiviikko.Format(_L("Keskiviikko %d."),5); Torstai.Format(_L("Torstai %d."),6); Perjantai.Format(_L("Perjantai %d."),7);  }
 	if (WeekNo == 33) { Week33(); Maanantai.Format(_L("Maanantai %d."),10); Tiistai.Format(_L("Tiistai %d."),11); Keskiviikko.Format(_L("Keskiviikko %d."),12); Torstai.Format(_L("Torstai %d."),13); Perjantai.Format(_L("Perjantai %d."),14);  }
 	if (WeekNo == 34) { Week34(); Maanantai.Format(_L("Maanantai %d."),17); Tiistai.Format(_L("Tiistai %d."),18); Keskiviikko.Format(_L("Keskiviikko %d."),19); Torstai.Format(_L("Torstai %d."),20); Perjantai.Format(_L("Perjantai %d."),21);  }
 	if (WeekNo == 35) { Week35(); Maanantai.Format(_L("Maanantai %d."),24); Tiistai.Format(_L("Tiistai %d."),25); Keskiviikko.Format(_L("Keskiviikko %d."),26); Torstai.Format(_L("Torstai %d."),27); Perjantai.Format(_L("Perjantai %d."),28);  }
 	if (WeekNo == 36) { Week36(); Maanantai.Format(_L("Maanantai %d."),31); Tiistai.Format(_L("Tiistai %d."),1); Keskiviikko.Format(_L("Keskiviikko %d."),2); Torstai.Format(_L("Torstai %d."),3); Perjantai.Format(_L("Perjantai %d."),4);  }
 	if (WeekNo == 37) { Week37(); Maanantai.Format(_L("Maanantai %d."),7); Tiistai.Format(_L("Tiistai %d."),8); Keskiviikko.Format(_L("Keskiviikko %d."),9); Torstai.Format(_L("Torstai %d."),10); Perjantai.Format(_L("Perjantai %d."),11);  }
 	if (WeekNo == 38) { Week38(); Maanantai.Format(_L("Maanantai %d."),14); Tiistai.Format(_L("Tiistai %d."),15); Keskiviikko.Format(_L("Keskiviikko %d."),16); Torstai.Format(_L("Torstai %d."),17); Perjantai.Format(_L("Perjantai %d."),18);  }
 	if (WeekNo == 39) { Week39(); Maanantai.Format(_L("Maanantai %d."),21); Tiistai.Format(_L("Tiistai %d."),22); Keskiviikko.Format(_L("Keskiviikko %d."),23); Torstai.Format(_L("Torstai %d."),24); Perjantai.Format(_L("Perjantai %d."),25);  }
 	if (WeekNo == 40) { Week40(); Maanantai.Format(_L("Maanantai %d."),28); Tiistai.Format(_L("Tiistai %d."),29); Keskiviikko.Format(_L("Keskiviikko %d."),30); Torstai.Format(_L("Torstai %d."),1); Perjantai.Format(_L("Perjantai %d."),2);  }
 	if (WeekNo == 41) { Week41(); Maanantai.Format(_L("Maanantai %d."),5); Tiistai.Format(_L("Tiistai %d."),6); Keskiviikko.Format(_L("Keskiviikko %d."),7); Torstai.Format(_L("Torstai %d."),8); Perjantai.Format(_L("Perjantai %d."),9);  }
 	if (WeekNo == 42) { Week42(); Maanantai.Format(_L("Maanantai %d."),12); Tiistai.Format(_L("Tiistai %d."),13); Keskiviikko.Format(_L("Keskiviikko %d."),14); Torstai.Format(_L("Torstai %d."),15); Perjantai.Format(_L("Perjantai %d."),16);  }
 	if (WeekNo == 43) { Week43(); Maanantai.Format(_L("Maanantai %d."),19); Tiistai.Format(_L("Tiistai %d."),20); Keskiviikko.Format(_L("Keskiviikko %d."),21); Torstai.Format(_L("Torstai %d."),22); Perjantai.Format(_L("Perjantai %d."),23);  }
 	if (WeekNo == 44) { Week44(); Maanantai.Format(_L("Maanantai %d."),26); Tiistai.Format(_L("Tiistai %d."),27); Keskiviikko.Format(_L("Keskiviikko %d."),28); Torstai.Format(_L("Torstai %d."),29); Perjantai.Format(_L("Perjantai %d."),30);  }
 	if (WeekNo == 45) { Week45(); Maanantai.Format(_L("Maanantai %d."),2); Tiistai.Format(_L("Tiistai %d."),3); Keskiviikko.Format(_L("Keskiviikko %d."),4); Torstai.Format(_L("Torstai %d."),5); Perjantai.Format(_L("Perjantai %d."),6);  }
 	if (WeekNo == 46) { Week46(); Maanantai.Format(_L("Maanantai %d."),9); Tiistai.Format(_L("Tiistai %d."),10); Keskiviikko.Format(_L("Keskiviikko %d."),11); Torstai.Format(_L("Torstai %d."),12); Perjantai.Format(_L("Perjantai %d."),13);  }
 	if (WeekNo == 47) { Week47(); Maanantai.Format(_L("Maanantai %d."),16); Tiistai.Format(_L("Tiistai %d."),17); Keskiviikko.Format(_L("Keskiviikko %d."),18); Torstai.Format(_L("Torstai %d."),19); Perjantai.Format(_L("Perjantai %d."),20);  }
 	if (WeekNo == 48) { Week48(); Maanantai.Format(_L("Maanantai %d."),23); Tiistai.Format(_L("Tiistai %d."),24); Keskiviikko.Format(_L("Keskiviikko %d."),25); Torstai.Format(_L("Torstai %d."),26); Perjantai.Format(_L("Perjantai %d."),27);  }
 	if (WeekNo == 49) { Week49(); Maanantai.Format(_L("Maanantai %d."),30); Tiistai.Format(_L("Tiistai %d."),1); Keskiviikko.Format(_L("Keskiviikko %d."),2); Torstai.Format(_L("Torstai %d."),3); Perjantai.Format(_L("Perjantai %d."),4);  }
 	if (WeekNo == 50) { Week50(); Maanantai.Format(_L("Maanantai %d."),7); Tiistai.Format(_L("Tiistai %d."),8); Keskiviikko.Format(_L("Keskiviikko %d."),9); Torstai.Format(_L("Torstai %d."),10); Perjantai.Format(_L("Perjantai %d."),11);  }
 	if (WeekNo == 51) { Week51(); Maanantai.Format(_L("Maanantai %d."),14); Tiistai.Format(_L("Tiistai %d."),15); Keskiviikko.Format(_L("Keskiviikko %d."),16); Torstai.Format(_L("Torstai %d."),17); Perjantai.Format(_L("Perjantai %d."),18);  }
 	if (WeekNo == 52) { Week52(); Maanantai.Format(_L("Maanantai %d."),21); Tiistai.Format(_L("Tiistai %d."),22); Keskiviikko.Format(_L("Keskiviikko %d."),23); Torstai.Format(_L("Torstai %d."),24); Perjantai.Format(_L("Perjantai %d."),25);  }
 	if (WeekNo == 53) { Week53(); Maanantai.Format(_L("Maanantai %d."),28); Tiistai.Format(_L("Tiistai %d."),29); Keskiviikko.Format(_L("Keskiviikko %d."),30); Torstai.Format(_L("Torstai %d."),31);  }


 	
}
