#include "main.h"
/**
* _strlen - checks the lnength of string
* @s: string to be checked
* Return: strig_length
*/
int _strlen(char *s)
{
 int string_length = 0;
  while (s[string_length])
        string_length++;
   return(string_length);
}
