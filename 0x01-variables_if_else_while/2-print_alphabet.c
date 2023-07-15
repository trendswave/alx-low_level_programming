#include <stdio.h>

/**
 * Using the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
/*Betty syle for the function goes*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
