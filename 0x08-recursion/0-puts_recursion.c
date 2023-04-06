#include "main.h"

/**
 * _puts_recursion - prints strings using recursion
 * @s: input string
 * Return: when succesful 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
