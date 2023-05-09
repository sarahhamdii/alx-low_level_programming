#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_APPEND | O_RDWR, 0600);
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
