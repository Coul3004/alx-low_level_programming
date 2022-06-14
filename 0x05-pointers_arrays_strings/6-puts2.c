#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @s:  string
 */
void puts2(char *s)
{
int i;
int n;
n = 0;
while (s[n] != '\0')
{
n++;
}
for (i = 0; i < n; i += 2)
{
_putchar(s[i]);
}
_putchar('\n');
}
