#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: key of an elem
 * @value: value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (key == NULL || ht == NULL || node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			/**
			 * collision: if two deffrent keys have same hash
			 */

		}
	
	}
	return (1);
}
