/*
 * Delete_Student.c
 *
 *  Created on: Dec 3, 2023
 *      Author: Ali Reda
 */

#include "extension.h"
#include "string.h"
// Function to delete a student by their ID

void Delete_student()
{
	printf("\n Enter ID to delete :");
	fflush(stdout);
	fflush(stdin);
	int ID;
	scanf("%d" ,&ID);
	int x = ID -1;
	arr[x].Age=0;
	arr[x].Gender=' ';
	arr[x].Study_year=0;
	arr[x].student_ID=0;
	strcpy(arr[x].fname,"   ");
	// Open the file for writing
	FILE* file = fopen("students.txt", "w");
	// Check if the file was opened successfully
	if (file == NULL)
	{
		printf("\n Unable to open the file.\n");
		return ; // Exit with an error code
	}
	int i;
	for(i=0; i<=50; i++)
	{
		if(i==x) i++;
		// Write to the file
		fprintf(file,"%d %s %c %d %d\n",arr[i].student_ID, arr[i].fname, arr[i].Gender, arr[i].Age, arr[i].Study_year);
	}

	// Close the file
	fclose(file);
	DPrintf("\n\t[INFO] Student details are deleted successfully  ");
}
