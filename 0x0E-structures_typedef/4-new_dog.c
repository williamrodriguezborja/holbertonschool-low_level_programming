#include "dog.h"

char *str_copy(char *name)
{

}

/**
 * new_dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new doggies
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;

	new_dog.age = age;

	return (&new_dog);
}