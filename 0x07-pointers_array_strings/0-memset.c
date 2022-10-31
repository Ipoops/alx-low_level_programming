#include "main.h"

/** _memset - fills the first n bytes of the memory ar  * ea pointed to by @s with the constant byte @b
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Returns a pointer to the memory area @s
 */
char *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s;
	unsigned char value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
