/*
 * auth: mina safwat samy
 * file: 7-print_last_digit.c
 */

#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	printf("%d", n % 10);
	return (n % 10);
}
