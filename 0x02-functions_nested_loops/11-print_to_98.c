#include <stdio.h>

/**
 * print_to_98 - This is the function name and it prints all the
 * natural numbers from inputi(n) to 98 in order seperated by a comma
 * followed by a space.
 *
 * @n: This is the parameter of the function with data type int.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
				printf('\n', n);
	}
}
