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
	int counter = 0;
	char *m = s;
	char *temp = accept;
	int i = 0;
	int j = 0;
	char flag = 1;

	while (*m != '\0')
	{
		counter += 1;
		m += 1;
	}

	m = s;

	while (i < counter && flag)
	{
		while (*m != *temp && j < counter)
		{
			j++;
			temp++;
		}
		if (*m == *temp)
		{
			return (m);
		}
		m++;
		i++;
		j = 0;
		temp = accept;
	}

	return (NULL);
}
