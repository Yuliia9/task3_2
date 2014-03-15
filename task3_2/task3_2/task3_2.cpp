/*
* @file			task3_2.cpp
* @brief		Program choose defined quantity of days in the year and presents them in the form of day and month

* Copyright 2014 by Yuliia Lyubchik Inc.,
*
* This software is the confidential and proprietary information
* of Yuliia Lyubchik. ("Confidential Information").  You
* shall not disclose such Confidential Information and shall use
* it only with permission from Yuliia.
*
*/


#include "stdafx.h"
#include "task3_2.h"	/*defines prototypes of used in this file functions*/
#include <conio.h>
#include <stdlib.h>
#include <time.h>   

const unsigned char ERROR = 0;
const unsigned char SUCCESS = 1;
const unsigned char MAIN_SUCCESS = 0;

const unsigned int quantity = 5; /*the quantity of days needed to be shown*/

int main( )
{
	Inteface();
	unsigned int day, i;
	unsigned char retCode;

	srand(time(NULL));
	for (i = 0; i < quantity; ++i)
	{

		day = rand() % 365 + 1;
		printf("%u -> ", day);
		retCode = Conversion(day);
		if (retCode == ERROR)
		{
			--i;
		}
		printf("\n");
	}
	_getch();
	return MAIN_SUCCESS;
}

void Inteface(void)
{
	printf("------------------------------------------------------------------\n");
	printf("Hi! Welcome to the genius calendar.\n");
	printf("Program will show you number of days in presentation of day and month. \n");
	printf("Program made by Yuliia Lyubchik.\n");
	printf("------------------------------------------------------------------\n\n");
}

unsigned char Conversion(unsigned int day)
{
	if (day < 0 || day > 365)
	{
		printf("Please check the number. It must be within days of the year. \n");
		return ERROR;
	}
	unsigned int i;

	char* Month[] = { "January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November", "December" };
	unsigned int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	for (i = 0; day > days[i]; ++i)
	{
		day -= days[i];
	}
	printf("%u %s", day, Month[i]);
	return SUCCESS;
}

