#include "main.h"
/**
 * int _strlen(char *s) - returns th lengtg=h of thr string
 * return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
