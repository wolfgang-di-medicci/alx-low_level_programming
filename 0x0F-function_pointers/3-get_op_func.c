#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects a function from many
 * @s: operator passed as argument
 * Return: A pointer to the functiion
 * corresponding to the operator given as parameter
*/

int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
