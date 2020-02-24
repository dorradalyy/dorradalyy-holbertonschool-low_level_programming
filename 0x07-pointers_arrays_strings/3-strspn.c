#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: char
 * @accept: char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int dd = 0, gg = 0;
for (dd = 0; s[dd] != '\0'; dd++)
for (gg = 0; accept[gg]; gg++)
{
if (accept[gg] == s[dd])
{
break;
}
if (accept[gg] != s[dd])
}
{
break;
}
return (dd);
}
