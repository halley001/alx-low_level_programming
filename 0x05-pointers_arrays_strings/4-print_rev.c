#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 * @s: string
 * Return: reverse string
 */
void print_rev(char *s)
{
int count = _strlen(s);

while (count > 1)
{
count--;
_putchar(s[count]);
}
_putchar('\n');
}

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
int count = 0;

while (s[count] != '\0')
{
count++;
}
return (count);
}
