#include "main.h"

/**
 * more_numbers - writes numbers 14 times
 * Return: nothing when successful
 */

void more_numbers(void)
{
	int i = 0, j = 14, k;

	for (k = 0; k < 10; k++)
	{
		while (i <= j)
		{
			_putchar(i > 9 ? (i / 10) + '0' : i + '0');
			if (i > 9)
				_putchar((i % 10) + '0');
			i++;
		}
		i = 0;
		_putchar('\n');
	}
}
