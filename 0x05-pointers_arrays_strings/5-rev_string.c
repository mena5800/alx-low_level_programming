/*
 * auth: Mina Safwat
 * file: 4-rev_string.c
 */

#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: string.
 * Return: void.
 */

void rev_string(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{

		char *m = s;
		char *z = s;
		char temp = '0';

		while (*m != '\0')
		{
			m++;
		}
		m--;

		while (m > z)
		{
			temp = *m;
			*m = *z;
			*z = temp;
			m--;
			z++;

		}

	}

}
