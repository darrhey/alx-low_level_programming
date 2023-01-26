#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in list_t
 * @h: list_t list
 * Return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
size_t len;
len = 0;
while (h)
{
len++;
h = h->next;
}
return (len);
}
