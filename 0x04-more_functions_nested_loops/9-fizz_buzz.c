/*
 * File: 9-fizz_buzz.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 through 100, replacing multiples of 3 with fizz,
 *        multiples of 5 with buzz and multiples of both 3 and 5 with fizzbuzz
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
