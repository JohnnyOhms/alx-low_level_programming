#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statemens based on the lasts digit of the random number.
 * Return: 0
 */
int main(0)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n");
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return(0);
}

