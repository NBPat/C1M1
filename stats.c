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
 * @file <Add stats.c> 
 * @brief <Add statistic program >
 *
 * <Add First assignment for embedded processing >
 *
 * @author <Add Patrick Fitzgerald>
 * @date <Add 2019-06-16 >
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

  int i = 0;  //will be used in functions
  unsigned char array[SIZE];  // will become sorted version of test
  float median;  //sum of all elements/number int divided by int generates float
  float mean;    //sum of unique elements/quantity int/int generates float
  int maximum;   //1st element of sorted array.  char values from test[i] cast to int
  int minimum;   //last element of sorted array.  casts to int

  /* Statistics and Printing Functions Go Here, declarations */

    // sort array test to put highest value first, lowest las
    // will be used on array test with SIZE number of elements
    unsigned char sort_array(char, int);

    // once sorted the first element of the array[0] = maximum
    // function
    // char will cast to int
    int find_maximum(char);

    // once sorted array[SIZE-1] = minimum
    // function will extract and return the last element
    // char will cast to int
    int find_minimum(char, int);

    //mean generated by adding all char elements as int and dividing by SIZE
    //float is returned
    float find_mean(char, int);

    //median sum of unique elements divided by quantity of unique elements
    //requires only variable array
    float find_median(char);

    //print_array(); needs to printf(%s) for each element
    // text can be added to space and label elements 
    //must handle either test or array
    //returns void
    void print_array(char, int);
    

    //print_statistics has different input from print_array
    //this function must take the numbers generated for median, mean
    //maximum and minimum and printf(%d) for integers printf(%f) for float
    //fixed text added for beauty
    void print_statistics(float, float, int, int);
}

/* Add other Implementation File Code Here */
