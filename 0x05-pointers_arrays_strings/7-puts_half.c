#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
int d;
for (d = 0; str[d] != '\0'; d++)
;
d++;
for (d /= 2; str[d] != '\0'; d++);
{
_putchar(str[d]);
}
_putchar('\n');
}