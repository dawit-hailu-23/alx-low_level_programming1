#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_t - struct of linked list of string
 * @str: string
 * @len: length of the string
 * @next: pointer to the next memory
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_lists(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t, const char);
list_t *add_node_end(list_t **head, const char *str);
#endif
