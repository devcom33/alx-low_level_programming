#include "dog.h"
/**
 * _strdup - copy of the string
 * @str: string argument
 * Return: a duplcate string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *dup;
	char *fld = "failed to allocate memory";

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + len) != '\0')
	{
		len++;
	}
	len++;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		while ((*fld) != '\0')
		{
			_putchar(*fld);
			fld++;
		}
		_putchar('\n');
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(dup + i) = *(str + i);
	}
	return (dup);
	free(dup);
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
