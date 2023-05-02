#include "lists.h"
/**
 * add_nodeint - adds a node to thrend og the list
 * @head: the
 * @n:the variable of the integer
 * Return: the new address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		printf("new element");
		return (NULL);
	}
	ptr->n = n;
	ptr->next = (*head);
	(*head) = ptr;
	return (ptr);
}
