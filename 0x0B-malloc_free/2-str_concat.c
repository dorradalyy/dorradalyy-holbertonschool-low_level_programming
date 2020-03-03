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
int a, b, c;
char *i;
c = 0;
i = malloc(sizeof(*s1 + *s2));
if (i == NULL)
return (NULL);
a = 0;
while (s1[a] != '\0')
{
i[c] = s1[a];
a++;
c++;
}
b = 0;
while (s2[b] != '\0')
{
i[c] = s2[b];
b++;
c++;
}
return (i);
}
