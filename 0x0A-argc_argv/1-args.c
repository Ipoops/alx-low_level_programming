#include <stdio.h>

/**
 * main - this programs prints the count of arguments
 *@argc: argument count
 *@argv: arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
