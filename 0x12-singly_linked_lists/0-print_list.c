#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements
 * @h: head of the LL
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		sz++;
		h = h->next;
	}
	return (sz);
}
