#include <stdio.h>
/**
 *main - print "_putchar"
 *Return:0
 */

int main(void)
{
	char *ptchar = "_putchar";
	for (i = 0; i <= sizeof(putchar);i++)
	{
		_putchar(ptchar[i]);
	}
	_putchar('\n');
	return (0);
}
