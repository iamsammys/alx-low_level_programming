#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__
#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int recur_func(int *array, int value, size_t start, size_t end);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
