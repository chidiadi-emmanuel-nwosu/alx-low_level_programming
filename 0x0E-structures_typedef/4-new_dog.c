/**
 * File: 4-new_dog.c
 * Author: Chidiadi E. Nwosu
 */
#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	char *copy_name = malloc(strlen(name) + 1);
	char *copy_owner = malloc(strlen(owner) + 1);

	if (ptr == NULL)
		return (NULL);
	copy_name = name;
	copy_owner = owner;

	ptr->name = copy_name;
	ptr->age = age;
	ptr->owner = copy_owner;

	return (ptr);
}
