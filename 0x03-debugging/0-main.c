#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
#include"main.h"
/* betty style doc for function main goes there */
/**
 * main - print whether the number stored in the variable
 * i is positive or negative.
 * Return: always 0
 */

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
	return (0);
}
