#include "main.h"

/**
 * factorial - serves a factorial function
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int result = 1;
	if (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
