#include "lists.h"

/**
*add_nodeint_end - This function adds a new node at the end
* of a listint_t list
* @head: The pointer to the listint_t list
* @n: The integer element inside the listint_t list
* Return: The address of the new element, or NULL for failure
*by @trendswave
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create the last node */
	listint_t *lastf;

	/* create temp node & allocate memory for it */
	listint_t *tmpf = malloc(sizeof(listint_t));

	/* check to make sure malloc didn't fail */
	if (tmpf == NULL)
		return (NULL);

	/* assign data to tmp */
	tmpf->n = n;
	tmpf->next = NULL;

	/* if head is NULL, then tmp node becomes head */
	if (*head == NULL)
		*head = tmpf;
	else
	{
		lastf = *head;
		/* traverse list to get to the last node */
		while (lastf->next != NULL)
			lastf = lastf->next;
		/* assign tmp to that last node */
		lastf->next = tmpf;
		}

		return (tmpf);
}
