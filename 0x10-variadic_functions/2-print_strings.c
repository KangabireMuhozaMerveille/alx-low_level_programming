#include"variadic_functions.h"
#include<stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 * @separator: is the string to be printed between the strings
 * @n:is the number of strings passed to the function
 * @...:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL || i != n - 1)
		{
			printf("%s", separator);

			str = va_arg(args, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
	}
	va_end(args);

	printf("\n");
}
