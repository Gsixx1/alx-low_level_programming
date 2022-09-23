#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: parameter of the function.
 * Return: nothing
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
		{
			putchar(' ');
		}

		putchar('\\');

		if (len == (n - 1))
		{
			continue;
		}
		putchar('\n');
		}
	}
	putchar('\n');
}