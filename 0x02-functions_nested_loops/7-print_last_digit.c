/*
 * auth: mina safwat samy
 * file: 7-print_last_digit.c
 */

#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
