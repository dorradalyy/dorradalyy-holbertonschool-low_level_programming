#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size : number
 * Return: Always 0.
 */
void print_square(int size)
{
int d;
int g;
if (size > 0)
{
for (d = 1; d <= size; d++)
{
for (g = 1; g <= size; g++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
