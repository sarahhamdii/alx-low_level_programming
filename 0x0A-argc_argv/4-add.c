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
	int n;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		while (argv[i][n] != '\0')
		{
			if ((argv[i][n] < 48) || (argv[i][n] > 57))
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		n = 0;
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
