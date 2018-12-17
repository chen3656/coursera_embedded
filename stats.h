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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Given an array of data and a length, prints the array to the screen

 * This function print all the value in a 32-bit unsigned char array 
 *
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return Nothing return
 */
void print_array(unsigned char* array, unsigned int n);
/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.

 * This function will sort the data array, form largest to smallest 
 *
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return Nothing return
 */
void sort_array(unsigned char* array, unsigned int n);


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function returns the statistics information of the array, 
 * including the median, mean, min and max value
 *
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return Nothing return
 */
void print_statistics(unsigned char* array, unsigned int n);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * This function returns the median of the array, 
 * Since the return type is unsigned char, if the length is even number,
 * we use n/2's number as the median 
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return the median of the data array
 */
unsigned char find_median(unsigned char* array, unsigned int n);

/**
 * @brief Given an array of data and a length, returns the mean value
 *
 * This function returns the mean of the array, 
 * Since the return type is unsigned char,
 * we round the result to an integer
 * 
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return the mean of the data array
 */
unsigned char find_mean(unsigned char* array, unsigned int n);

/**
 * @brief Given an array of data and a length, returns the maximum value
 *
 * This function returns the maximum of the array, 
 * 
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return the max value of the data array
 */
unsigned char find_maximum(unsigned char* array, unsigned int n);

/**
 * @brief Given an array of data and a length, returns the minimum value
 *
 * This function returns the minimum of the array, 
 * 
 * @param arrary Input data array
 * @param n Data array length
 *
 * @return the min value of the data array
 */
unsigned char find_minimum(unsigned char* array, unsigned int n);


#endif /* __STATS_H__ */
