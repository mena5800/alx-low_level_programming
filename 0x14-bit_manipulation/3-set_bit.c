#include "main.h"

/**
 * set_bit - set bin in index
 * @n: the number
 * @index: index of number
 * Return: 1,-1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63 || n == NULL)
return (-1);
*n = *n | (1 << index);
return (1);

}
