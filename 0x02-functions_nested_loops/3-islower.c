/*
 * auth: mina safwat samy
 * file: 3-islower.c
 */

#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: single letter input
 * Return: 1 if c is lowercase or 0 if c is other.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
