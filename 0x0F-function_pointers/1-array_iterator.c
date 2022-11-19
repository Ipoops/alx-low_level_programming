#include "function_pointers.h"

/**
 * array_iterator -acts on each array member
 * @array: an array of characters
 * @size: an int
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
