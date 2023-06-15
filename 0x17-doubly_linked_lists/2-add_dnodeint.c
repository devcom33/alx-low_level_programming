#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head of the DLL
 * @n: data
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = (*head);

	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}

	*head = tmp;
	return (tmp);
}
