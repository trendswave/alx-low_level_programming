#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Create a hash node
 *
 * @key: Identifier
 * @value: Value for @key
 *
 * Return: Adrress of the new hash node
 **/
hash_node_t *create_node(const char *key, const char *value)
{
	char *d_key, *d_value;
	hash_node_t *new_node;

	d_key = strdup(key);
	if (!d_key)
		return (NULL);

	d_value = strdup(value);
	if (!d_value)
	{
		free(d_key);
		return (NULL);
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
	{
		free(d_key), free(d_value);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->key = d_key;
	new_node->value = d_value;
	return (new_node);
}
/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Hash table
 * @key: Key pair
 * @value: Value of the @key
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *tmp;
	char *d_value;

	if (!ht || !key || !value || !strlen(key) || !ht->array
			|| !ht->size)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			d_value = strdup(value);
			if (!d_value)
				return (0);

			free(tmp->value);
			tmp->value = d_value;
			return (1);
		}
	}

	tmp = create_node(key, value);
	if (!tmp)
		return (0);

	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}
