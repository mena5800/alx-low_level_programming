#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main -  print the last digit of the number
 * stored in the variable n.
 * Return: always 0
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;
	/* your code goes there */

	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %d is %d andis less than 6 and not 0\n",
			n, lastdigit);

	return (0);
}
