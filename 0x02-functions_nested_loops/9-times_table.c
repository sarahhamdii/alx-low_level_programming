#include "main.h"
/**
 * times_table - check
 *
 * Return: void
 */

void times_table(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = 48; a <= 57 ;a++)
	{
		for (b = 48; b <= 57;b++)
		{
			c = a * b
			if ((c / 10) != 0)
				_putchar('0' + (c / 10);
			else
				if (a != 0)
					_putchar (' ');

			_putchar('0' + (c %10));
			if (n != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n')
		b = b + 1;
	}
}
