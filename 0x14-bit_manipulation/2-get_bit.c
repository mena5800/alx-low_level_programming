/*
* auth : mina safwat samy
* file : get_bit.c
*/

#include "main.h"

/**
 * get_bit - get the value of bit
 * @n: number
 * @index: the num of bit
 * Return: the value of index in n
 */
int get_bit(unsigned long int n, unsigned int index)
{
return ((n & (1 << index)) >> index);

}
