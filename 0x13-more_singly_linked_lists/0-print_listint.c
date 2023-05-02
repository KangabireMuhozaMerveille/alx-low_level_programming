#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_listint - prints the list of number nodes
 * @h: the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
