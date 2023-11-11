#include "lists.h"

/**
* dlistint_len - Number of elements in a linked dlistint_t list
*
* @h: Head of the linked list
*
* Return: Number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next, elements++)
		;

	return (elements);
}
