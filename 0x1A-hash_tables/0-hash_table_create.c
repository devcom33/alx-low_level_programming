#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: ...
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table;
	size_t i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;

	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * table->size);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;	
	}
	return (table);
}
