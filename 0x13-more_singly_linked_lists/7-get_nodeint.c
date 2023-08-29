#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: Head of the list
 * @index: Position to get
 *
 * Return: Address of the element
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int f;

	for (f = 0; head != NULL; f++, head = head->next)
		if (f == (int) index)
			return (head);

	return (NULL);
	}
