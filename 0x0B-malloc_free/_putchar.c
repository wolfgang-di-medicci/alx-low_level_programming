#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the chararacter c to stdout
 * @c: Ther character to print
 * Retrun: 1 on success
 * On error, -1 is returned, and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}