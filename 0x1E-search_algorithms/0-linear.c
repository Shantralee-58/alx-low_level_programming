/*
 * File: 0-linear.c
 * Auth: Imrane Achaari
 */

#include "search_algos.h"

/**
  * linear_search - Searches for the value in an array
  *                 of integers using linear search.
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t ii;

	if (array == NULL)
		return (-1);

	for (ii = 0; ii < size; ii++)
	{
		printf("Value checked array[%ld] = [%d]\n", ii, array[ii]);
		if (array[ii] == value)
			return (ii);
	}

	return (-1);
}
