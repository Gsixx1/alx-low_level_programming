#include "main.h"

/**
 * print_last_digit - the name of the function that is to
 * print out the last number of a digit.
 *
 * @n: The number that will occupy the place holder as a parameter.
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
