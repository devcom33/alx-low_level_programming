#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string argument
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
		len++;
	}
	_putchar('\n');
}
