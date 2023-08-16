#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: takes value
 *
 * Return:  The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	char c = last_digit + '0';

	_putchar(c);
	return (c);
}
