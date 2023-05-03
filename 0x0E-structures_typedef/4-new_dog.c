#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: name of the age
 * @owner: name of the owner
 * Return: new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = _strdup(name);
	if (!(newdog->name))
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = _strdup(owner);
	if (!(newdog->owner))
	{
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
