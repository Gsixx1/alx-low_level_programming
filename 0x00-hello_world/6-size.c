#include <stdio.h>

/**
 * main - used to print the steing in the printf function
 *
 * Description: the main function is used to print
 * the size of various types on the computer it is compiled and run on.
 * 1) You should produce the exact same output as in the example
 * 2) Warnings are allowed
 * 3) Your program should return 0
 * 4) You might have to install the package libc6-dev-i386
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
