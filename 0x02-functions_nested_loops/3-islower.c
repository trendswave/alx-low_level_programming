#include<stdio.h>
/**
 * _islower - check whether the given int is lower or uppercase
 *
 * * @c: The character to be checked (must be an ASCII character)
 *
 * Return: 1 if lowercase and 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

