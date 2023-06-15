#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) 
 * @head: head of the DLL
 * Return: return a Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *current = head;

	while (current)
	{
		s += current->n;
		current = current->next;
	}
	return (s);
}
