#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array argument
 * @size: size of the array
 * @cmp: compare values
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c = 0;

	if ((size <= 0) || (!array) || (!cmp))
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
		else
		{
			c++;
		}
	}
	if (c == size)
	{
		return (-1);
	}
	return (0);
}
