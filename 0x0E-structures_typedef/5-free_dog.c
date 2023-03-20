/**
 * File: 5-free_dog.c
 * Author: Chidiadi E. Nwosu
 */
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees datatype dog_t pointer
 * @d: dog_t type pointer input
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
