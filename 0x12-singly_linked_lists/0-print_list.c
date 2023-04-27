#include "lists.h"
/**
 * print_list - prints all the elements
 * @h: head of the LL
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int cnt = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
