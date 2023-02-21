/*
 * auth: mina safwat samy
 * file: 0-putchar.c
 */

#include<stdio.h>
#include<main.h>

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: always (0)
 */

int main(void)
{
	char i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
{
