#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculates sum
 * @a: input a
 * @b: input b
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference
 * @a: input a
 * @b: input b
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates multiplication
 * @a: input a
 * @b: input b
 * Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division
 * @a: input a
 * @b: input b
 * Return: division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates reminder
 * @a: input a
 * @b: input b
 * Return: reminder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
