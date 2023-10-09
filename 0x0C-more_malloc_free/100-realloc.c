#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* _realloc - reallocate a memoryinthe heap
* @ptr: former pointer to the old memory allocated by malloc
* @old_size: old size allocated by malloc in the heap
* @new_size: new size allocated by the realloc function
* Return: pointer to the newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, max;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}
p = malloc(new_size);
if (new_size > old_size)
max = old_size;
else
max = new_size;
for (i = 0; i < max; i++)
p[i] = ((char *) ptr)[i];
free(ptr);
return (p);
}
