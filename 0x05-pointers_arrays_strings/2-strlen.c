#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s : char
 * Return: Always 0.
 */
int _strlen(char *s)
{
int g = 0;
while (s[g] != '\0')
{
g++;
}
return (g);
}
