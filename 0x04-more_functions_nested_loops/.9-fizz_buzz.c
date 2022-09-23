#include <stdio.h>

/**
 * main - program that prints either a number of fizz or buzz or fizzbuzz, yes
 *
 * Description: The program prints fizz buzz.
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
				printf("\n");
			}
			else
			{
				printf("Buzz ");
			}
		}else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
		num++;
	}
	return (0);
}
