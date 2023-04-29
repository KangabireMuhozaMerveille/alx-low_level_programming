#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_list - prints the list of number nodes
 * @h: the node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%lu] %s\n", strlen(current->str), current->str);
		else
			printf("[0] (nil)\n");
		count++;
		current = current->next;
	}

	return (count);
}
