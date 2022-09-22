#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested, its a parameter.
 * Return: 1, otherwise 0.. YES.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <='Z'))
	{
		return (1);
	}
	return (0);
}
