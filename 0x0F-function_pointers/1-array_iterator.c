#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - print each array element on a new line
 * @array: pointer  that points to the integer
 * @size: variable for size
 * @action: pointer that prints regular text
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
