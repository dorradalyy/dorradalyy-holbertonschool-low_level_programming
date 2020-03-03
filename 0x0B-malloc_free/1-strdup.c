#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - check the code for Holberton School students.
 * @str: int
 * Return: Always 0.
 */

char *_strdup(char *str)
{
char *i;
unsigned int dd;
unsigned int gg = 0;
if (str == NULL)
return (NULL);
while (str[gg] != '\0')
gg++;
gg++;
i = malloc(gg *sizeof(char));
if (i == NULL)
return (NULL);
for (dd = 0; dd < gg; dd++)
i[dd] = str[dd];
i[dd] = '\0';
return (i);
}
