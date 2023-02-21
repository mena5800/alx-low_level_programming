/*
 * auth: mina safwat samy
 * file: 6-abs.c
 */

#include "main.h"

/**
 * _abs - computes the absoulte value.
 * @n: number
 * Return: the abs value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
