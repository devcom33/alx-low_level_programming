#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphab
 * Return : nothing
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
int main(void)
{
    print_alphabet();
    return (0);
}
