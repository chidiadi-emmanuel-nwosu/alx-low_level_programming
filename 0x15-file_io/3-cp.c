/*
 * File: 3-cp.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: number of commandline arguments.
 * @av: array of commandline arguments.
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int file_from, file_to, re, wr;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	buffer = init_buffer();
	do {
		re = read(file_from, buffer, 1024);

		wr = write(file_to, buffer, re);
		if (wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (re > 0);

	free(buffer);
	close_fd(file_from);
	close_fd(file_to);

	return (0);
}



/**
 * close_fd - closes an open file descriptor.
 * @fd: file descriptor input.
 *
 * Return: void
 */
void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}



/**
 * init_buffer - initialises a buffer of 1024 bytes
 *
 * Return: void
 */
void *init_buffer(void)
{
	void *buf = malloc(1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "buffer memory allocation failed\n");
		exit(101);
	}

	return (buf);
}
