#include "search_algos.h"
#include <math.h>
/**
 * int jump_search - Searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @value: Value to search for
 * @size: Number of elements in array
 *
 * Return: Index of value on success
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right = 0;
	size_t jump, i;

	jump = sqrt(size);
		
	while (right <= size - 1 && array[right] < value)
	{		
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

    return (-1);
}
