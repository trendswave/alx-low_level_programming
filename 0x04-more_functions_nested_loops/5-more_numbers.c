#include "main.h"
/**
 * more_numbers - Print 0-14 10times
 */
void more_numbers(void)
{
	int k = 0;

	int l = 0;

	while (l <= 9)
	{
		while (k <= 14)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			k++;
		}
		_putchar('\n');
		l++;
		k = 0;
	}

}
