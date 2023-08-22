#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 * @s: string
 * Return: reverse string
 */
void print_rev(char *s)
{
int len = 0, index = 0;
len = _strlen(s);

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

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
