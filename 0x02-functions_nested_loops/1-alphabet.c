#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: This function prints the alphabet, in
 * lowercase, followed by a new line.
 * only use _putchar twice in the code.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
