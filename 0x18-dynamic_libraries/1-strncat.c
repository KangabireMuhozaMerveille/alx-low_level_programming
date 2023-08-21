#include "main.h"
/**
 * _strncat - a function that concatenat  char to a string
 * @dest: the destination file
 * @src: the source file
 * @n: the amount of char to concatenate
 * Return: (void)
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		destlen++;
		i++;
	}
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}
	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
