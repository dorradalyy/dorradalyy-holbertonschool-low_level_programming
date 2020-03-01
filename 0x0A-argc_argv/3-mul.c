#include <stdio.h>

/**
 * main - function to prnt all the arg
 * @argc: int
 * @argv: char
 * Return: 0(mean true).
 */

int main(int argc, char **argv)
{
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
