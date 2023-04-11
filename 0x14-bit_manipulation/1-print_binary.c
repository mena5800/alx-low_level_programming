#include "main.h"

/**
 * print_binary - print the binary represention
 * @n: the decimal represention
 * Return: void
 */

void print_binary(unsigned long int n)
{
int i, flag = 0;

if (n == 0)
_putchar('0');

for (i = 31; i >= 0; i--)
{
if (n >= (unsigned long int)(1 << i))
{
_putchar('1');
n -= (1 << i);
flag = 1;
}
else if (flag)
_putchar('0');
}
}
