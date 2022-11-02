#include "main.h"

/**_puts_recursion: print a string
 *
 * @s:charcter to be printed
 *
 * Return string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion *(s + 1);
		return;
	}
	_putchar('\n');
	
}
