#include <stdio.h>
#include "main.h"

/**
 * main - prints the filename from which this function is compiled
 * Return: when succesful 0
*/

int main(void)
{
	int i;
	const char *filename = __FILE__;

	for (i = 0; filename[i] != '\0'; i++)
	{
		_putchar(filename[i]);
	}
	_putchar('\n');
	return (0);
}
