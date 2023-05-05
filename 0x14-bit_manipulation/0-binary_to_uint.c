#include "main.h"
/**
 * binary_to_uint - converts binary numbers to an unsigned int
 * @b : pointer to a set of strings
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1' && b == NULL)
			return 0;
	}
	a = (a<<1) | (b[i] - '0');
	
	return a;
	i++;
}
