#include "main.h"
/**
 * malloc_checked -  that allocates memory
 * @b: size
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
