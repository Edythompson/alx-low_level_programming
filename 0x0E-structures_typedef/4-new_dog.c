#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* _strlen - return the lenght of a string
* @s: string to evaluate
* Return: the length of the string
*/
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* _strcpy - copies the string pointed by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize 
* Return: the pointer to dest
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
en2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}

