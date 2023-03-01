/*
 * File: 0-strcat.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			int j = 0;

			while (j < n)
			{
				dest[i++] = src[j++];

				if (src[j - 1] == '\0')
					break;
			}

			break;
		}
		i++;
	}
	return (dest);
}
