#include "main.h"

/**
 *_islower - checks if lowercase
 *@c: the input character
 *Return: 0 for uppercase, 1 for lowercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
