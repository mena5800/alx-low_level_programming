/*
 * auth: Mina Safwat
 * file: 9-strcpy.c
 */

#include "main.h"

/**
 * _strcpy - copy the values of string to another string.
 * @dest: pointer.
 * @src: string.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *m = dest;

	while (*src != '\0')
	{
		*m = *src;
		m++;
		src++;
	}
	*m = '\0';
	return (dest);

}
