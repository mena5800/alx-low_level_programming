/*
 * auth : mina safwat samy
 * file : 0-sum_them_all.c
 */

#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: the number of parameters
 * Return: the sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ar, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);

}
