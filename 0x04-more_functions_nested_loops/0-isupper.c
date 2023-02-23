/*
 * auth : mina safwat samy
 * file : 0-isupper.c
 */

#include<stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: char to check.
 * Return: 1 if upper , 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

