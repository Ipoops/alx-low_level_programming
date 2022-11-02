#include "main.h"

/**
 * _pow_recursion: raises a numbr to its power
 *
 * @x: number
 * @y: power
 * Return: int value of the expression
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else 
		return (x * _pow_recursion(x, y - 1));
}
