#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - it prints the name
 * @name: variable for the variable
 * @f: the name of the pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
