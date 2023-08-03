#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - This function returns the length of a strings
 * @s: The strings to count
 * Return: The integer length of the strings
 */

int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
