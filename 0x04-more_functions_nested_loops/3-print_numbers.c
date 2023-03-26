#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: 0 when succesful
 */

void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
