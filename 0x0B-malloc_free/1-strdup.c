#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
int i = 1, j = 0;
char *s;

if (str == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
s = (char *)malloc(sizeof(char) * i + 1);
if (s == NULL)
{
return (NULL);
}
while (j < i)
{
s[j] = str[j];
j++;
}
s[j] = '\0';
return (s);
}
