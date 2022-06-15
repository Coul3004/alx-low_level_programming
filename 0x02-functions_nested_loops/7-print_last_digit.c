#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: abs n
 */
int print_last_digit(int n)
{
int d;
if (n > 0)
{
d = (n % 10 * (-1));
}
else
{
d = (n % 10);
}
_putchar(d + '0');
return (d);
}
