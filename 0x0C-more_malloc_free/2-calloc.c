#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *array_filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		exit(0);
	}
	array_filler = arr;
	for (i = 0; i < (size * nmemb); i++)
	{
		array_filler[i] = '\0';
	}
	return (arr);
}
