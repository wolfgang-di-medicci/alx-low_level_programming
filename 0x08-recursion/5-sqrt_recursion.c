#include "main.h"

/**
 * _sqrt_recursion - finds the perfect square of a number
 * _sqrt_recursive_helper - aids in the process
 * @n: input variable
 * @i: aids in the process and starts from 1
 * Return: the perfect square root, otherwise -1
 */

int _sqrt_recursive_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		if (i * i > n)
			return (-1);
		else
			return (_sqrt_recursive_helper(n, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_recursive_helper(n, 1));
}
