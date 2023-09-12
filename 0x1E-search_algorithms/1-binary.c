#include "search_algos.h"
/**
 * binary_search - Function to implement search algorithm
 * @array: pointer to the array of integers to search
 * @size: size of the array of integers
 * @value: Value to search for
 *
 * return: index of the value in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid, index;

	start = 0;
	end = size - 1;

	if (!array || !value)
		return -1;

	return recur_func(array, value, start, end);
}

int recur_func(int *array, int value, size_t start, size_t end)
{
	size_t mid;
	int index = -1;

	if (start >= end)
		return index;
	
	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		index = mid;
		return index;
	}
	else if (value < array[mid])
		return recur_func(array, value, start, mid - 1);
	else if (value > array[mid])
		return recur_func(array, value, mid + 1, end);
}
