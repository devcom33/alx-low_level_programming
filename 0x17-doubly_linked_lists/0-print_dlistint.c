#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t current = h;

	while (current)
	{
		printf("%d", current->n);
		current = current->next;
	}
	return (h);
}
