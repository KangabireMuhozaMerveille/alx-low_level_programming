#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *n_free;

	while (head != NULL)
	{
		if (head != NULL)
		{
			n_free = (*head)->next;
			free(*head);
			*head = n_free;
		}

	}
}
