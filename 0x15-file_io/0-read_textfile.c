#include "holberton.h"


/**
 * read_textfile - reads a text file
 * @filename: file to open
 * @letters: number of letters to print
 * Return: letters printed or -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	fr = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, fr);

	free(buff);
	close(fd);
	return (fr);
}
