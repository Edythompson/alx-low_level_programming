#include "main.h"
/**
* rev_string - prints a stirn in reverse
* @s: pointer pointing to the string
* Return: 0
*/
void rev_string(char *s)
{
    int length, z, half;
    char temp;
    
    for (length = 0; s[length] != '\0'; length++);

    half = length / 2;
    for (z = 0; z < half; z++)
    {
        temp = s[length - z - 1];
        s[length - z - 1] = s[z];
        s[z] = temp;
    }
}



