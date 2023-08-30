#include "lists.h"

/**
* free_listint_safe - Function that frees a listint_t list
*@head: Head of the list
*
* Return: Return NULL
**/
size_t free_listint_safe(listint_t **head)
{
	int q, marker;
	listint_t *tmpf;

	for (q = marker = 0; *head != NULL || marker; q++)
	{
		if (*head <= (*head)->next)
		{
			marker  = 1;
			break;
		}

		tmpf = (*head)->next;
		free(*head);
		*head = tmpf;
		marker  = 0;
	}

	if (marker)
	{
		tmpf = (*head)->next;
		free(*head);
		q++;
	}

	*head = NULL;
	return (q);
}
