/*
 * File: 2-args.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", *(argv + i++));
	return (0);
}
