#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: name of the age
 * @owner: name of the owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
