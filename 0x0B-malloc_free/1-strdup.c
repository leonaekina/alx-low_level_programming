#include "main.h"
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplic;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplic = malloc(sizeof(char) * (len + 1));

	if (duplic == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplic[i] = str[i];

	duplic[len] = '\0';

	return (duplic);
}
