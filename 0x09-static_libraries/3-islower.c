#include "main.h"

/**
* _islower - function to check lower case
*Description: checks is a character is lowercase
*@c: the integer value it receives
* Return: 0
*/

	int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
