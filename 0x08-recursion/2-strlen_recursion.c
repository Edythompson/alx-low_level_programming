#include "main.h"
/**
* _strlen_recursion - return of length of string
* @s: pointer to string
*
* Return: length of stirng
*/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s +1));
}
else
{
return (0);
}
}
