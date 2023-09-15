#include "main.h"
/**
 * rev_string -  function that reverses a string
 * @s: variable
 * @Return: void
 */
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
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
