#include "main.h"
/**
 * swap_int - swap a and b
 * @a: integer argument a
 * @b: integer argument b
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
