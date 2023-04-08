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
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	check_error(file_from, 1, argv[1]);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 00664);
	check_error(1, file_to, argv[2]);

	do {
		re = read(file_from, buf, 1024);
		check_error(re, 1, argv[1]);

		wr = write(file_to, buf, re);
		check_error(1, wr, argv[2]);

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




/**
 * check_error - checks if syscall function returns an error
 * @file_from: fd input 1
 * @file_to: fd input 2
 * @filename: filename
 *
 * Return: void
 */
void check_error(int file_from, int file_to, char *filename)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(99);
	}
}
