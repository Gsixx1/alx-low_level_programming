#include <stdio.h>

/**
 * main - This is the name of the function that is to print
 * the desired or expected output.
 *
 * Description: The program prints all the numbers of base 16
 * in lowercase, followed by a new line. Only putchar function is
 * allowed. No [ printf, pits, etc ...].
 * All code should be in the main function.
 * Putchar is only allowed three times in the entire code.
 *
 * Return: 0
 */
int main(void)
{
	char baseSixteen;

	for (baseSixteen = '0'; baseSixteen <= '9'; baseSixteen++)
	{
		putchar(baseSixteen);
	}

	for (baseSixteen = 'a'; baseSixteen <= 'f'; baseSixteen++)
	{
		putchar(baseSixteen);
	}
		putchar('\n');

		return (0);
}
