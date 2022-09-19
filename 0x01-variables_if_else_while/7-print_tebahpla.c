#include <stdio.h>

/**
 * main - This is the name of the function that is to print
 * out the desired or expected output. It contain all the code
 * for this project.
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line. Only the putchar functionis allowed to be used
 * no [printf, puts, etc.....].
 * Putchar can only be used twice in this program.
 *
 * Return: 0
 */
int main(void)
{
	int reverseAlphabet;

	for (reverseAlphabet = 'z'; reverseAlphabet >= 'a'; reverseAlphabet--)
{
	putchar(reverseAlphabet);
}
	putchar('\n');

	return (0);
}
