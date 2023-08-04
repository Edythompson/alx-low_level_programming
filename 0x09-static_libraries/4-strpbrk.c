#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes for any of a set of bytes
* @s: The string to be searched
* @accept: the set of bytes to be search for
*
* Return: If a set is matched - a ppointer to the matched bytes
* if no set is matched - NULL
*/
char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}

