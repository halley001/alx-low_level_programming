#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: input parameter
 * Return: returns s
 */
char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'A' && s[i] <= 'Z')
{
s[i] = (s[i] - 'A' + 13) % 26 + 'A';
}
else if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = (s[i] - 'a' + 13) % 26 + 'a';
}
}
return (s);
}
