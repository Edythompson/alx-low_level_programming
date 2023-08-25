#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: head of the list
* Return: total nimber of nodes in the list
*/
size_t print_list(const list_t *h)
{
int i;
if (h == NULL)
return (0);
for (i = 0; h->next != NULL; i++)
{
if (h->str == NULL)
printf("[%lu] %s\n", h->len, "(nil)");
else
{
printf("[%lu] %s\n", h->len, h->str);
}
h = h->next;
}
printf("[%lu] %s\n", h->len, "(nil)");
return (i);
}


