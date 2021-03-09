#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  str_copy - copy string
 * @name: string to copy with malloc
 * Return: string char pointer
*/
char *str_copy(char *name)
{
	int len = 0, i = 0;
	char *copy;

	for (; name[len] ; len++)
	{}

	copy = malloc(sizeof(char) * (len + 1));

	if (!copy)
		return (NULL);

	for (; i < len; i++)
		copy[i] = name[i];

	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - create new dog and return new doc
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new doggies
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->age = age;
	new_dog->name = str_copy(name);

	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = str_copy(owner);

	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
