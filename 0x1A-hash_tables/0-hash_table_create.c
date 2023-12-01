#include "hash_tables.h"
/**
 * hash_table_s - create a hash table
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_s* table = (hash_table_s*) malloc(sizeof(hash_table_s));

	table->size = size;
	table->array = (hash_node_t**) malloc(table->size * sizeof(hash_node_s*));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
