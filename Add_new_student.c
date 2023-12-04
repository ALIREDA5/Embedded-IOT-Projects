/*
 * Add_new_student.c
 *
 *  Created on: Dec 3, 2023
 *      Author: Ahmed fareed
 */

#include "extension.h"

extern int i=0;

// Function to add student details manually
void ADD_Student_Manually()
{

	DPrintf("\n\t Enter full Name : ");
	gets(arr[i].fname);
	DPrintf("\n\t Enter Gender : ");
	scanf("%c", &(arr[i].Gender));
	DPrintf("\n\t Enter Age : ");
	scanf("%d", &(arr[i].Age));
	DPrintf("\n\t Enter Study_year : ");
	scanf("%d", &(arr[i].Study_year));
	i++;
	arr[i-1].student_ID=i;
	// Open the file for writing
	FILE* file = fopen("students.txt", "w");
	// Check if the file was opened successfully
	if (file == NULL)
	{
		printf("\n Unable to open the file.\n");
		return ; // Exit with an error code
	}
	// Write to the file
	fprintf(file,"%d , %s , %c , %d , %d\n", arr[i].student_ID, arr[i].fname, arr[i].Gender, arr[i].Age, arr[i].Study_year);
	// Close the file
	fclose(file);
	DPrintf("\n\t[INFO] Student details are added successfully  ");
}
