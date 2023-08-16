#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: return void;
 *
 */
void times_table(void)
{
	int num, hrt, result;

	for (num = 0; num <= 9; num++)
	{
	_putchar('0');

	for (hrt = 1; hrt <= 9; hrt++)
	{
	_putchar(',');
	_putchar(' ');
	result = num * hrt;
	if (result <= 9)
	_putchar(' ');
	else
	_putchar((result / 10) + '0');

	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
}
