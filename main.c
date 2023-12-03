/*
 * main.c
 *
 *  Created on: Dec 3, 2023
 *      Author: Ali Reda
 */

#include <stdio.h>
#include <stdlib.h>
#include "extension.h"

#define  DPrintf(...)   {fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin); }

#define Debug

#define dprintf(debug_level, ...)   if(debug_level>1)  printf("@ func : %s , file : %s , line : %d ",__func__,__FILE__,__LINE__);\
		printf(">> ");\
		printf(#__VA_ARGS__);

int main()
{
#ifdef Debug
	dprintf(2,enter main);
#endif
	int n;

	while(1)
	{
		DPrintf("\n ==============================");
		DPrintf("\n\t Choose one of the following options \n");
		DPrintf("\n\t 1: Add new student data \n");
		DPrintf("\n\t 2: Delete existing student using student id \n");
		DPrintf("\n\t 3: Display all students \n");
		DPrintf("\n\t 4: Exit \n");
		DPrintf("\n\t Enter Option Number : ");

		scanf("%d", &n);
		DPrintf("\n ==============================");

		switch(n)
		{
		case 1:
			system("CLS");
			ADD_Student_Manually();
			break;
		case 2:
			Delete_student();
			break;
		case 3:
			Show_all_information();
			break;
		case 4:
			Exit();
			break;
		default :
			DPrintf("\n Wrong Option");
			break;
		}
	}
#ifdef Debug
	dprintf(2,close main);
#endif

	return 0;
}



