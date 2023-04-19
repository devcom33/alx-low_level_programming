#include "function_pointers.h"
/**
 * array_iterator - print array elements in decimal and hex
 * @array: array argument
 * @size: size of the array
 * @action: action function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
