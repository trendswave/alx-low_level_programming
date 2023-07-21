#include<stdio.h>
#include "main.h"
/**
 *_isupper - Check whether character is uppercase*
 * @c: - the character to check
 *
 * Return: - 1 if c is uppercase else
 *	return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

