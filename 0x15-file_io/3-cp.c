#include "main.h"

void print_error_1(char *msg, char *opt, int status, int fd1);
void print_error(char *msg, char *opt, int status);

/**
 * main - Copies the content of a file-from to file_to file
 * @argc: Numbers of arguments
 * @argv: Arguments
 *
 * Return: Return 0
 **/
int main(int argc, char **argv)
{
	int fid_from, fid_to, b_readed, b_writed;
	char buff[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);

	fid_from = open(argv[1], O_RDONLY);
	if (fid_from == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	fid_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fid_to == -1)
		print_error_1("Error: Can't write to ", argv[2], 99, fid_from);

	b_readed = read(fid_from, buff, 1024);
	while (b_readed > 0)
	{
		b_writed = write(fid_to, buff, b_readed);
		if (b_readed != b_writed)
			print_error_1("Error: Can't write to ", argv[2], 99, fid_from);

		b_readed = read(fid_from, buff, 1024);
	}

	if (b_readed == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	b_readed = close(fid_from);
	if (b_readed < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fid %d\n", fid_from), exit(100);

	b_writed = close(fid_to);
	if (b_writed < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fid_to), exit(100);

	return (0);
}

/**
 * print_error_1 - Print the error and close the file descriptor
 * @msg: Error message to show
 * @opt: Optional arguments
 * @status: Exit status code
 * @fd1: File descriptor
 **/
void print_error_1(char *msg, char *opt, int status, int fd1)
{
	if (fd1 > 0)
		close(fd1);

	print_error(msg, opt, status);
}

/**
 * print_error - Print the error and close the file descriptor
 * @msg: Error message to show
 * @opt: Optional arguments
 * @status: Exit status code
 **/
void print_error(char *msg, char *opt, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, opt);
	exit(status);
}
