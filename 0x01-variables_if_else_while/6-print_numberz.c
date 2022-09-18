#include <stdio.h>

/**
 * main - This is the name of the program that should
 * be runned. The main is a function itself.
 *
 * Description: This program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line. All code must be in
 * this function. A putchar is required instead of a printf.
 * You are not to use a variable of type char.
 *
 * Return: 0
 */
int main(void)
{
	int baseTen;

	for (baseTen = '0'; baseTen <= '9'; baseTen++)
{
	putchar(baseTen);
}
	putchar('\n');
 
	return (0);
}
