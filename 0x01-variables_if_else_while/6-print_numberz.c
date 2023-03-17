#include <stdio.h>
/**
 * main - print alphabetic
 * Return: 0
 */


int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10)+'0');
	}
	putchar('\n');
	return (0);
}
