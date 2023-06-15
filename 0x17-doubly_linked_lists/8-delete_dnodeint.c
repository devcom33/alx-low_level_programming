#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the DLL
 * @index: index of the DLL
 * Return: S or N
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int cnt = 0;

	if (*head == 0)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && cnt < index)
	{
		cnt++;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
