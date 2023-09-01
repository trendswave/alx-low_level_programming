#include "main.h"
#include <stdio.h>

/**
* binary_to_uint -Function that converts a binary number to an unsigned int
* @b: Pointing to a string of 0 and 1 chars
*
* Return: Converted number
**/
unsigned int binary_to_uint(const char *b)
{
	int n, multiplier;
	unsigned int number;

	if (!b)
		return (0);

		for (n = number = 0; b[n] != 0; n++)
			if (b[n] != 48 && b[n] != 49)
				return (number);
				for (n -= 1, multiplier = 0; n >= 0; n--, multiplier++)
				{
					if (b[n] == 48)
						continue;
						number += 1 << multiplier;
						}
						return (number);
						}
