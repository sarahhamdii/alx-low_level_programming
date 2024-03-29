#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that creates a file
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, l;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		l = write(fd, text_content, strlen(text_content));
		if (l == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
