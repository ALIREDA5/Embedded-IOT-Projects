/*
 * Show_all_Students.c
 *
 *  Created on: Dec 3, 2023
 *      Author: Alj Reda
 */

#include "extension.h"

int i;

void Show_all_information()
{
	int j;
	for(j=0; j<i; j++)
	{
		DPrintf("\n %d , %s , %c , %d , %d \n",arr[j].student_ID, arr[j].fname, arr[j].Gender, arr[j].Study_year, arr[j].Age);
	}
}
