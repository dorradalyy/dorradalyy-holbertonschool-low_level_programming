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
unsigned int dd, gg;
for (dd = 0; s[dd]; dd++)
{
for (gg = 0; accept[gg]; gg++)
{
if (s[dd] == accept[gg])
break;
}
if (!accept[gg])
break;
}
return (dd);
}
