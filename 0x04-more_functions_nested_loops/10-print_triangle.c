#include "main.h"

/**
 *print_triangle -  function that prints a triangle
 *@size: param
 *Return: void
 *
 */
void print_triangle(int size)
{
int base, hieght;

if (size > 0)
{
for (base = 1; base <= size; base++)
{
for ((hieght = size - base); hieght > 0; hieght--)
_putchar(' ');

for (hieght = 0; hieght < base; hieght++)
_putchar('#');

if (base == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
