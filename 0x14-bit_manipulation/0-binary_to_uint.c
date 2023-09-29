#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @f: Pointing to a string of 0 and 1 chars
 *
 * Return: Converted number only
 **/
unsigned int binary_to_uint(const char *f)
{
	int j, multiplier;
	unsigned int num;

	if (!f)
		return (0);

	for (j = num = 0; f[j] != 0; j++)
		if (f[j] != 48 && f[j] != 49)
			return (num);

	for (j -= 1, multiplier = 0; j >= 0; j--, multiplier++)
	{
		if (f[j] == 48)
			continue;

		num += 1 << multiplier;
	}

	return (num);
}
