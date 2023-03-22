#include "main.h"
/**
 * main - Determine if number is positive, negative or zero.
 * 0: is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is zero\n", i);
}
return;
}
