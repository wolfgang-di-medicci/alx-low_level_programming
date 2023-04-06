#include "main.h"

/**
 * _pow_recursion - evaluates an exponentioal funtion
 * @x: input variable to be multiplied
 * @y: the exponent variable
 * Return: -1 if y < 0,
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
