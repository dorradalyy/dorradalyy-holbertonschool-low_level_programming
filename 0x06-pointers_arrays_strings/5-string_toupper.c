#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @s: char
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 'a' + 'A';
}
return (s);
}
