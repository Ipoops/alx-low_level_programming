#include "main.h"

/** _memset - fills the memory with a constant byte
 * @b: constant byte
 * @n: byte size
 * @s: pointer to memory area
 * 
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
