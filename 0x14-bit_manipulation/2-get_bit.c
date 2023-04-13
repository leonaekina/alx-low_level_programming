#include "main.h"

/**
 * get_bit - return the value of a bit in a given index
 * @n: type unsigned int input
 * @index: type usnigned int position of unit
 *
 * Return: the value of a bit in an index or return -1 if present
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
