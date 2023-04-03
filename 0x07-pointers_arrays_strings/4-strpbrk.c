#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int x, y;
for (x = 0; *(s + x) != '\0'; x++)
{
for (y = 0; *(accept + y) != '\0'; y++)
{
if (*(s + x) == *(accept + y))
return (s + x);
}
}
return ('\0');
}
