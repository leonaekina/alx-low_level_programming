#include "main.h"

/**
 * create_file - funct that creates a file
 * @filename: name of the filename
 * @text_content: NULL terminated string to write file
 *
 * Return: -1 on failure, 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int final_out = 0;
	int  file = 0;
	int  x = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + x) != '\0')
		{
			x++;
		}
		final_out = write(file, text_content, x);
	}
	if (final_out == -1 && final_out != x)
		return (-1);
	return (1);
}
