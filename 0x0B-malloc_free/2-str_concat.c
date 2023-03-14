/*
 * auth: mina safwat smay
 * file: 2-str_concat.c
 */

#include "main.h"

/**
 * str_concat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int counter1 = 0;
	int counter2 = 0;
	int i;
	int num;

	counter1 = strlen(s1);
	counter2 = strlen(s2);
	if (counter1 + counter2 == 0)
		return (NULL);

	num = counter1 + counter2 + 1;
	arr = malloc(num);

	for (i = 0; i < counter1; i++)
		arr[i] = s1[i];

	for (i = 0; i < counter2; i++)
		arr[i + counter1] = s2[i];

	arr[num] = '\0';

	return (arr);
}
