#include "main.h"

/**
 * print_alphabet_x10 - to print a-z 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i=0;

	while (i < 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
