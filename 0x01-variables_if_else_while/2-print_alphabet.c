#include <stdio.h>

/**
 * main - This is the name of the function used
 * to putchar the desired output.
 *
 * Description: Write a program that prints the alphabet in
 * lowercase, followed by a newline. There is no initial
 * code given to solve this task.
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
