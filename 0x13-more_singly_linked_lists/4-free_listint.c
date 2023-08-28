#include "lists.h"

/**
* free_listint - This function frees a listint_t list
* @head: The listint_t list to free
*/

void free_listint(listint_t *head)
{
	/* create temporary pointer to safely free list */
	listint_t *tmpf;

	while (head != NULL)
	{
		/* assign head node to tmp node */
		tmpf = head;

		/* make head point to next node on list */
		head = head->next;

		/* safely free node inside of tmp */
		free(tmpf);
	}
}
