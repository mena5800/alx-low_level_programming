/*
 * auth: mina safwat smay
 * file: 1-strdup.c
 */

#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory.
 * @str: initalization value.
 * Return: Null or pointer to the array.
 */

char *_strdup(char *str)
{
	char *arr;
	int i;
	int counter = 0;
	char *pointer = str;

	if (*str == '\0')
		return (NULL);

	while (*pointer != '\0')
	{
		counter++;
		pointer++;
	}

	arr = malloc(counter + 1);
	for (i = 0; i <= counter; i++)
		arr[i] = str[i];

	return (arr);
}
