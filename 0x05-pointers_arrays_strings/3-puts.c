#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code for Holberton School students.
 * @str: char
 * Return: Always 0.
 */
void _puts(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
