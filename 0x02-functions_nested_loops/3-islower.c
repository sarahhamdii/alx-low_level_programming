#include "main.h"
/**
 * islower - check the code
 *
 * Retuen: 0 && 1
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
