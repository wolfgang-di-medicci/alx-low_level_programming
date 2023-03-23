#include "main.h"

/**
 * print_last_digit - to print lasst digit
 * @i: varibal input
 * Return: the value
 */

int print_last_digit(int i)
{
	int n = i % 10;

	if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar((n * -1) + '0');
	}
	return (0);
}
