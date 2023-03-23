#include "main.h"

/**
 * print_last_digit - to print lasst digit
 * @i: varibal input
 * Return: the value
 */

int print_last_digit(int i)
{
	int n = i % 10;

	n = n < 0 ? n * -1 : n;
	_putchar(n + '0');

	return (n < 0 ? n * -1 : n);
}
