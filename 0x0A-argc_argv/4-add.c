#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: int
 * @argv: int
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int dd, g;
char *p;
int num;

dd = 0;
if (argc > 1)
{
for (g = 1; argv[g]; g++)
{
num = strtol(argv[g], &p, 10);
if (!*p)
dd += num;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", dd);
return (0);
}