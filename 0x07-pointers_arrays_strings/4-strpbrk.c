#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: char
 * @accept: char
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)

{
int dd, gg;
dd = 0;
gg = 0;
while (s[dd] != '\0')
{
while (accept[gg] != '\0')
{
if (s[dd] == accept[gg])
{
break;
}
gg++;
}
if (accept[gg] != '\0')
return (s + dd);
dd++;
}
return (0);
}
