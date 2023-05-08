#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file
 * @filename: character
 * @letters:  the number of letters it should read and print
 *
 * Return: the actual number or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, l;
	char *b;

	if (filename == NULL)
		return (0);
	b = malloc(letters);
	if (b == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(b);
		return (1);
	}
	i = read(fd, b, letters);
	if (i == -1)
	{
		free(b);
		return (0);
	}
	if (i > 0)
	{
		l = write(1, b, i);
		if (l == -1)
		{
			free(b);
			return (0);
		}
	}
	free(b);
	close(fd);
	return (i);
}
