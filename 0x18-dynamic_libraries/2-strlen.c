#include "main.h"
/**
 * _strlen - a function that calculate the lenght of a string
 * @s: the string to be evaluated
 * Return: (lenght)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
