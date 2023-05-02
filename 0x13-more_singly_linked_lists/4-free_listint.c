#include "lists.h"
/**
 * free_listint - free LL
 * @head: head of LL
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;
	
	if(!head)
	{
		free(tmp);
		free(head);
	}
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
