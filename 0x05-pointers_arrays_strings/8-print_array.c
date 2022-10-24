#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: arrays
 * @n: number of elements
 * Return: print
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf('\n');
}
