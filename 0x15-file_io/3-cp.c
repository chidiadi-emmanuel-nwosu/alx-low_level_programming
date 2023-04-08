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
int main(int ac, char *av[])
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

	buffer = malloc(1024);
	do {
		re = read(file_from, buffer, 1024);
		wr = write(file_to, buffer, re);
		if (wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

		file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (re > 0);


	return (0);
}

