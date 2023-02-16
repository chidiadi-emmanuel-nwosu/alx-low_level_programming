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
	printf("Size of a int: %i byte \(s\)", sizeof(int));
	printf("Size of a long int: %i byte \(s\)", sizeof(long int));
	printf("Size of a long long int: %i byte \(s\)", sizeof(long long int));
	printf("Size of a float: %i byte \(s\)", sizeof(float));

	return (0);
}
