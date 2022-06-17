#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: capitalize s
 */
char *cap_string(char *s)
{
int i;
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
i = 0;
for (i = 0; s[0] != '\0'; i++)
{
switch (s[i])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\t':
case '\n':
if (s[i + 1] > 96 && s[i + 1] < 123)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
