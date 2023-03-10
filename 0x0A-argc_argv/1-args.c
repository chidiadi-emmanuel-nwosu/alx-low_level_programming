/**
 * File: 1-args.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%i\n", argc - 1);
	return (0);
}
