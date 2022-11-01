#include "main.h"

/**
 * _strpbrk - searches for any set of bytes from string2 in *	string1
 * @s: string1
 * @accept: string2
 *
 * Return: pointer to byte s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
