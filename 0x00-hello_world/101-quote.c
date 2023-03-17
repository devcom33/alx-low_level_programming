#include <stdio.h>
/**
 * main - sprintf and that piece of art,
 * Return: 1
 */
int main(void)
{

	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar (str[i]);
		i++;
	}
	return (1);
}
