#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string #1
 * @dest: string #2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int x, y;
x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (src[y] != '\0')
{
dest[x] = src[y];
y++;
x++;
}
dest[x] = '\0';
return (dest);
}
