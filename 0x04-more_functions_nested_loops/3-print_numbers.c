#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
int zeroToNine;

for (zeroToNine = 48; zeroToNine < 58; zeroToNine++)
{
_putchar(zeroToNine);
}
_putchar(10);
}
