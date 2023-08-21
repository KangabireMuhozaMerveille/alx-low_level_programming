#include "main.h"
/**
 * _memcpy - a function that copy mem areas
 * @dest: the destination array
 * @src: the source array
 * @n: the number of byte to be copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
