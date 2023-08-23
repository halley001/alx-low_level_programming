#include "main.h"
/**
 *_strncpy - A function that copies a string to another string
 *@dest: pointer 1
 *@src: pointer 2
 *@n: integer parameter
 *Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
char* start = dest;
int count  = 0;

while (*src != '\0' && count < n)
{
*dest = *src;
dest++;
count++;
src++;
}
while (count < n)
{
*dest = '\0';
dest++;
count++;
}
return (start);
}
