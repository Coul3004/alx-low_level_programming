#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nu;
for (nu = 0; nu < 10; nu++)
{
if (nu != 9)
{
putchar(nu % 10 + '0');
putchar(',');
putchar(' ');
}
else
{
putchar(nu % 10 + '0');
}
}
printf("\n");
return (0);
}
