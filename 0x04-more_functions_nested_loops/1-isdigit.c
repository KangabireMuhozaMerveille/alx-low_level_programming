#include "main.h"

/**
 * _isdigit - checks if it is a digit
 * @c: is the digit
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
