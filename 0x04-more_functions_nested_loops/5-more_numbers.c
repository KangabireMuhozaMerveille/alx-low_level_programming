#include "main.h"

/**
 * more_numbers - prints 10 numbers
 * Return: 0
 */

void more_numbers(void)
{
	int n, x;

	for (n = 0; n < 14; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 0)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');

		}
		_putchar('\n');
	}
}
