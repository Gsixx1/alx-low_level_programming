#include <stdio.h>

/**
 * main - the function name used to print
 * out the expectd output.
 *
 * Description: This program prints the alphabet in lowercase
 * followed by a new line. All code should be in the main function.
 * Only use putchar twice in the code.
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	if (alphabet != 'e' && alphabet != 'q')
{
	putchar(alphabet);
}
}
	putchar('\n');

	return (0);
}
