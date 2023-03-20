/**
 * File: 4-new_dog.c
 * Author: Chidiadi E. Nwosu
 */
#include "dog.h"
#include <stdlib.h>

int _strlen(char *);
char *_strcpy(char *dest, char *src);

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
	
	ptr->name = malloc(_strlen(name) + 1);
	ptr->owner = malloc(_strlen(owner) + 1);

	if (!ptr->name || !ptr->owner)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);
}



/**
 * _strlen - checks the length
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++);

	return (i);
}



/**
 * _strcpy - copies string
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
