#include <stdio.h>
#include "main.h"

/**
 * main - print it's name
 * @argc: number
 * @argv: array
 *
 * Return: always zero
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
