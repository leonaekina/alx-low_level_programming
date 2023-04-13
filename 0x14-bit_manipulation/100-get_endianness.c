#include "main.h"

/**
 * get_endianness - checks endianess
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
