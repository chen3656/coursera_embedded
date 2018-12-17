/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Statistic Functions
 *
 * Statistic functions like geting the min, max or median of a array, 
 * or tries to sort an array
 *
 * @author Shilin Chen
 * @date 11/29/2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  print_array(test, SIZE);
  printf("After Sort....\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */

// A function that prints the statistics of an array including minimum, maximum, mean, and median.
void print_statistics(unsigned char* array, unsigned int n) {
	printf("The median value is: %d\n", find_median(array, n));
	printf("The mean value is: %d\n", find_mean(array, n));
	printf("The maximum value is: %d\n", find_maximum(array, n));
	printf("The mimimum value is: %d\n", find_minimum(array, n));
}

//  Given an array of data and a length, prints the array to the screen
void print_array(unsigned char* array, unsigned int n) {	
	unsigned int i = 0;
	printf("Printed Array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", array[i]);	
	}
	printf("\n");
}

// Given an array of data and a length, returns the median value
unsigned char find_median(unsigned char* array, unsigned int n) {
	unsigned int mid = n / 2;
	return array[mid];
	
}

// Given an array of data and a length, returns the mean
unsigned char find_mean(unsigned char* array, unsigned int n) {
	unsigned int result = 0;
	unsigned int i = 0;	
	for (i = 0; i < n; i++) {
		result += array[i];	
	}
	return (unsigned char) (result / n);
}

// Given an array of data and a length, returns the maximum
unsigned char find_maximum(unsigned char* array, unsigned int n) {
	unsigned char max = 0;
	unsigned int i = 0;	
	for (i = 0; i < n; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	return max;
}

// Given an array of data and a length, returns the minimum
unsigned char find_minimum(unsigned char* array, unsigned int n) {
	unsigned char min = 255;
	unsigned int i = 0;	
	for (i = 0; i < n; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}
	return min;
}

// Given an array of data and a length, sorts the array from largest to smallest.
void sort_array(unsigned char* array, unsigned int n) {
	unsigned int max = 0;
	unsigned int i = 0, j = 0;
	for (i = 0; i < n - 1; i++) {
		max = i;
		for (j = i; j < n; j++) {
			if (array[j] > array[max]) {
				max = j;
			}		
		}
		unsigned char temp = array[max];
		array[max] = array[i];
		array[i] = temp;
	}
}
