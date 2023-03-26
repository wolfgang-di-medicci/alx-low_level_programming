#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: variable to print
 * Return: when successful 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
