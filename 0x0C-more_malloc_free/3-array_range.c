#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lower inclusive integer boundary
 * @max: upper inclusive integer boundary
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr;
	int nmemb, size, i = 0;

	nmemb = max - min + 1;
	size = sizeof(int);

	if (min > max)
	{
		return (NULL);
	}

	arr = calloc(nmemb, size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; i < nmemb; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
