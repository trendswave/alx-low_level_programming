#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number
 * @k: Number to print in binary
 **/
void print_binary(unsigned long int k)
{
	unsigned long int ax;
	int j;

	if (k == 0)
	{
		_putchar(48);
		return;
	}

	ax = k;
	for (j = 0; k != 0; k = k >> 1, j++)
		;

	for (j -= 1; j >= 0; j--)
		_putchar(48 + ((ax >> j) & 1));

}
