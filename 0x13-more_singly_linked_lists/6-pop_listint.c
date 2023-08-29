#include "lists.h"

/**
*pop_listint - Deletes the head node of a listint_t
*list
*
*Return: Head nods the data(n)
**/
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *tmpf;

	if (*head == NULL)
		return(0);

	tmpf = (*head)->next;
	h_node = (*head)->n;
	free(*head);
	*head = tmpf;

	return(h_node);
}
