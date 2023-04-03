#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character c to display
 * @c: character to be printed
 * Return: when succesful 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
