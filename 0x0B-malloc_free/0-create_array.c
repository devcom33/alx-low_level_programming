#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of array
 * @c: char argument
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	size_t i;

	if (s == NULL)
	{
		return (0);
	}
	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
