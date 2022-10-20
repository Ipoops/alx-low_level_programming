#include "main.h"

/**
 *print_last_digit - prints last digit
 *@c: input value
 *Return: returns 0
 */

int print_last_digit(int c)
{
	int n;

	if (c >= 0)
		 n = c % 10;
	else
		n = -1 * (c % 10);
	_putchar(n + '0');
	return (n);
}
