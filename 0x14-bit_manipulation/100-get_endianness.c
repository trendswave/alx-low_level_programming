#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	unsigned int k = 1;
	char *r = (char *)&k;

	return ((*r) ? 1 : 0);
}
