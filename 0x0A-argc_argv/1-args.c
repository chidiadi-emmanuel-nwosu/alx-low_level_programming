/*
 * File: 1-args.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc < 1)
		printf("%s", argv[0]);
	printf("%i\n", argc - 1);
	return (0);
}
