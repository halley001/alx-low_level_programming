#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: integer to be checked
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase, 0 otherwwise
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
