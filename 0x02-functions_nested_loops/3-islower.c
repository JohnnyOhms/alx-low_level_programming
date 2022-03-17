#include "main.h"

/**
 * _islower -check Holberton
 * @c: an input character
 * Desciption: function that print alpha in lowecase
 * 10 times
 * reurn: 1if itslowercase or 0if upper
 */
int_islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	
	else
	{
		return (0);
	}
}
