#include "main.h"

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
