/*
 * auth: mina safwat samy
 * file: 1-memcpy.c
 */

#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer.
 * @src: pointer.
 * @n: num.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *m = dest;

	for (i = 0; i < n; i++)
	{
		*m = *src;
		m += 1;
		src += 1;
	}

	return (dest);
}
