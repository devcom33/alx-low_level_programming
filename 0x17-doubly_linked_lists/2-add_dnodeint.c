#include "lists.h"
/**
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (*head != NULL)
	{
		(*head)->prev = tmp;
		tmp->next = (*head);
		/* tmp->prev = NULL;*/
		*head = tmp;
	}
	return (tmp);
}
