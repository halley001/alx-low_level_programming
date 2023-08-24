#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer variable
 * Return: Return the modified string &&
 * Return 0 to indicate success
 */
char *cap_string(char *s)
{
int index = 0;

while (s[++index])
{
while (!(s[index] >= 'a' && s[index] <= 'z'))

index++;

if (s[index - 1] == ' ' ||
s[index - 1] == '\t' ||
s[index - 1] == '\n' ||
s[index - 1] == ',' ||
s[index - 1] == ';' ||
s[index - 1] == '.' ||
s[index - 1] == '!' ||
s[index - 1] == '?' ||
s[index - 1] == '"' ||
s[index - 1] == '(' ||
s[index - 1] == ')' ||
s[index - 1] == '{' ||
s[index - 1] == '}')
s[index] -= 32;
}
return (s);
}
