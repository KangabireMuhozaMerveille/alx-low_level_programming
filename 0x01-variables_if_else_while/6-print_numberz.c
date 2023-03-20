#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print 0 to 9 followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
