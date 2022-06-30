#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins
* to make change for an amount of money
* @argc: argument count
* @argv: argument vector
* Return: 0 (Success) or 1 (Error).
*/
int main(int argc, char *argv[])
{
int nb, j, res = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}

nb = atoi(argv[1]);
if (nb < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && nb >= 0; j++)
{
while (nb >= coins[j])
{
nb -= coins[j];
res++;
}
}
printf("%d\n", res);
return (0);
}
