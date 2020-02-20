#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: char
 * @src: char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;
int l;
for (i = 0; dest[i] != '\0'; i++)
;
for (l = 0; src[l] != '\0'; l++)
{
dest[i] = src[l];
i++;
}
dest[i] = '\0';
return (dest);
}
