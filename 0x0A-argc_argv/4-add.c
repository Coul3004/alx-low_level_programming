#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
int i;
int add;
int error;
add = 0;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (*argv[i] >= '0' && *argv[i] <= '9')
{
add += atoi(argv[i]);
}
else
{
error = 1;
}
}
if (error == 1)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", add);
}
}
return (0);
}
