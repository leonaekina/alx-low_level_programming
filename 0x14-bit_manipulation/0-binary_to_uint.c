#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: pointer to a string of one char
 *
 * Return: converted number, or 0 if one or more char that's not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{

		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}

