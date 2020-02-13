#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n : number
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, h;
for (i = 0; i < n; i++)
{
for (h = 0; h < i; h++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}