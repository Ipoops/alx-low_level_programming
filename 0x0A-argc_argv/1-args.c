#include <stdio.h>

/** this programs prints the count of arguments
 *@argc
 *@argv
 *count
 *Return - count
 */
int main(int argc, char *argv[])
{
	int count;

	argc = 1;
	
	for (count = 1; count < argc; count++)
		{
			printf("%d\n", count);
		}
	return (0);
}
