#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 characters.
 * Return: The converted number, or 0 if there is an invalid character.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;
	int i;

	if (b == NULL)
	return 0;

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return 0;

	bit = b[i] - '0';
	result = (result * 2) + bit;
	}
	return result;
}
