#ifndef ALGO
#define ALGO

/* Includes */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* Structs */

/* Project Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

/* Non-Project Prototypes */
void print_array(int *array, unsigned int L, unsigned int R);
int _min(int a, int b);

#endif /* ALGO */
