#include "holberton.h"

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (is_prime_help(n, 2));
}

/**
* is_prime_help - does the actual work of checking if n is prime
* @n: input integer to check
* @i: factor to check against
* Return: 1 if factor reaches n, calls itself with inc i, 0 if not prime
*/
int is_prime_help(int n, int i)
{
if (n == i)
return (1);
if (n % i)
return (is_prime_help(n, i + 1));
return (0);
}
