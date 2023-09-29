#include "main.h"

/**
 * get_bit - Function that sets the value of a bit to 1 at a given index
 * @n: Number base
 * @index: Index to get
 *
 * Return: Return 1 if it worked, or -1 if an error occurred
 **/
int get_bit(unsigned long int n, unsigned int ind)
{
	if (ind >= 32)
		return (-1);

	return ((n >> ind) & 1);
}
