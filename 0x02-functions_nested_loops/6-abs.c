#include "main.h"

/**
 * _abs - check Holberton
 * @r: An integre input
 * *Description: This function returns absolute value 
 * of a number
 * Return: absolute Value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
