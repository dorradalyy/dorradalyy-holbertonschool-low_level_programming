#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: int
 * @src: int
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int g;
for (g = 0 ; src[g] != '\0' ; g++)
{
dest[g] = src[g];
}
dest[g] = '\0';
return (dest);
}
