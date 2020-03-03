#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - use free function on previous grid
 * @str: char
 * Return: Always 0.
 */
char **strtow(char *str)
{
char *h = NULL;
unsigned int i = 0, j = 0, k;
if (strncmp(str, "", 1) || str == NULL)
return (NULL);
h = malloc((i + j + 1) * sizeof(char));
if (h == NULL)
return (NULL);
for (k = 0; k < i; k++)
h[k] = str[k];
i = k;
for (k = 0; k < j; k++)
{
h[i] = str[k];
i++;
}
h[i] = '\0';
return (NULL);
}
