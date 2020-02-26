#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int d;

d = 0;
if (*s == '\0')
return (0);

d = 1 +  _strlen_recursion(s + 1);

return (d);
}
