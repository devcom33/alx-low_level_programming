#include <stdio.h>
#include "main.h"
/**
 * print_array - print elements
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d");
		}
		else
		{
			printf("%d, ",a[i]);
		}
	}
}
