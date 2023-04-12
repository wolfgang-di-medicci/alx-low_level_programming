#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program even if renamed
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
*/

int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
