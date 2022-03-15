#include <stdio.h>
/*
 * main - main Entry
 * Description: The use of putchar fucion to print alphabet
 * in lower case, can be used only twice.
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
