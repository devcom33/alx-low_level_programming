#include "lists.h"
/**
 * free_listint - free LL
 * @head: head of LL
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
