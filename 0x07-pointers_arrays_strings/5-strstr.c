#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return: return a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *t;

t = strstr(haystack, needle);
return (t);
}
