#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string, followed by a new line
 * @s:  string
 */
void puts_half(char *s)
{
int i;
int n;
int x;
n = strlen(s);
if (n % 2 == 1)
{
x = n / 2 + 1;
}
else
{
x = n / 2;
}
for (i = x; i < n; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
