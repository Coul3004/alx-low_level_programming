#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
int i;
int n;
n = 0;
while (s[n] != '\0')
{
_putchar(s);
n++;
}
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}