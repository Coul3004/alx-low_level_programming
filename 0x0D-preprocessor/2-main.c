#include "main.h"
#include <stdio.h>

/**
* main - prints the name of the file it was compiled from,
* followed by a new line
* @s: string
* Return: 0
*/
int main(char *s)
{
    printf("%s", __FILE__);
    return (0);
}
