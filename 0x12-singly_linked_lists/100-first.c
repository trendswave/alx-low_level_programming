#include <stdio.h>

void __attribute__((constructor)) print(void);

/**
 * print - This function prints a sentence before main is executed
 */

void print(void)
{
	printf("I have been doing hard thing,\n"
	       "i know am going to be a grate Software Engineer!\n");

}
