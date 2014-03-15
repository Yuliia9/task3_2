#ifndef TASK3_2_H_
#define TASK3_2_H_
/*
*@file		task3_2.h
*@brief		header file that defines prototypes of functions used in file task3_2.cpp
*/
#include "stdafx.h"

/*
* @brief				This function displays general information about program to users
* @param	void
* @return	void
*/
void Inteface(void);

/*
* @brief					Function for presenting days as day and month
* @param	[in]			unsigned int day - days in the year 
*
*@return	unsigned char	Return ERROR if day isn't within days of the year
							Return SUCCESS if day was presented in required form
*/
unsigned char Conversion(unsigned int day);

#endif