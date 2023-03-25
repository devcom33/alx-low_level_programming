#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i, j, k, l = 9;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 1; k++)
		{
			if (k == 1)
			{
				l = 4;
			}
			for (i = 0; i <= l; i++)
			{
				if (k == 1)
				{
					_putchar(1 + '0');
				}
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
