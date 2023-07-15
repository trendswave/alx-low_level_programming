#include <stdio.h>

/**
*prints the alphabet in lowercase
 * skips  letters q and e, using only putchar
 * Return: Always 0 (Success)
 */
/*Betty style to print the function*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
