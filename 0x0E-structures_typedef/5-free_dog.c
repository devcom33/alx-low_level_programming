#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: a dog argument
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
