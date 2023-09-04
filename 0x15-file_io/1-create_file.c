#include "main.h"

/**
* create_file - Creates a file
* @filename: Name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
int data, b, set;

	if (filename == NULL)
		return (-1);

	data = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (data == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (b = 0; text_content[b] != 0; b++)
		;

	set = write(data, text_content, b);
	close(data);

	return (set == -1 ? -1 : 1);
}
