#ifndef SEARCH_ALGORITHMS
#define SEARCH_ALGORITHMS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
void print(int *array, size_t size);

#endif /* SEARCH_ALGORITHMS */
