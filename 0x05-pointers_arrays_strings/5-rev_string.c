#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
char c;
int i;
int l1;
int l2;
l1 = 0;
l2 = 0;
while (s[l1] != '\0')
{
l1++;
}
l2 = l1 - 1;
for (i = 0; i < (l1 / 2); i++)
{
c = s[i];
s[i] = s[l2];
s[l2] = c;
l2 -= 1;
}
}
