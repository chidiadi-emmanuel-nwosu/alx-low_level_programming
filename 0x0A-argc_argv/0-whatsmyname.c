/*
 * File: 0-whatsmyname.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line argument
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
