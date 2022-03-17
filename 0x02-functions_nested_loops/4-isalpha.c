#include "main.h"

/**
 * _isalpha - check Holberton
 * @c: an input character
 * Description: fuction that checkfor alpha character
 * Returns: 1 if c is a letter, lower or upper case
 * returns: 0 otherwise
 */
int_isalpha(int c)
{
	char lower, upper;
	int isletter = 0;
	
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
