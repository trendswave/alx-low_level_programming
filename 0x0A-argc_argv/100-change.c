#include <stdio.h>
#include <stdlib.h>

/**
* main - Calculates the minimum number of coins needed for change.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[]);
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
		}

		int cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
			return (0);
			}

			int coins = 0;

			while (cents >= 25)
			{
				cents -= 25;
				coins++;
				}
				while (cents >= 10)
				{
					cents -= 10;
					coins++;

					while (cents >= 5)
					{
						cents -= 5;
						coins++;
						}
						while (cents >= 2)
						{cents -= 2;
						coins++;
						while (cents >= 1)
						{
							cents -= 1;
							coins++;
							}

							printf("%d\n", coins);

							return (0);
						}
