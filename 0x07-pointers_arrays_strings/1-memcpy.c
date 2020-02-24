#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - check the code for Holberton School students.
 * @src: int
 * @dest: int
 * @n: int
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
