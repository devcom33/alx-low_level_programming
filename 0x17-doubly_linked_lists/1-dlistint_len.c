#include "lists.h"
/**
 * dlistint_len - the number of elements in DLL
 * @h: head of the DLL
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	
	while (h)
	{
		len++;
		h = h->next;
	}
	return (h);
}
