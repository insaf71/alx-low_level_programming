#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the number to be checked
 * Return: 1 for the character that will be a digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
