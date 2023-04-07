#include "main.h"

/**
 * prime_helper - function evaluates prime or not
 * @i: - aids the process
 * @n: - input variable
 * Return: 1 if prime, 0 if not
 */

int prime_helper(int n, int i)
{
	if ((n == 0) || (n == 1))
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - main function
 * @n: input varialbe
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
