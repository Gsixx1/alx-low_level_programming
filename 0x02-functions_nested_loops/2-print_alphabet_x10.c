#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Description: This program prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
			_putchar('\n');
	}
}