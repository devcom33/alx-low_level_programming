#include "dog.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy a string
 * @dest: dest string arg
 * @src: source arg
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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

	_strcpy(name, newdog->name);
	newdog->name = malloc(_strlen(newdog->name) + 1);
	if (!(newdog->name))
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	_strcpy(newdog->owner, owner);
	newdog->owner = malloc(_strlen(newdog->owner) + 1);
	if (!(newdog->owner))
	{
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
