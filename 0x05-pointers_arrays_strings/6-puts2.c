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
for (i % 2 == 0; i < 10; i++)
{
puts2(s);
}
}