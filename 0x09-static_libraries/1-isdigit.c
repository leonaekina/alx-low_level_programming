#include "main.h"
/**
 * _isdigit - check if input is a digit
 * @c: input
 * Return: return 1 if its a digit and 0 otherwise
*/

	int _isdigit(int c)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
