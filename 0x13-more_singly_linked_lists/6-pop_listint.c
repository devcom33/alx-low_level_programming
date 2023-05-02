#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head of LL
 * Return: ....
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = (*head);
	*(head) = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
