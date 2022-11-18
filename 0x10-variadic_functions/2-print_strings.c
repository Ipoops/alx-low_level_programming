#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Prints a number followed by a seperator
 * @seperator: This is the string to seperate the numbers
 * @n: This is the number of arguments
 *
 * Return: null void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	int *arr = malloc(sizeof(int) * n);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
			arr[i] = 1;
		else 
			arr[i] = 0;
	}
	va_end(ap);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char*));
		if (i < (n - 1) && seperator)
		{
			printf("%s", seperator);
		}
	}
	va_end(ap);
	putchar('\n');
}
