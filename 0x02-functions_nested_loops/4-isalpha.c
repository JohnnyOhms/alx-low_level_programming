#include "main.h"

/**
 * _isalpha - check Holberton
 * @c: an input character
 * Description: fuction that checkfor alpha character
 * Returns: 1 if c is a letter, lower or upper case
 * returns: 0 otherwise
 */
int _isalpha(int c)
{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
