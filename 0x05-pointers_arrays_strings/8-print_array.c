#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a:the array
 * @n: number of values
*/
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d != n - 1)
			printf(", ");
	}
	printf("\n");
}
