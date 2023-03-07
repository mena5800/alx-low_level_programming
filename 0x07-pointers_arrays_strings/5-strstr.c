/*
 * auth: mina safwat samy
 * file: 5-strstr.c
 */

#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer.
 * @needle: pointer.
 * Return: pointer to the begining of the located substring.
 * or null if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int counter = 0;
	char *temp1 = haystack;
	char *temp2 = needle;
	int i = 0;

	while (*temp1 != '\0')
	{
		counter += 1;
		m += 1;
	}

	temp1 = haystack;

	while ( && i < counter)
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
