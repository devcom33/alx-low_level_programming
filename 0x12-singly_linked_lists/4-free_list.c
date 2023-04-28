#include "lists.h"
/**
 * free_list - free LL
 * @head: head of LL
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
