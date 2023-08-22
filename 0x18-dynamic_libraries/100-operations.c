#include "main.h"

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of @a and @b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting @b from @a.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of @a and @b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * my_div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of integer division of @a by @b.
 *         If @b is zero, returns 0.
 */
int my_div(int a, int b)
{
	if (b != 0)
	return (a / b);
	else
	return (0);
}

/**
 * mod - Calculates the modulo of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division of @a by @b.
 *         If @b is zero, returns 0.
 */
int mod(int a, int b)
{
	if (b != 0)
	return (a % b);
	else
	return (0);
}
