#include "main.h"
/**
 * malloc_checked -  that allocates memory
 * @b: size
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
}
