#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Return the difference between the characters
 * at the first mismatch or zero if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
