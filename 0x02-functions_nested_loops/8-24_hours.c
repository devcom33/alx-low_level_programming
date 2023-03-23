#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print last digit
 */
void jack_bauer(void)
{
	int i, j;
	char *snm;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
			}
			_putchar(i + '0');
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
			}
			Sprintf(snm, "%d", j);
			_putchar('\n');
		}
	}
}
