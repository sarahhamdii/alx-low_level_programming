#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - print it's name
 * @argc: number
 * @argv: array
 *
 * Return: always zero
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int n = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ((argv[i][n] < '0') || (argv[i][n] > '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
