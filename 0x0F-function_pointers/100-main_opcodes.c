/*
 * File: 100-main_opcodes.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @ac: number of command line arguments
 * @av: array of command line arguments
 *
 * Return: 0 (success), 1 on incorrect number of argument,
 *         2 if ac[1] is a negative integer
 */
int main(int ac, char **av)
{
	int i, byte;
	int (*func_ptr)(int, char **) = main;
	unsigned char opcodes;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(av[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		opcodes = *(unsigned char *)func_ptr++;
		printf("%.2x", opcodes);
		printf(" ");
	}
	printf("\n");
}
