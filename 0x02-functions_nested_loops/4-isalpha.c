#include "main.h"

/**
 * _isalpha - check the code.
 * @c: Declaration parameter.
 *
 * Description: This function checks for alphabetic character.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
