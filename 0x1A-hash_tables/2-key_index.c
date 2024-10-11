#include"hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key
 * @size: array size
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
