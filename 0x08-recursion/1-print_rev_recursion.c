#include "main.h"

/**
 * _print_rev_recursion - prints a strinng in reverse
 * @s: character to be printed
 *
 * Return: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
