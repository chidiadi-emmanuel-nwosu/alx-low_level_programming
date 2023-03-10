/*
 * File: 2-args.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int change = atoi(argv[1]);
		int i = 0;

		while (change)
		{
			if (change < 0)
				break;
			if (change >= 25)
				change -= 25;
			else if (change >= 10)
				change -= 10;
			else if (change >= 5)
				change -= 5;
			else if (change >= 2)
				change -= 2;
			else
				change -= 1;
			i++;
		}
		printf("%i\n", i);
		return (0);
	}
	printf("Error\n");
	return (1);


}
