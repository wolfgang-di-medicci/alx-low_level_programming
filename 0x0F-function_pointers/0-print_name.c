#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using a pointer to a func
 * @name: string input
 * @f: pointer to a fuction
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
	_putchar('\n');
}
