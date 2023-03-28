#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string variable
 * Return: nothing on success
 */

void puts2(char *str)
{
	int c = 0, i;

	while (*str)
	{
		c++;
		str++;
	}
	for (i = 0; i < c; i++)
		str--;
	for (i = 0; i < c; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
