#include "lists.h"
/**
 * sum_listint - the sum of all the data
 * @head - head of LL
 * Return: sum of LL
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (!head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
