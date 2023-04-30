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
	char *str = "failed to allocate memory";

	if (s == NULL)
	{
		while ((*str) != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
