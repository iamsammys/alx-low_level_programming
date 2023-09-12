#include "search_algos.h"
/**
 * linear_search - Function for linear search
 * @size: Size of the array
 * @value: The value that is being sought
 * @array: Pointer to the array of integers
 *
 * Return: Always success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t num = 0;

	if (!array || !value)
		return (-1);

	while (num < size)
	{
		printf("Value checked array[%ld] = [%d]\n", num, array[num]);
		if (array[num] == value)
			return (num);
		num++;
	}
	return (-1);
}
