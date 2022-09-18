#include <stdio.h>

/**
 * main - This is the name of the function and it's used to
 * print out the desired or expected output of the code that
 * will be written.
 *
 * Description: This program will print out all single digit numners
 * of base 10 starting from 0. And please note that base 10 digit
 * numbers are only [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]. Hence this
 * program is required to print all base ten digit numbers followed
 * by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int baseTen;

	for (baseTen = 0; baseTen <= 9; baseTen++)
{
	printf("%d", baseTen);
}
	return (0);
}
