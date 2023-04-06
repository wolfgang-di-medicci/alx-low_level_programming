#include "main.h"

/**
 * factorial - evaluates the factorial of a given integer
 * @n: input variable
 * Return: -1 if n is lower than 0, 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
