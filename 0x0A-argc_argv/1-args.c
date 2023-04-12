#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 when succesful
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
