#include"hash_tables.h"
/**
 * hash_table_print - prints the hashtable
 * @ht: hashtable
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int commas = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!commas)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			commas = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
