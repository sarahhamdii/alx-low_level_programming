#include "main.h"

/**
 * _puts - check the code
 * @str: character
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
