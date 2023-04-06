#include "main.h"

/**
 * _print_rev_recursion - prints a given string in reverse
 * @s: input string
 * Return: 0 when succesful
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
