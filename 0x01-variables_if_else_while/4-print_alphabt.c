#include <stdio.h>
/**
 * main - main block
 * Description: use 'putchar' to print all letters expect q and p
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'p')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
