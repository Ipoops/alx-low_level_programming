#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: paramter
 * @size: parameter
 * @cmp: pointer to a function used to compare values
 * Return: first element's index on success otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for ( i = 0; i < size; i++)
			if (cmp(array[i] != 0))
				return (i);
	return (-1);
}
