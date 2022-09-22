#include "main.h"
/**
 * _islower - check the code.
 *@c: int parameter
 * Description: This program writes a function that
 * checks for lowercase.
 *
 * Return: 0
 *
 */
int _islower(int c)
{
	/*Define a variable to hold our test letter*/
	int letter, val = 1, nvar = 0;

	/*Set the letter to a lowercase 'b' */
	letter = 'c';

	/* Test to see if the letter provided is lowercase */
	if (_islower(letter))
{
	_putchar(val);
}
	else
{
	_putchar(nvar);
}
	return (0);
}
