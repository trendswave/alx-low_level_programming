#include "holberton.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * @n: NUmber to clear
 * @index: Position to be cleared
 *
 * Return: Return 1 if it worked, or -1 if an error occurred
 **/
int clear_bit(unsigned long int *k, unsigned int index)
{
	if (index > 32)
		return (-1);

	*k = ~(1 << index) & *k;
	return (1);
}
