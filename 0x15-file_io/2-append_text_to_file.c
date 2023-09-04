#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success and -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int data, b;

	if (filename == NULL)
		return (-1);

	data = open(filename, O_WRONLY | O_APPEND);
	if (data == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (b = 0; text_content[b] != 0; b++)
		;

	b = write(data, text_content, b);
	close(data);

	return (b == -1 ? -1 : 1);
}
