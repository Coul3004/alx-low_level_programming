#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char * argv[])
{
    int args;
    (void)argv;
    args = argc - 1;
    printf("%d\n", args);
    return (0);
}
