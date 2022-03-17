#include <stdio.h>
#include "main.h"

/** 
 * print_alphabet: print all alpha in lowe case
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
