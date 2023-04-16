#include <stdio.h>
#include "main.h"
#include <stdlib.h>

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
	int n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[n][i] >= 48 && argv[n][i] <= 57; n++)
		{
			printf("Error\n");
			return (1);
		}
		if (argc > 1)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
