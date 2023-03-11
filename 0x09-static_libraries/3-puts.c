#include "main.h"

/**
*_puts - funtion to print string from pointer
*@str: an array of char
* Return: void
*/
	void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
