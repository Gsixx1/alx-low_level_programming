#include "main.h"

/**
 * _isupper - checks if a character is uppercase pr not, its
 * the name of the function.
 * @c: character to be tested
 * Return: 1, 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
