/*
 * File: 3-print_all.c
 * Author: Chidiadi E. Nwosu
 * Date: March 23, 2023
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0;
	char *tmp, *sep = ", ";

	va_start(ptr, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				tmp = va_arg(ptr, char *);
				if (tmp)
				{
					printf("%s", tmp);
					break;
				}
				printf("(nil)");
		}

		if ((format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's') && format[i + 1])
			printf("%s", sep);

		i++;
	}

	va_end(ptr);
	printf("\n");
}
