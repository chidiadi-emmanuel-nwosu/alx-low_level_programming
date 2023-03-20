/**
 * File: 4-new_dog.c
 * Author: Chidiadi E. Nwosu
 */
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a struct dog variable
 * @name: first element of the new variable
 * @age: second element of the variable
 * @owner: third element of variable
 *
 * Return: pointer to the newly created variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
