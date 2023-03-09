/*
 * auth: mina safwat samy
 * file: 5-sqrt_recursion.c
 */

#include "main.h"

/**
 * _sqrt_recursion - return the natural square of a number.
 * @n: int num.
 * Return: square root of num.
 */

int _sqrt_recursion(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i * i == n)
			return (i);

		else if (i * i > n)
			return (-1);
	}
return (-1);
}
