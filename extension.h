/*
 * extension.h
 *
 *  Created on: Dec 3, 2023
 *      Author: Ali Reda
 */

#ifndef EXTENSION_H_
#define EXTENSION_H_

#include <stdio.h>
#include <stdlib.h>


#define  DPrintf(...)   {fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin); }

typedef struct {
	char fname[50];
	int student_ID;
	char Gender;
	int Age;
	int Study_year;
}data;

data arr[50];

#endif /* EXTENSION_H_ */
