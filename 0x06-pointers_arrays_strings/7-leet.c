#include "main.h"
/**
* leet - function that encode a string
*@s:string parameter
*Return:returns encoded string
*/

char *leet(char *s)
{
int index1 = 0, index2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (s[++index1])
{
for (index2 = 0; index2 <= 7; index2++)
{
if (s[index1] == leet[index2] ||
s[index1] - 32 == leet[index2])
s[index1] = index2 + '0';
}
}
return (s);
}
