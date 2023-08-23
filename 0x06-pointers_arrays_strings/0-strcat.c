#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: string 1
 *@src: string 2
 *Return: returns a pointe to th resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0;
int des_len = 0;

while (dest[index++])
des_len++;

for (index = 0; src[index]; index++)
dest[des_len++] = src[index];

return (dest);
}
