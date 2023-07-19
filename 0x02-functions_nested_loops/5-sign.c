#include<stdio.h>
#include "main.h"
/**
 * print_sign - Checks for lowercase character
 * @n: The character to be checked (must be an ASCII character)
 *
 * Return: 1 if n is greater than 0 ,
 * 0if n is zero
 * -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

