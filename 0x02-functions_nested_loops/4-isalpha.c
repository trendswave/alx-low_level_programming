#include<stdio.h>
/**
 * _isalpha - Checks for lowercase character
 * @c: The character to be checked (must be an ASCII character)
 *
 * Return: 1 if c is a character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

