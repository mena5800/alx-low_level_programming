/*
* auth : mina safwat samy
* file : 0-binary_to_uint.c
*/


/**
 * binary_to_uint - convert binary to an unsigned number
 * @b: binary number (string)
 * Return: the converted number or 0
 */

#include "main.h"

unsigned int binary_to_uint(const char *b)
{

int result = 0;
int i, counter = 0;
const char *temp = b;
int num = 1;
while (*temp != '\0')
{
counter += 1;
temp += 1;
num = num * 2;
}
if (!counter)
	return (0);

for (i = 0; i < counter; i++)
{
	num /= 2;
	if (b[i] == '0')
		continue;
	else if (b[i] == '1')
	{
	result += num;
	}
	else
	{
		return (0);
	}
}
return (result);
}
