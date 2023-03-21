#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet
 * Return - nothing
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
