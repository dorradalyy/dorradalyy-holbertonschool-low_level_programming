 #include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: int
 * @y: int
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
