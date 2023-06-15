#include "lists.h"
/**
 * free_dlistint - free DLL
 * @head: head of the DLL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t *tmp2 = NULL;

	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}
