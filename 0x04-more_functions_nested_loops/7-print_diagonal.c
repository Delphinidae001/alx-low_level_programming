#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: numbers of '\' to be printed
 */

void print_diagonal(int n)
{
	int d, e;

	if (n <= 0)
		_putchar('\n');

	for (d = 0; d < n; d++)
	{
		for (e = 0; e < d; e++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\\');
	}
}
