#include "main.h"

/**
 * recur_funct - recursion function to print the bit 0
 * @n: unsigned long int
 */

void recur_funct(unsigned long int n)
{
	if (n == 0)
		return;
	recur_funct(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: unsihned long int
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');
	else
		recur_funct(n);
}
