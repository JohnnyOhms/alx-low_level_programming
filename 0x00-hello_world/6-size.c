#include <stdio.h>
/**
 * main - Entry point
 * printing  various sizes compiled on computer Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	float d;
	char f;

	printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(f));
	printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
