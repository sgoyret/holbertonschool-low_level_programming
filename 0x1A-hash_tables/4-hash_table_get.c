#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key you are looking for
 * Return: value associated or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *keydup = (const unsigned char *)key;
	unsigned long int k_idx = 0;
	char *value;
	hash_node_t *head;

	k_idx = key_index(keydup, ht->size);

	if (key == NULL || !ht || *key == '\0')
		return (NULL);
	head = ht->array[k_idx];
	if (!head)
		return (NULL);
	value = head->value;


	if (value != NULL)
	{
		return (value);
	}
	return (NULL);
}