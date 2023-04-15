#include <stdio.h>
#include "main.h"

/* main: print it's name 
 * @argc: number
 * @argv: array
 *
 * Return: always zero
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return(0);
}
