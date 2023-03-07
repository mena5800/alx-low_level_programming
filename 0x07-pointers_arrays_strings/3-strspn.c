/*
 * auth: mina safwat samy
 * file: 3-strspn.c
 */

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer.
 * @accept: pointer.
 * Return: the number of bytes in the initial segment
 * of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	char *m = s;
	int i = 0;

	while (*m != '\0')
	{
		counter += 1;
		m += 1;
	}

	while (*s != c && i < counter)
	{
		s++;
		i++;
	}

	if (*s != c)
	{
		return (NULL);
	}
	else
	{
		return (s);
	}

}
