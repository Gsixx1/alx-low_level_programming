#include <stdio.h>

/**
 * main - this is the function name that is used
 * to print the desired output, or requirement.
 *
 * Description: This program will the alphabet in
 * lowercase, and then in uppercase, followed by
 * a new line.
 *
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
{
	putchar(l);
}
	for (l = 'A'; l <= 'Z'; l++)
{
	putchar(l);
}
	putchar('\n');

	return (0);
}
