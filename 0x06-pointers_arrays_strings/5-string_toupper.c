#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @s: string
 * Return: lowercase letters
 */
char *string_toupper(char *s)
{
char *start = s;

while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
{
*s = *s - 32;
}
s++;
}
return (start);
}
