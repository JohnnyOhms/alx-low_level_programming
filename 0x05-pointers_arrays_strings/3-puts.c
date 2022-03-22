#include "main.h"
/**
 * void _puts(char *str) - prints a string followed
 * by a new line to stdout
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
