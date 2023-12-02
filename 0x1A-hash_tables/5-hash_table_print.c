#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Hash table to print
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx, end;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (idx = 0, end = 1; idx < ht->size; idx++)
	{
		for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
		{
			printf("%s'%s': '%s'", end == 1 ? "" : ", ", tmp->key, tmp->value);
			end = 0;
		}
	}
	printf("}\n");

}
