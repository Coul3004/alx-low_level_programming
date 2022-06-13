#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; --ch)
{
putchar(ch);
}
printf("\n");
return (0);
}
