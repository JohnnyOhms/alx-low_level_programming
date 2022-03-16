#include <stdio.h>
#include "main.h"
/** 
 * function that print alpha in lowecase
 * followed by a new line.
 * print_alphabet: print all alpha
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
