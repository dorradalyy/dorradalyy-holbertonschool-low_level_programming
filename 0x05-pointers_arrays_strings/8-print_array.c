#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: int
 * @n : int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int g;
for (g = 0; g < n; g++)
{
printf("%d", a[g]);
if (g < n - 1)
{
printf(", ");
}
}
printf("\n");
}
