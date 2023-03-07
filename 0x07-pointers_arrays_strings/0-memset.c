/*
 * auth: mina safwat samy
 * file: 0-memset.c
 */

#include"main.h"

/**
 * _memset - fills memory with a constatnt byte.
 * @s: pointer.
 * @b: char.
 * @n: num.
 * Return: pointer to the area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *temp = s;

	for (i = 0; i < n; i++)
	{
		*temp = b;
		temp++;
	}
	return (s);

}
