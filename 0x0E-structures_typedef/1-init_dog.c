#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: dog argument
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog);
	if (d == NULL)
		return;
	d->name = (name);
	d->age = age;
	d->owner = owner;
}
