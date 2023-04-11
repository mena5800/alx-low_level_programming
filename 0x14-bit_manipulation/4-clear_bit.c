/*
* auth : mina safwat samy
* file : clear_bit.c
*/

#include "main.h"

/**
 * clear_bit - set the value of bit 0
 * @n: number
 * @index: the num of bit
 * Return: the value of index in n
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

if (index > 63 || n == NULL)
return (-1);

*n = *n & ~(1 << index);
return (1);
}
