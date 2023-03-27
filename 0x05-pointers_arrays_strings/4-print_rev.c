#include "main.h"
/**
 * print_rev - print reverse string
 * @s: string argument
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

}
