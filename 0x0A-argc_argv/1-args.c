#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int sum;
(void)argv;
sum = argc - 1;
printf("%d\n", sum);
return (0);
}
