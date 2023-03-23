#include "main.h"

/**
 * print_last_digit - to print lasst digit
 * @i: varibal input
 * Return: the value
 */

int print_last_digit(int i)
{
	if ((i % 10) >= 0)
	{
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar((i % 10) * -1);
	}
	return (0);
}
