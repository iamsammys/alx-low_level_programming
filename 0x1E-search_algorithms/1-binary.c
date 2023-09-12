#include "search_algos.h"
/**
 * binary_search - Function to implement search algorithm
 * @array: pointer to the array of integers to search
 * @size: size of the array of integers
 * @value: Value to search for
 *
 * Return: index of the value in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end;

	start = 0;
	end = size - 1;

	if (!array || !value)
		return (-1);

	return (recur_func(array, value, start, end));
}

/**
 * recur_func - Implements the recursive function
 * @value: The value to search
 * @array: Pointer to the array of integers
 * @start: The first index of the array
 * @end: The last index of the array
 *
 * Return: Index of value in array  on success
 */

int recur_func(int *array, int value, size_t start, size_t end)
{
	size_t mid, loop;
	int index = -1;

	loop = start;

	printf("Searching in array: ");
	while (loop < end)
	{
		printf("%d, ", array[loop]);
		loop++;
	}
	printf("%d\n", array[loop]);

	if (start >= end)
		return (index);

	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		index = mid;
		return (index);
	}
	else if (value < array[mid])
		return (recur_func(array, value, start, mid - 1));
	else if (value > array[mid])
		return (recur_func(array, value, mid + 1, end));

	return (index);
}
