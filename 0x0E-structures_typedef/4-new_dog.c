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

	for (; name[len] ; len++)
	{}

	char *copy = malloc(sizeof(char) * len);

	if (!copy)
		return (NULL);

	for (; i < len; i++)
	{
		copy[i] = name[i];
	}

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
	new_dog->owner = str_copy(owner);

	return (new_dog);
}
