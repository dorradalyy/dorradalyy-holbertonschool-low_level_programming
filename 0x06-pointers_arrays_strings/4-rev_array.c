#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: char
 * @n: char
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, x;
for (i = 0; i < (n / 2); i++)
{
x = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = x;
}
}
