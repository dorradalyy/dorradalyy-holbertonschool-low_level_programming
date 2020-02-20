#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: char
 * @src: char
 * @n : number
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
for (i = 0; dest[i] != '\0'; i++)
;
for (l = 0; src[l] != '\0' && n > 0; l++, n--, i++)
{
	dest[i] = src[l];
}
return (dest);
}
