#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list
 * @head: Reference to the start of the list
 * @index: Index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if was deleted and -1 if dont was deleted
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int q;
	listint_t *tmpf;

	for (q = -1; *head != NULL; q++)
	{
		if (q + 1 == (int) index)
		{
			tmpf = (*head)->next;
			free(*head);
			*head = tmpf;
			return (1);
		}

		head = &(*head)->next;
	}

	return (-1);
}
