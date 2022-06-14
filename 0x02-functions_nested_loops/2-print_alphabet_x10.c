#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * @ch: character 
 */
void print_alphabet_x10(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar((ch + '\n') * 9);
_putchar(ch);
}
_putchar('\n');
}
