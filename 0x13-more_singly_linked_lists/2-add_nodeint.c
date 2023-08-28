#include "lists.h"

/**
* add_nodeint - This function adds a new node at the beginning
* of a listint_t list
* @head: The listint_t list
* @n: The integer element inside the listint_t list
* Return: The address of the new element, or NULL for failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* creates a node & allocate memory for it */
	listint_t *new_node = malloc(sizeof(listint_t));

	/*checks malloc failure*/
	if (new_node == NULL)
		return (NULL);

	/*asigs  new data*/
	new_node->n = n;
	new_node->next = *head;

	/*asigning new data as head*/
	*head = new_node;

	return (new_node);
	}
