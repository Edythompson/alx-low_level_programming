#include "lists.h"
/**
* list_len - length of the list
* @h: pointer to the first node
* Return: number of node in the list
*/
size_t list_len(const list_t *h)
{	
int i = 0;
if (h == NULL)	
return (i);
for (i = 1; h->next != NULL; i++)
h = h->next;
return (i);
}
