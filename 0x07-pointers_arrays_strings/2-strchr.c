#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 *
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\n')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

