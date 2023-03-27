#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: string
 * Return: s
 */

void rev_string(char *s)
{
	char ch, *p, *q;

	for (q = s; *q != '\0'; ++q);
	 if (q > s)
		 --q;
	 for (p = s; p < q; ++p, --q)
	 {
		 ch = *p;
		 *p = *q;
		 *q = ch;
	 }
	 return s;
}
