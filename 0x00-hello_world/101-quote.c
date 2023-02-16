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
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(str, 1, sizeof(str), stderr);
	fwrite("\n", 1, sizeof(char), stderr);

	return (1);
}
