#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a dog
 * @d: recive dog struct empty
 * @name: Name of send to dog struct
 * @age: Age of send to dog struct
 * @owner: Owner of send to dog struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
