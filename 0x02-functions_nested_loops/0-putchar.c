#include <stdio.h>
#include "main.h"
/**
 *main - print "_putchar"
 *Return:0
 */

int main(void)
{
	char *ptchar = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ptchar[i]);
	}
	_putchar('\n');
	return (0);
}
