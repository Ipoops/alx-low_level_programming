#include "function_pointers.h"
/**
 * print_name - displays the name
 * @name: string of characters
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
