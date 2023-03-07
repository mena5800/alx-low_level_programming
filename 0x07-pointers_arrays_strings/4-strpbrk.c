/*
 * auth: mina safwat samy
 * file: 4-strpbrk.c
 */

#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer.
 * @accept: pointer.
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept or Null if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp1 = s;
	char *temp2 = accept;

	while (*temp1 != '\0')
	{
		while (*temp2 != '\0')
		{
			if (*temp1 == *temp2)
				return (temp1);
			temp2++;
		}
		temp2 = accept;
		temp1++;
	}
	return (NULL);
}
