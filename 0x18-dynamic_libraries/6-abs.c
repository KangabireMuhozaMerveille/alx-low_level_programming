#include "main.h"
/**
 * _abs - a function to calculate the absolute value of a number
 * Return: (n)
 * @n: interger to evalute
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
