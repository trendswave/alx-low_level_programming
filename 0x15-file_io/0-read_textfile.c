#include "file.h"

/**
 *textfile - Reads a text file and prints it to the POSIX standard output
 *@filename: name of the file or path
 *@letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 **/
ssize_t textfile(const char *filename, size_t letters)
{
	int fid, byte_n, stat;
	char *buff;

	if (filename == NULL)
		return (0);
	fid = open(filename, O_RDONLY)
	if (fid == -1)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);
	byte_n = read(fid, buff, letters);
	buff[byte_n] = 0;
	close(fid);
	if (byte_n == 0)
	{
		free(buffer);
		return (0);
	}
	status = write(STDOUT_FILENO, buff, byte_n);
	free(buffer);
	return (status);
}
