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
	int fid, j;

	if (filename == NULL)
		return (-1);

	fid = open(filename, O_WRONLY | O_APPEND);
	if (fid == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (j = 0; text_content[j] != 0; j++)
		;

	j = write(fid, text_content, j);
	close(fid);

	return (j == -1 ? -1 : 1);
}

