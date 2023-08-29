#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 *@s: pointer value
 *@to: value pointed to
 *
 */
void set_string(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
return (*s == c ? s : NULL);
}
