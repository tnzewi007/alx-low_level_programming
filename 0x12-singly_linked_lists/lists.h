#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>

/**
 * struct list - struct for a singly linked string
 * @str: String saved in a assigned memory
 * @len: length of the string
 * @next: pointer to the next node
 * Description: struct for a singly list.
 */

typedef struct list
{
char *str;
unsigned int len;
struct list *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char);

#endif /*_LISTS_H_*/
