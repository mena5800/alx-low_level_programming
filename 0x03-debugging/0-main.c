#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - print whether the number stored in the variable
 * @n: is positive or negative number.
 * Return: always 0
 */

void positive_or_negative(int n)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
