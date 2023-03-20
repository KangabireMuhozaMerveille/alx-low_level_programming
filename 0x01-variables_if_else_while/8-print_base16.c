#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all numbers in base 16 in lowercase followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
