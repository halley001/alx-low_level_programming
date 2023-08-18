#include "main.h"
/**
*print_diagonal - function that draws a diagonal line on the terminal.
*@n:param
*Return: void
*/
void print_diagonal(int n)
{
int space, x;

if (n > 0)
{
for (space = 0; space < n; space++)
{
for (x = 0; x < space; x++)
_putchar(' ');

_putchar('\\');

if (space == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
