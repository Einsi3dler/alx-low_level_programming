#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *a, int l, int h);
#endif
