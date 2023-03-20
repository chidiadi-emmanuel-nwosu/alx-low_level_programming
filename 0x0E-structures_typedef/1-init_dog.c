/*
 * File: 1-init_dog.c
 * Author: Chidiadi E. Nwosu
 */
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to address of struct dog variable
 * @name: first element of d
 * @age: second element of d
 * @owner: third element of d
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
