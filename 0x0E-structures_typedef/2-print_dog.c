#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print my puppy
 * @d: recive dog struct to print
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name != NULL)

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
