/*
 * auth : mina safwat samy
 * file : 1-isdigit.c
 */

#include<stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digit through 0 and 9.
 * @c: char to check.
 * Return: 1 if digit 0 to 9 , 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

