#include "main.h"

/**
 * print_alphabet - print a-z in lower case
 * Return: 0 when successful
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
