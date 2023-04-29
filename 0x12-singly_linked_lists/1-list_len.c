#include "lists.h"
/**
 * list_len - prints the number of elements
 * @h: the node
 * Return: 0 
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; )
	{
		count++;
		h = h->next;
	}
	return (count);
}
