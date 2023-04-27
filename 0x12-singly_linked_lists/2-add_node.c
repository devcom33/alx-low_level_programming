#include "lists.h"
/**
 * add_node - add nodes
 * @head: head
 * @str: data
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	int len = 0;

	if (!tmp)
	{
		return (NULL);
	}
	while (*(str + len) != '\0')
	{
		len++;
	}
	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
