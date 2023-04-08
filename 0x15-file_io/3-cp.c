/*
 * File: 3-cp.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of commandline arguments.
 * @argv: array of commandline arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, re, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		char buf[1024];
		
		re = read(file_from, buf, 1024);
		if (re < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(file_to, buf, re);
		if (wr < 0 || wr != re)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		close_fd(file_to);

		file_to = open(argv[2], O_APPEND);
		
	} while (re > 0);

	close_fd(file_to);
	close_fd(file_from);
	return (0);
}




/**
 * close_fd - closes a file descriptor(fd).
 * @fd: fd to be closed.
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
