#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the dogs who let the dogs now
 * @d: dog to free
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
