/*
 * File: 1-create_file.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output.
 * @filename: file to be created
 * @text_content: NULL terminated string to write to the filename.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0, re = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 00600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (; text_content[re]; re++)
			;

		wr = write(fd, text_content, re);
		if (wr < 0 || re != wr)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
