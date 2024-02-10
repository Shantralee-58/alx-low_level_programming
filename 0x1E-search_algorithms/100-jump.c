#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = 0, prev = 0, i = 0;

    if (!array)
        return (-1);

    step = sqrt(size);
    while (array[prev] < value && prev < size)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
    for (i = prev - step; i <= prev && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
