#include "main.h"
/**
 * print_last_digit - check
 * @n: number
 * Return: return lastd
 */

int print_last_digit(int lastd)
{
	lastd = n % 10;
	if (lastd < 0)
		lastd = lastd * -1;
	_putchar (lastd + '0');
	return (lastd);
}
