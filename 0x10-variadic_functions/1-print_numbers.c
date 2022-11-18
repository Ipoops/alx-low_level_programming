#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - display numbers
 * @seperator: seperator
 * @n: parameter
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list pl;
	unsigned int i;

	va_start(pl, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(pl, int));
		if (i < (n - 1) && seperator)
		{
			printf("%s", seperator);
		}
	}
	va_end(pl);
	putchar('\n');
}
