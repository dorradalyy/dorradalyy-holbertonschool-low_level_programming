#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
int x;
for (x = 0 ; x < 10 ; x++)
{
for (i = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
putchar('\n');
}
}