#include <stdio.h>

/**
*main - prints all arguments it receive
*@argc: argument count*argv: argument vector
*Returns:returns 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
