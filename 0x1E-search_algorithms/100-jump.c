/*
 * File: 1-binary.c
 * Auth: Imrane Achaari
 */

#include "search_algos.h"

/**
  * binary_search - Searches for the value in a sorted array
  *                 of integers using binary search.
  * @array: Pointer to the first element of the array to search.
  * @size: Number of the elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t ii, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (ii = left; ii < right; ii++)
			printf("%d, ", array[ii]);
		printf("%d\n", array[ii]);

		ii = left + (right - left) / 2;
		if (array[ii] == value)
			return (ii);
		if (array[ii] > value)
			right = ii - 1;
		else
			left = ii + 1;
	}

	return (-1);
}
