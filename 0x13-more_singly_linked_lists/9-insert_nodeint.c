#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Head of the list
 * @idx: Index
 * @n: Value of the new element
 *
 * Return: Address of the new element
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int q;
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n ==  NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;

		return (new_n);
	}

	for (q = 0; *head != NULL; q++)
	{
		if (q + 1 == (int) idx)
		{
			new_n->next = (*head)->next;

			(*head)->next = new_n;

			return (new_n);
		}

		head = &(*head)->next;
	}

	return (NULL);
}
