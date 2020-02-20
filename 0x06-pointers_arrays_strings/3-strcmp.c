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
int i;
for (i = 0; s1[i] != '\0'; i++)
{
if (s2[i] != s1[i])
}
return (s2[i] - s1[i]);
}
