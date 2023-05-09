#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main -  copies the content of a file to another file
 * @argc: integer
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char buf[1024];
	int filefrom, fileto, fd, w;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_CREAT | O_TRUNC | O_RDONLY, 0664);
	if (fileto == -1)
	{
		dprintf(2, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((fd = read(filefrom, buf, 1024)) > 0)
	{
		w = write(fileto, buf, fd);
		if (w == -1 || w != fd)
		{
			dprintf(2, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(filefrom) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	if (close(fileto) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	return (0);
}
