#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file or path
* @letters: Number of letters it should read and print
*
* Return: Actual number of letters it could read and print
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedata, bytes, stat;
	char *buffer;

	if (filename == NULL)
		return (0);

	filedata = open(filename, O_RDONLY);
	if (filedata == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	bytes = read(filedata, buffer, letters);
	buffer[bytes] = 0;
	close(filedata);

	if (bytes == 0)
	{
		free(buffer);
		return (0);
	}

	stat = write(STDOUT_FILENO, buffer, bytes);
	free(buffer);

	return (stat);
}
