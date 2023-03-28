#include "main.h"

/**
 * _puts - prints a given string
 * @str: string variable
 * Return: nothing when succesful
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

