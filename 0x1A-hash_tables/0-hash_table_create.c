#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	size_t i;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) malloc(table->size * sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);

		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
