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
int add = 0;
int error = 0;
char errorText[] = "Error";

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
printf("%d\n", argc - 1);
return (0);
}

if (error == 0)
{
printf("%d\n", add);
return (0);
}
else
{
printf("%s\n", errorText);
return (1);
}
}
