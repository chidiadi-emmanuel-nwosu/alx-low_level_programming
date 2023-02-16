/*
 * Program that prints size of various data types.
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints size of data types to stdout
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte \(s\)", sizeof(char));
	puts("");
	printf("Size of a int: %i byte \(s\)", sizeof(int));
	puts("");
	printf("Size of a long int: %i byte \(s\)", sizeof(long int));
	puts("");
	printf("Size of a long long int: %i byte \(s\)", sizeof(long long int));
	puts("");
	printf("Size of a float: %i byte \(s\)\n", sizeof(float));

	return (0);
}
