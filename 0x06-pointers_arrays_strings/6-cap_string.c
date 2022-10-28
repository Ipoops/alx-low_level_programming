#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s:string
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sept[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			j = 0;
			while (j < 14)
			{
				if (s[i - 1] == sept[j])
				{
					s[i] -= 32;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}
