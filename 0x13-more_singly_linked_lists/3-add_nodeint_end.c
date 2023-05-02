#include "lists.h"
/**
 * add_nodeint_end - add a node at the end
 * @head: head of LL
 * @n: value of node
 * Return: A LL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!node)
		return (NULL);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	node->n = n;
	tmp->next = node;
	free(tmp);
	return (node);
}
