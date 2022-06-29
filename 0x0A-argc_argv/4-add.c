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
    int add;
    int i;
    int error;

    if (argc > 1)
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
                break;
            }
        }
    }
    else
    {
        printf("0\n");
        return (0);
    }
    
    if (error == 0)
    {
        printf("%d\n", add);
        return (0);
    }
    else
    {
        printf("Error\n");
        return (1);
    }
}
