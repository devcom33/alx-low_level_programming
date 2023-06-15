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

	while (current)
	{
		if (cnt == index)
		{
			tmp->prev = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		cnt++;
		current = current->next;
	}
	return (0);
}
