/*
 * file: 5-flip_bits.c
 * author: mina safwat samy
 */

#include "main.h"

/**
 * get_binary - get the binary represention of decimal
 * @n: the number
 * @ptr: string
 */

void get_binary(unsigned long int n, char *ptr)
{
int i, j = 0;
if (n == 0)
ptr[0] = '0';

for (i = 31; i >= 0; i--)
{

if (n >= (unsigned long int)(1 << i))
{
ptr[j] = '1';
n -= (1 << i);
}
else
ptr[j] = '0';
j++;
}
}

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
char first[32];
char second[32];
int i = 0;
int counter = 0;
get_binary(n, first);
get_binary(m, second);

for (i = 0; i < 32; i++)
{
if (first[i] != second[i])
counter++;
}
return (counter);
}
