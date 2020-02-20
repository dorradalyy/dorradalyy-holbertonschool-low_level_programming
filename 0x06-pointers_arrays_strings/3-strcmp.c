#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: char
 * @s2: char
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int d;
for (d = 0; s2[d] != '\0'; d++)
{
if (s1[d] != s2[d])
return (s1[d] - s2[d]);
}
return (0);
}
