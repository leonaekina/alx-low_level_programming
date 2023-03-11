#include "main.h"

/**
*_strlen - function to swap numbers
*@s: takes pointer
* Return: length of string
*/
	int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
