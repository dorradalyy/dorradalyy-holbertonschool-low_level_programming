#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n : number
 * Return: Always 0.
 */
void print_line(int n)
{
int h;
for (h = 0; h <= n; h++)
{
if (n > 0)
_putchar('_');
}
_putchar('\n');
}
