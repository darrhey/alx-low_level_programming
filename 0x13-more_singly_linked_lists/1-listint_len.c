#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t
 * @h: list_t list
 * Return: the number of elements in h
 */

size_t listint_len(const listint_t *h)
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
