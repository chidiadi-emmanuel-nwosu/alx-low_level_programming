/*
 * File: 6-is_prime_number.c
 * Author: Chidiadi Nwosu
 */

#include "main.h"

int find_prime(int, int);

/**
 * is_prime_number - checks if an integer is prime
 * @n: input integer
 *
 * Return: 1 if n is prime, 0 therwise
 */
int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (find_prime(n, 1));
}


/**
 * find_prime - find the prime number of an integer
 * @n: input integer
 * @i: counter
 *
 * Return: 1 or 0
 */

int find_prime(int n, int i)
{
	int ch1 = 6 * i - 1;
	int ch2 = 6 * i + 1;

	if (n % ch1 == 0 || n % ch2 == 0)
		return (0);
	if ((ch1 * ch1) > n)
		return (1);
	return (find_prime(n, i + 1));
}
