/*
 * File: 100-main_opcodes.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (success), 1 on incorrect number of argument,
 *         2 if ac[1] is a negative integer
 */
int main(int argc, char **argv)
{
	int i, byte;
	int (*func_ptr)(int, char **) = main;
	unsigned char *opcodes = (unsigned char *)func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		printf("%02x", *opcodes++);
		if (i != byte - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
