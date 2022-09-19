#include <stdio.h>

/**
 * main - This is the name of the function that is to print out
 * the desired or expected output. All codes should be inside this
 * function.
 *
 * Description: The program prints all possible combinations of
 * single-digit numbers.
 * All numbers must be seperated by (,), followed by a space.
 * All numbers should be printed in ascending order.
 * Only putchar is allowed no [ printf, puts, etc,...].
 * Only use putchar four times maximum in the code and no type of char is
 * allowed.
 *
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
{
		putchar(s);

	if (s != 57)
	{
		putchar(',');

		putchar(' ');
	}
}
	putchar('\n');

	return (0);
}
