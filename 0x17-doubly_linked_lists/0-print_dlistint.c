#include "lists.h"
/**
 * print_dlistint - prints all the elements
 * @h: head of DLL
 * Return: Number Of Elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
