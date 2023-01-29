#include "search_algos.h"
/**
 * linear_search - Implements a linear search algorithm
 * @array: Pointer to first element of array
 * @size: Number of elements in array
 * @value: Value being searched for in the array
 * Return: Index of the value found, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
