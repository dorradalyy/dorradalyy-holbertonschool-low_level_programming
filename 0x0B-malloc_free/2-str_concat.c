#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
char *i = NULL;
unsigned int h = 0, j = 0, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
h++;
while (s2[j] != '\0')
j++;
i = malloc((h + j + 1) * sizeof(char));
if (i == NULL)
return (NULL);
for (k = 0; k < h; k++)
i[k] = s1[k];
i = k;
for (k = 0; k < j; k++)
{
i[h] = s2[k];
i++;
}
i[h] = '\0';
return (i);
}
