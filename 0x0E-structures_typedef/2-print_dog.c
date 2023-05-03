#include "dog.h"
/**
 * print_dog - printf struct dog
 * @d: struct dog argument
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!(d->name))
		d->name = "(nil)";
	if (!(d->owner))
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("Age: %f\n", 0.0000);
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
