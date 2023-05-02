#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a LL
 * @h: a node
 * Return: LL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if(node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
