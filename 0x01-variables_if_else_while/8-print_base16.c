#include <stdio.h>
/**
 * main - print Hexa
 * Return: 0
 */


int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar((i % 16) + '0');
	}
	putchar('\n');
	return (0);
}
