#include "lists.h"
/**
 * add_node - adds a node to thrend og the list
 * @head: the
 * @str: string contained in the address
 * Return: the new address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = (list_t *)malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		printf("new element");
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->next = (*head);
	(*head) = ptr;
	return (ptr);
}
