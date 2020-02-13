#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n : number
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, h;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (h = 0; h < i; h++)
{
if (i > 0)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
