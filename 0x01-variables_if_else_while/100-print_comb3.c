#include <stdio.h>
/**
 * main - prints(" Inventing is a combination of brains and materials.")
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int firstDigit = i / 10;
		int secondDigit = i % 10;

		if (firstDigit < secondDigit)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
