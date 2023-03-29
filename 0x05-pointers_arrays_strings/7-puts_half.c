#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string varable
 * Return: nothing when succesful
 */

void puts_half(char *str)
{
	int c = 0, i;

	while (*str)
	{
		c++;
		str++;
	}
	for (i = 0; i < c; i++)
	{
		str--;
	}
	i = (c % 2 == 0) ? c / 2 : (c + 1) / 2;

	for (; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
