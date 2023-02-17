/*
 * program that prints the alphabet in lowercase.
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints all the letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
