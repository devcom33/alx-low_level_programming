#include "lists.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - add nodes in the end
 * @head: head
 * @str: data
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *tmp2;

	if (tmp == NULL || str == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	if (!tmp->str)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = _strlen(tmp->str);
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	tmp2 = *head;
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp;
	return (tmp);
}
