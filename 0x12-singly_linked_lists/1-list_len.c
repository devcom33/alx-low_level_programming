#include "lists.h"
/**
 * list_len - len of a LL
 * @h: head of LL
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
