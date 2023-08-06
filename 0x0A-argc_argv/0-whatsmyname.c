#include <stdio.h>
#include "main.h"

/**
*main - prints the name if the program
*@argc: number of arguments
*@argv array of arguments
*retrn:Always 0 (success)
*/
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return(0)
}
