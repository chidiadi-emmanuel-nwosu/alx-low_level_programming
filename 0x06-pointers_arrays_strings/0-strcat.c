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
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			int j = 0;

			while (1)
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
