#include<stdio.h>
#include "main.h"
/**
 * print_numbers - Prints the numbers 0 through to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
