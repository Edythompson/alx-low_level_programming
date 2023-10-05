
#include "main.h"
#include <stdlib.h>
/**
* _strdup - return a pointer to a newly allocated space in memory 
* also duplicate the string it holds to the new space
* @str: initail input string
* Return: pointer to the memory allocated which is an array of characters
*/
char *_strdup(char *str)
{
size_t i, j;
char *strdout;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
/* continue counting the length of the string */
}
strdout = malloc(sizeof(char) * (i + 1));
if (strdout == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
strdout[j] = str[j];
}
return (strdout);
}
