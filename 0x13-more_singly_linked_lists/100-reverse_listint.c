#include "lists.h"
/**
 * reverse_listint - reverse LL
 * @head: head of LL
 * Return: rev of LL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *nx;

	while (*head)
	{
		p1 = (*head)->next;
		(*head)->next = p1;
		p1 = (*head);
		*head = nx;
	}
	*head = p1;
	return (*head);
}
