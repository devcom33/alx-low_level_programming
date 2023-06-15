#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of DLL
 * @n: data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	if (!current)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else if (*head != NULL)
	{
		current = (*head);
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
		newnode->prev = current;
	}

	return (newnode);
}
