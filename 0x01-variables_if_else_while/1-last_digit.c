#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is used as the function name to
 * print out whatever.
 *
 * Description: This program will assign a random
 * number to the variable n, each time it is executed.
 * there are default strings already given to complete
 * this task.
 * Return: 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if ((lastDigit < 6) != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
