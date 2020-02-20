#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @s: char
 * Return: Always 0.
 */
char *rot13(char *s)
{
int i;
char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
char g[] = "nopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
{
s[i] = (s[i] - 65 > 25) ?
g[s[i] - 97] : d[s[i] - 65];
}
}
return (s);
}
