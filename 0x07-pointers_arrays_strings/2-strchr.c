#include "main.h"
/**
 *_strchr - Returns a pointer to the first occurrence
 *of the character c in the string s, or NULL if the
 *character is not found
 *
 *@s:string targeted
 *@c:character targeted
 *
 *Return: returns pointer to first occcurence of c
 */

void char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
return (*s == c ? s : NULL);
}
