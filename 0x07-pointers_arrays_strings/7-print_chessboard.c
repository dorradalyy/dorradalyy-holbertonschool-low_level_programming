#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - check the code for Holberton School students.
 * @a: int
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int dd = 0, gg = 0;
while (dd < 8)
{
while (gg < 8)
{
_putchar(a[dd][gg]);
gg++;
}
gg = 0;
dd++;
_putchar('\n');
}
}
