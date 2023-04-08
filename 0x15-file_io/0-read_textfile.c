/*
 * File : 0-read_textfile.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX standard output.
 * @filename: textfile to be read
 * @letters: number of letters to be read
 *
 * Return: actual number of letters it could read, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, wr = 0, re = 0;
	char *tmp = NULL;

	if (!filename || letters <= 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	tmp = malloc(sizeof(*tmp) * letters);
	if (tmp == NULL)
	{
		close(fd);
		return (0);
	}

	re = read(fd, tmp, letters);
	if (re < 0)
	{
		close(fd);
		free(tmp);
		return (0);
	}

	wr = write(STDOUT_FILENO, tmp, re);
	if (wr < 0 || re != wr)
	{
		free(tmp);
		close(fd);
		return (0);
	}

	close(fd);
	free(tmp);

	return (wr);
}
