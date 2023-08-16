#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: being checked for its sign
 *
 * Return: Returns 1 if +, return 0 and -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
