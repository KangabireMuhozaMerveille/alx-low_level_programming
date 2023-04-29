#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct print_list
{
	char *str;
	unsigned int len;
	struct print_list* next;
} list_t;
size_t print_list(const list_t *h);
int main(void);
size_t list_len(const list_t *h);
#endif
