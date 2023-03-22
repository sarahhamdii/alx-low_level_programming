#include "main.h"
/**
 * times_table - check
 *
 * Return: void
 */

void times_table(void)
{
	int n;
	int m;
	int num;
	int i;

	m = 0;
	for (i = 48; i <= 57 ;i++)
	{
		for (n = 48; n <= 57;n++)
		{
			num = n * m;
			if ((num / 10) != 0)
				_putchar('0' + (num / 10);
			else
				if (n != 0)
					_putchar (' ');

			_putchar('0' + (num %10));
			if (n != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n')
		m = m + 1;
	}
}
