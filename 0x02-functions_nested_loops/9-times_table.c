#include "main.h"

/**
 * times_table - to print te table
 * Return: 0 when success
 */

void times_table(void)
{
	int a = 0, b = 9, c = 0;

	while (c <= 9)
	{
		while (a <= b)
		{
			int d = c * a;

			if (a != 0)
			{
				_putchar(',');
				if (d < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (d < 10)
				_putchar(d + '0');
			else
			{
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
			if (a == b)
			{
				_putchar('\n');
			}
			a++;
		}
		a = 0;
		c++;
	}



