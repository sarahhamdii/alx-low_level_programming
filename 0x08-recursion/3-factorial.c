#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	i = n * factorial(n - 1);
	return (i);
}
