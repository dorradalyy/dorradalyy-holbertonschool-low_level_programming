#include <stdio.h>
/**
* print_to_98 - check the code
* @n : int
* Return: Always 0.
**/

void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n ; i < 98 ; i++)
{
if (i == 98)
{
printf("%d", i);
}
printf("%d", i);
else
{
printf("%d, ", i);
}
printf('\n');
}
}
else if (n > 98)
{
for (i = n ; i > 98 ; i--)
{
if (i == 98)
{
printf("%d", i);
}
printf("%d", i);
else
{
printf("%d, ", i);
}
printf('\n');
}
}
else
{
printf("%d", n);
}
}
