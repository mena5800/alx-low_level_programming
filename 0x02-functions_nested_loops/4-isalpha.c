/*
 * auth: mina safwat samy
 * file: 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: single letter input
 * Return: 1 if c is alphabetic character or 0 if c is other.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 41 && c <= 90))
	{
		return (1);
	}
	return (0);
}
