#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			putchar(i + '0');
		}
		for (i = 0; i <= 4; i++)
		{
			putchar(1 + '0');
			putchar(i + '0');
		}
		putchar('\n');
	}
}
