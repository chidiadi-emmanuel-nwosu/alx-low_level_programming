/*
 * File: 2-append_text_to_file.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to be created
 * @text_content: NULL terminated string to write to the filename.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0, re = 0;

	if (!filename)
		return (-1);

	for (; text_content[re]; re++)
		;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);

	wr = write(fd, text_content, re);
	if (wr < 0 || re != wr)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	
	return (1);
}
