#include "main.h"

/**
 * print_line - function that print a line in the terminal
 * @n: integer parameter
 * Return: returns void
 */
void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar(10);
}
