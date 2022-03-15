#include <stdio.h>
/*
 * main - main Entry
 * Description: The use of 'putchar' to print alpha 
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
