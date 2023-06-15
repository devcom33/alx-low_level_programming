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
		if ((*head)->next != NULL)
			(*head) = (*head)->next;
		free(current);
		return (1);
	}
	while (current->next)
	{
		if (cnt == index)
		{
			current->prev = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		cnt++;
		current = current->next;
	}
	if (cnt == index)
	{
		free(current);
		return (1);
	}
	return (-1);
}
