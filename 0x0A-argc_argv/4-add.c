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
int add = 0;
int res, i, j, k;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("%s\n", "Error");
return (1);
}   
}
}    
for (k = 1; k < argc; k++)
{
res = atoi(argv[k]);
add += res;
}
printf("%d\n", add);
return (0);
}
