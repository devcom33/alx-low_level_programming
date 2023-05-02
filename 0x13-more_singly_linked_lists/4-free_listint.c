#include "lists.h"
/**
 */
void free_listint(listint_t *head)
{
	listint_t tmp = head;

	while (head->next)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
		head = head->next;
	}
	free(tmp);
	free(head);
}
