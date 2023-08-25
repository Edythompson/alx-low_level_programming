#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
* struct list_t - singly linked list
* @str: string (malloced string)
* @len: length of string 
* @next: pointer to the next node
*/
typedef struct list_t
{
char *str;
size_t len;
struct list_t *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
list_t *create_node(const char *str);
#endif
