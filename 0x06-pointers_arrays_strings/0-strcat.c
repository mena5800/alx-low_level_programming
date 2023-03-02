/*
 * auth: Mina Safwat
 * file: 0-strcat.c
 */

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer first string
 * @src: pointer second string
 * Return: pointer contain 2 strings.
 */

char *_strcat(char *dest, char *src)
{
	char *temp_dest = dest;
	char *temp_src = src;

	while (*temp_dest != '\0')
	{
		temp_dest++;
	}

	while (*temp_src != '\0')
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
	}

	*temp_src = '\0';

	return (dest);
}
