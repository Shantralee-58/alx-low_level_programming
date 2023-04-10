#include "main.h"

/**
 * _isupper - checks if a parameter is an upper case character
 * @c: input character
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
