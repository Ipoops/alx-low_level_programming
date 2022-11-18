#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: paramter, last named parameter
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v1;
	int sum;
	unsigned int i;

	va_start(v1, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(v1, int);
	}
	va_end(v1);
	return (sum);
}
