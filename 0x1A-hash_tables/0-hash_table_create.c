#include"hash_tables.h"
/**
 * hash_table_create - creates a hashtable
 * @size: size of the array
 * Return: pointer to newly created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}
