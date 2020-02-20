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
for (j = 0; j < 50; j++)
{
if (d[j] == s[i])
{
s[i] = g[j];
break;
}
}
}
return (s);
}
