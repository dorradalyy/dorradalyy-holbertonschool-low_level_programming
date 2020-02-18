#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 * @s: char
 * Return: Always 0.
 */
void rev_string(char *s)
{
int d = 0;
int g;
char m;
while (s[d])
d++;
for (g = 0; g < d / 2; g++)
{
m = s[d - g - 1];
s[d - g - 1] = s[g];
s[g] = m;
}
}
