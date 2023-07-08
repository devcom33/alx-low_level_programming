#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: ...
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	struct hash_table_s *table;
	size_t i;

	table = (struct hash_table_s*)malloc(sizeof(struct hash_table_s));
	if (!table)
		return (NULL);
	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;	
	}
	return (table);
}
