#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer.
 * @accept: pointer.
 * Return: the number of bytes in the initial segment
 * of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int counter_temp = 0;
	int counter1 = 0;
	int counter2 = 0;
	char *temp1 = s;
	char *temp2 = accept;
	int i = 0;
	int j = 0;

	while (*temp1 != '\0')
	{
		counter1 += 1;
		temp1 += 1;
	}
	temp1 = s;
	while (*temp2 != '\0')
	{
		counter2 += 1;
		temp2 += 1;
	}
	temp2 = accept;
	for (i = 0; i < counter1; i++)
	{
		for (j = 0; j < counter2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				break;
			}
		}
		if (counter != counter_temp)
			counter_temp = counter;
		else
			break;
	}
	return (counter);
}
