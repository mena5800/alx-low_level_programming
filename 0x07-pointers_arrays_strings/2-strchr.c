/*
 * auth: mina safwat samy
 * file: 2-strchr.c
 */

#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer.
 * @c: char.
 * Return: pointer to the first occurrence of the char in
 * the string s or Null if the char not found.
 */

char *_strchr(char *s, char c)
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
