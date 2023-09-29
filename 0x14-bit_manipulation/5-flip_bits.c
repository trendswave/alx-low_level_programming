#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function that returns the number of bits
 * need to flip to get from one number to another
 * @n: Number
 * @m: Number
 *
 * Return: Numbers of bits that n have to change for be equal to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, checks;

	for (checks = l = 0; l < 64; l++, checks++)
		if (((n >> l) & 1) == ((m >> l) & 1))
			checks--;

	return (checks);
}
