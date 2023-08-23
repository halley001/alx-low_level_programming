#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer 1
 * @src: pointer 2
 * @n: parameter 1
 * Return: return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int des_len = 0;

while (dest[index++])
des_len++;

for (index = 0; src[index] && index < n; index++)
dest[des_len++] = src[index];

return (dest);
}
