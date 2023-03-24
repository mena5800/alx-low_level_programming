/*
 * auth : mina safwat samy
 * file : 2-print_strings.c
 */

#include "variadic_functions.h"

/**
 * print_strings - print all strings
 * @separator: separator of numbers
 * @n : the number of integars
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *word;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ar, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			word = va_arg(ar, char *);
			if (word == NULL)
				word = "(nil)";
			printf("%s%s", word, separator);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			word = va_arg(ar, char *);
			if (word == NULL)
				word = "(nil)";
			printf("%s", word);
		}
	}

	word = va_arg(ar, char *);
	if (word == NULL)
		word = "(nil)";
	printf("%s\n", word);
	va_end(ar);

}
