#include "main.h"
/**
 * _strchr - a function that locate the first occurrence of a char in a string
 * @s: the string
 * @c: the char to be located
 * Return: a pointer to the first c in ths string or NULL
 * if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
