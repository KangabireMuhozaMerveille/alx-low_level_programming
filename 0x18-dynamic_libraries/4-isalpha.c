#include "main.h"
/**
 * _isalpha - a function that chaeck for alphabetic char
 * @c: the paramater to be checked
 * Return: (1) if c is letter otherwise return (0)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 132))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
