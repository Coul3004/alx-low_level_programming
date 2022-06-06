#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));

	return (0);	
}
