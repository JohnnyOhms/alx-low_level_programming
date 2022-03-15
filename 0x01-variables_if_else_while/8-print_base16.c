#include <stdio.h>
/**
 * main - main Entry
 * Description: print all the num of base 16 in lowcase
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

		return (0);
}	
