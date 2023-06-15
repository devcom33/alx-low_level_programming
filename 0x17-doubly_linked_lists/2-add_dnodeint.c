#include "lists.h"
/**
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return NULL;
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
