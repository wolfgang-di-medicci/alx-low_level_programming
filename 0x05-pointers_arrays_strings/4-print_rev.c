#include "main.h"

/**
 * print_rev - reverse the input
 * @s: input variable
 * Return: return nothing
 */

void print_rev(char *s)
{
	int numstr = 0;

	while (*s)
	{
		s++;
		numstr++;
	}
	while (numstr)
	{
		s--;
		_putchar(*s);
		numstr--;
	}
	_putchar('\n');
}
