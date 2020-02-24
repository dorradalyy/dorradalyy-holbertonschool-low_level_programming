#include "holberton.h"
#include <stdio.h>
/**
 * _memset - check the code for Holberton School students.
 * @s: char
 * @b: char
 * @n: char
 * Return: Always 0.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
int dd;
dd = 0;
while (n > 0)
{
s[dd] = b;
dd++;
n--;
}
return (s);
}
