#include "lists.h"
/**
 * free_dlistint - free DLL
 * @head: head of the DLL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t *tmp2 = NULL;

	if (head != NULL)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp2 = tmp->prev;
		while (tmp2->prev)
		{
			free(tmp);
			tmp = tmp2;
			tmp2 = tmp2->prev;
		}
	}
	free(tmp);
	free(head);
}
