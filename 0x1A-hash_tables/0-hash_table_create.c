#include "hash_tables.h"
/**
 * hash_table_s - create a hash table
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
	size_t i;

	table->size = size;
	table->array = (hash_node_t**) malloc(table->size * sizeof(hash_node_t*));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
