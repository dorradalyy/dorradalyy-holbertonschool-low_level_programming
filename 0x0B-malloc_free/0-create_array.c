#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @c: the char of memory to print
 * @size: the size of the memory to print
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
char *dd;
unsigned int i;
if (size == 0)
return (NULL);
dd = malloc(size * sizeof(*dd));
if (dd == NULL)
return (NULL);
for (i = 0; i < size; i++)
dd[i] = c;
return (dd);
}
