#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * int_index - is a function that searches for an element 
 * @array: a pointer that points to integer
 * @size: is the number of elements in the array
 * @cmp: is a pointer that compares the size of bytes
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return(i);
	}
	return(-1);
}	
