#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: char
 * Return: Always 0.
 */
void puts2(char *str)
{
        int d;
        
        for (d = 0; str[d] != '\0'; d++)
        {
                if (d % 2 == 0)
                        _putchar(str[d]);
        }
        _putchar('\n');
}
