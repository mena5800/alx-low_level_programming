/*
 * auth : mina safwat samy
 * file : 1-print_numbers.c
 */

#include "variadic_functions.h"

/**
 * print_numbers - print all numbers
 * @separator: separator of numbers
 * @n : the number of integars
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ar, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ar, int), separator);
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d", va_arg(ar, int));
	}
	printf("%d\n", va_arg(ar, int));
	va_end(ar);

}
