#include "main.h"
/**
 * _strncat - join two strings with n bytes of scr to des
 * @dest: the destination string
 * @src: the src
 * @n: size of bytes
 * Return: char*
*/
	char *_strncat(char *dest, char *src, int n)
	{
	int dest_len = 0, i = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0 ; i < n && src[i] ; i++)
	{
		dest[dest_len++] = src[i];
	}
		return (dest);
	}
