#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * @h: a node
 * Return: size of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
