#include "main.h"

/**
 * set_bit - valueof a bit to 1 at given index
 * @index: starting from 0 of the bit to be set
 * @n: pointer number of i
 *
 * Return: 1 if successful, -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
