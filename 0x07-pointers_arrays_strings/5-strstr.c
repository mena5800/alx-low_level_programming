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
	int counter1 = 0;
	int counter2 = 0;
	char *temp1 = haystack;
	char *temp2 = needle;
	char *temp3 = haystack;

	while (*temp2 != '\0')
	{
		counter2++;
		temp2++;
	}
	temp2 = needle;
	while (*temp1 != '\0')
	{
		temp3 = temp1;
		if (*temp3 == *temp2)
		{
			while (*temp2 != '\0' && *temp2 == *temp3)
			{
				temp2++;
				temp3++;
				counter1++;
			}
		}
		if (counter1 == counter2)
			return (temp1);

		temp2 = needle;
		temp1++;
	}
	return ('\0');
}
