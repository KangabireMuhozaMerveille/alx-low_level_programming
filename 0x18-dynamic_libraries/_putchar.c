#include <unistd.h>
/**
 * _putchar - implementing the _putchar function
 * @c: char
 * Return: -1 if failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
