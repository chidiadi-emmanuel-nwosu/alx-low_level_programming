/*
 * File: 7-print_chessboard.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: input array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
