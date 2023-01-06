#ifndef SEARCH_ALGOS_h
#define SEARCH_ALGOS_h

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif

