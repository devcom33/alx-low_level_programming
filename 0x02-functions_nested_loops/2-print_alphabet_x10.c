#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet
 * Return - nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int j;
	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
