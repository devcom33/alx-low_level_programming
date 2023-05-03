#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: head of LL
 * @index: index of LL
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tmp2;
	unsigned int k = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);	
	}
	while (k < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		k++;
	}
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
