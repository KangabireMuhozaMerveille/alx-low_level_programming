#include "main.h"
/**
 * _islower - a functionthat check if a character is lower case or not
 *@c: parameter checked
 * Return: (1) if yes
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
