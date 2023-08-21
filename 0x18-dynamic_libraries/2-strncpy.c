#include "main.h"
/**
 * _strncpy - a function to copy a string
 * @dest: the destination strin
 * @src: the source string
 * @n: the nuber of char to copy
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
