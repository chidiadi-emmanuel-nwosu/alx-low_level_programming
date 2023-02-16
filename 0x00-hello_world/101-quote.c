/*
 * Program that prints to standard error
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints to stderr followed by a new line
 *
 * Return: 1
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n", 1, 59, stderr);

	return (1);
}
