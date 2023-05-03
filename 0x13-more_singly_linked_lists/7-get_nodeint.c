#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of LL
 * @head: a node
 * @index: index of a node
 * Return: node of the i
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *tmp = head;

	if (!head)
		return (NULL);
	while (cnt != index && tmp)
	{
		tmp = tmp->next;
		cnt++;
	}
	if (cnt == index)
		return (tmp);
	return (NULL);
}
