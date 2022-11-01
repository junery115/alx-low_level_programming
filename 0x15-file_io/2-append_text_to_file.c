#include "main.h"

/**
 * append_text_to_file - appends text at the end of an existing file
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Return: 1 if success or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len, size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		size = write(fd, text_content, len);

		if (size == -1)
			return (-1);
	}

	close(fd);

	return (1);


}
