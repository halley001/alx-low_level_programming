#include "main.h"
/**
 *_islower - Entry point
 *
 *@c: checks if c is lower case or not
 *
 *Return: return 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
