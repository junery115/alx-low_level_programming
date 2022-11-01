#include "main.h"

/**
 * read_textfile - reads a text file and prints the content
 * @filename: filename to be written to
 * @letters: length of letters to be printed
 *
 * Return: length of letters printed.
 * also returns 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len, size;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);
	len = read(fd, buf, letters);
	size = write(STDOUT_FILENO, buf, len);

	close(fd);

	free(buf);

	return (size);

}
