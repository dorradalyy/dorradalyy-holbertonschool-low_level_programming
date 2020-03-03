#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
 
int **alloc_grid(int width, int height)
{
int i, j, **q;
if (width <= 0 || height <= 0)
return (NULL);
q = malloc(height * sizeof(int *));
if (q == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
q[i] = malloc(width * sizeof(int));
if (q[i] == NULL)
{
for (j = i - 1; j >= 0; j--)
free(q[j]);
free(q);
return (NULL);
}
for (j = 0; j < width; j++)
q[i][j] = 0;
}
return (q);
}
