#include "holberton.h"

/**
 * rint_square - check the code for Holberton School students.
 * @size : nember
 * Return: Always 0.
 */
void print_triangle(int size)
{
int d;
int g;
if (size > 0)
{
for (d = 0; d < size; d++)
{
for (g = 0; g < size g++)
{
if (g < size - d - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n')
}
}
