#include "main.h"

/**
 * _strpbrk - searches for any set of bytes from string2 in *	string1
 * @s: string1
 * @accept: string2
 *
 * Return: pointer to byte s or NULL
 */
char *s_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
