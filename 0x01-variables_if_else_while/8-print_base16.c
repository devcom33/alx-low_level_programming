#include <stdio.h>
/**
 * main - print Hexa
 * Return: 0
 */


int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 16) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
