#include "main.h"
/**
 *createe_file - creates a file
 *@filename: Name of thne file to create
 *@text_content:NULL terminated string to write to the file
 *Return : 1 0n success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fid, j, res;

	if (filename == NULL)
		return (-1);
	fid = open(filename, O_WRONLY | O_CREAT  | O_TRUNC, 0600);
	if (fid == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for(j = 0; text_content[j] != 0; j++)
		;
	res = write(fid, text_content, j);
	close(fid);
	return (res == -1 ? -1 : 1);
}
